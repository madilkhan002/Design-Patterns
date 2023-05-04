#pragma once
#include"studentBuilder.h"

class EngineeringStudent : public StudentBuilder
{
public:
	StudentBuilder *setSubjects()
	{
		subjects.push_back("Depression");
		subjects.push_back("Anxiety");
		subjects.push_back("DSA");
		return this;
	}
};