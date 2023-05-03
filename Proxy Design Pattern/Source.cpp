#include<bits/stdc++.h>
using namespace std;

class Employee
{
public:
	int emp_id;
};

// interface of empleyee
class EmployeeInterface
{
public:
	EmployeeInterface(){}
	virtual void Create(string client, Employee *obj) = 0;
	virtual void Delete(string client, int emp_id) = 0;
	virtual void Get(string client, int emp_id) = 0;
};


// concrete class where we actually do manipulation
class EmpolyeeConcrete : public EmployeeInterface
{
public:
	EmpolyeeConcrete() {}
	void Create(string client, Employee *obj) override
	{
		cout << "EMPLOYEE CREATED SUCCESSFULLY....\n";
	}

	void Delete(string client, int emp_id) override
	{
		cout << "EMPLOYEE DELETED SUCCESSFULLY... WITH ID : " <<  emp_id << endl;
	}

	void Get(string client, int emp_id) override
	{
		cout << "HERE IS THE DETAIL OF EMPLOYEE WITH ID : " <<  emp_id << endl;
	}

};


// proxy class
class EmployeeProxy: public EmployeeInterface
{
	EmpolyeeConcrete * employeeConcrete;
public:
	
	EmployeeProxy()
	{
		employeeConcrete = new EmpolyeeConcrete();
	}

	void Create(string client, Employee *obj) override
	{
		if (client == "ADMIN")
		{
			employeeConcrete->Create(client, obj);
		}
		else
		{
			cout << "ACCESS DENIED\n";
		}
	}

	void Delete(string client, int emp_id) override
	{
		if (client == "ADMIN")
		{
			employeeConcrete->Delete(client, emp_id);
		}
		else
		{
			cout << "ACCESS DENIED\n";
		}
	}

	void Get(string client, int emp_id) override
	{
		if (client == "ADMIN")
		{
			employeeConcrete->Get(client, emp_id);
		}
		else
		{
			cout << "ACCESS DENIED\n";
		}
	}

};


int main()
{
	EmployeeProxy employeeProxy;
	employeeProxy.Create("ADMIN", new Employee());
	employeeProxy.Delete("ADMIN", 4);


}