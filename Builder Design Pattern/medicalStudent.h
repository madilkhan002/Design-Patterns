#pragma once
#include"studentBuilder.h"

class MedicalStudent : public StudentBuilder
{
public:
	StudentBuilder *setSubjects()
	{
		subjects.push_back("Anatomy");
		subjects.push_back("Human Organs");
		subjects.push_back("Pathology");
		return this;
	}
};