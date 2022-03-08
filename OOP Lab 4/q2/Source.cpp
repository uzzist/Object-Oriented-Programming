#include "Student.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "Count before object creation: " << Student::getCount() << endl;
	char fname[20] = "Muhammad";
	char lname[20] = "Uzair";
	Student* obj1 = new Student(fname, lname);
	Student* obj2 = new Student(fname, lname);
	cout << "Count after object creation: " << Student::getCount() << endl;
	delete obj1;
	delete obj2;
	cout << "Count after object deletion: " << Student::getCount() << endl;
	return 0;
}