#pragma once
#include"engineeringStudentBuilder.h"
#include"medicalStudent.h"
#include"studentBuilder.h"
#include"student.h"


class Director
{
	StudentBuilder* studentBuilder;
public:
	Director(StudentBuilder* studentBuilder)
	{
		this->studentBuilder = studentBuilder;
	}


	Student* createEngineeringStudent()
	{
		return new Student(studentBuilder->setName("Adil")->setCgpa("3.46")->setRollno("0153")->setFeeStatus(1)->setSubjects());
	}

	Student* createMedicalStudent()
	{
		return new Student(studentBuilder->setName("Iman")->setSubjects()->setCgpa("4.00")->setFeeStatus(0)->setRollno("0666"));
	}
};
