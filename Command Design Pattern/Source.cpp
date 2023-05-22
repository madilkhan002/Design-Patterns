#include<bits/stdc++.h>
using namespace std;
#define I_WANT_TO_EAT_PANCREASE 0;

class Email
{
public:
	string receiverMail,message,senderMail;
	Email(string senderMail,string receiverMail, string message) :receiverMail(receiverMail), message(message),
		senderMail(senderMail)
	{

	}
	void sendMail()
	{
		cout << "Sender Mail : " << senderMail << '\n';
		cout << "Receiver Mail : " << receiverMail << '\n';
		cout << "Message : " << message << '\n';
		cout << "Email sent successfully.....\n";
	}
};

class Command
{
public:
	virtual void execute() = 0;
};

class ConcreateCommand1 : public Command
{
public:
	string Name;
	ConcreateCommand1(string Name) :Name(Name) {

	}
	void execute() override
	{
		cout << "Your Name : " << Name << '\n';
	}
};

class ConcreateCommand2 : public Command
{
public:
	Email* email;
	ConcreateCommand2(Email* email):email(email) {

	}
	void execute() override
	{
		email->sendMail();
	}
};


// Invoker Class Acts as a middleware between the Command and the user
class Invoker
{
public:
	Command* _command;
	void setCommand(Command* command)
	{
		_command = command;
	}
	void performTask()
	{
		_command->execute();
	}
};
int main()
{
	Email* mail = new Email("adil002@gmail.com", "yourname@hotmail.com", "Do What is Required Not What You Love");
	Invoker* invoker = new Invoker();
	ConcreateCommand2* command2 = new ConcreateCommand2(mail);
	invoker->setCommand(command2);
	invoker->performTask();



	delete mail;
	delete invoker;
	delete command2;
	return I_WANT_TO_EAT_PANCREASE
}