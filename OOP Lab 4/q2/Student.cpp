#include "Student.h"
#include<iostream>
using namespace std;

int Student::count = 0;

int Student::getCount()
{
	return count;
}

Student::Student()
{
	firstName = nullptr;
	lastName = nullptr;
	++count;
}
Student::Student(char* fname, char* lname)
{
	setFirstName(fname);
	setLastName(lname);
	++count;
}
Student::Student(Student& obj)
{
	firstName = obj.getFirstName();
	lastName = obj.getLastName();
	++count;
}
void Student::setFirstName(char* fname)
{
	firstName = fname;
}
void Student::setLastName(char* lname)
{
	lastName = lname;
}
char* Student::getFirstName()
{
	return firstName;
}
char* Student::getLastName()
{
	return lastName;
}
void Student::display()
{
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
}
Student::~Student()
{
	firstName = nullptr;
	lastName = nullptr;
	delete firstName;
	delete lastName;
	--count;
}