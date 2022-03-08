#pragma once
class Student
{
public:
	Student();
	Student(char*, char*);
	Student(Student&);
	void setFirstName(char*);
	void setLastName(char*);
	char* getFirstName();
	char* getLastName();
	void display();
	static int getCount();
	~Student();
private:
	char* firstName;
	char* lastName;
	static int count;
};

