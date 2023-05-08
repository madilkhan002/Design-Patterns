/*
	Difference b/w Proxy : Proxy has the same interface as its service(Here EmployeeDao) object, which makes them interchangeable.But Facade is indepentdent Class
*/
#include"EmplpyeeDao.h"
#include"FacadeEmployee.h"

int main()
{
	EmployeeDao employeeDao;
	EmployeeFacade employeeFacade;

	employeeDao.insertData(1);
	employeeFacade._update(1);
}