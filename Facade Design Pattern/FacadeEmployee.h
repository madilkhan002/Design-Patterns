#pragma once
#include"EmplpyeeDao.h"

class EmployeeFacade
{
	EmployeeDao employeeDao;
public:
	void _insert(int id)
	{
		employeeDao.insertData(id);
	}
	void _update(int id)
	{
		employeeDao.updateData(id);
	}
};