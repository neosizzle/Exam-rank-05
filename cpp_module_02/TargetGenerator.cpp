#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget*>::iterator iter;

	iter = this->_targets.begin();
	while(iter != this->_targets.end())
	{
		if (iter->second)
			delete iter->second;
		++iter;
	}
	this->_targets.clear();
}


void TargetGenerator::learnTargetType(ATarget* target)
{
	std::pair<std::string, ATarget *> pair;

	pair = std::make_pair(target->getType(), target->clone());
	this->_targets.insert(pair);
}

void TargetGenerator::forgetTargetType(std::string const &target_str)
{
	ATarget *target;

	target = this->_targets[target_str];
	if (target)
	{
		delete target;
		this->_targets.erase(target_str);
	}	
}

ATarget* TargetGenerator::createTarget(std::string const &target_str)
{
	std::map<std::string, ATarget *>::iterator iter;

	iter = this->_targets.find(target_str);
	if (iter != this->_targets.end())
		return this->_targets[target_str];
	else
		return NULL;
}