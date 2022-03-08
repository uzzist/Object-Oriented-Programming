#include<iostream>
using namespace std;

#pragma once
class Date
{
public:
	Date()
	{
		day = 1;
		month = 1;
		year = 1900;
	}
	Date(int day, int month, int year)
	{
		setDay(day);
		setMonth(month);
		setYear(year);
	}
	void setDay(int day)
	{
		this->day = day;
	}
	void setMonth(int month)
	{
		this->month = month;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	void setDate(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	int getDay()
	{
		return this->day;
	}
	int getMonth()
	{
		return this->month;
	}
	int getYear()
	{
		return this->year;
	}
	void showDate()
	{
		cout << day << "/" << month << "/" << year << endl;
	}
	~Date()
	{

	}
private:
	int day;
	int month;
	int year;
};

#pragma once
class Employee
{
public:
	Employee()
	{
		code = 0;
		name = nullptr;
	}
	Employee(int code, char* name, int bday, int bmonth, int byear, int jday, int jmonth, int jyear)
	{
		this->code = code;
		this->name = name;
		dob.setDate(bday, bmonth, byear);
		doj.setDate(jday, jmonth, jyear);
	}
	void setCode(int code)
	{
		this->code = code;
	}
	void setName(char* name)
	{
		this->name = name;
	}
	void setDateOfBirth(int bday, int bmonth, int byear)
	{
		dob.setDate(bday, bmonth, byear);
	}
	void setDateOfJoining(int jday, int jmonth, int jyear)
	{
		doj.setDate(jday, jmonth, jyear);
	}
	int getCode()
	{
		return code;
	}
	char* getName()
	{
		return name;
	}
	int getBirthYear()
	{
		return dob.getYear();
	}
	void displayData()
	{
		cout << "Employee Code: " << code << endl;
		cout << "Employee Name: " << name << endl;
		cout << "Date of Birth: ";
		dob.showDate();
		cout << "Date of Joining: ";
		doj.showDate();
	}
	~Employee()
	{
		name = nullptr;
		delete name;
	}
private:
	int code;
	char* name;
	Date dob;
	Date doj;
};

int main()
{
	char n1[20];
	char n2[20];
	char n3[20];
	int c1;
	int bday, bmonth, byear;
	int jday, jmonth, jyear;
	cout << "Employee 1 enter your employee code: ";
	cin >> c1;
	cout << "Employee 1 enter your name: ";
	cin >> n1;
	cout << "Employee 1 enter your birth day: ";
	cin >> bday;
	cout << "Employee 1 enter your birth month: ";
	cin >> bmonth;
	cout << "Employee 1 enter your birth year: ";
	cin >> byear;
	cout << "Employee 1 enter your day of joining: ";
	cin >> jday;
	cout << "Employee 1 enter your month of joining: ";
	cin >> jmonth;
	cout << "Employee 1 enter your year of joining: ";
	cin >> jyear;
	Employee* e1 = new Employee(c1,n1,bday,bmonth,byear,jday,jmonth,jyear);
	cout << "Employee 2 enter your employee code: ";
	cin >> c1;
	cout << "Employee 2 enter your name: ";
	cin >> n2;
	cout << "Employee 2 enter your birth day: ";
	cin >> bday;
	cout << "Employee 2 enter your birth month: ";
	cin >> bmonth;
	cout << "Employee 2 enter your birth year: ";
	cin >> byear;
	cout << "Employee 2 enter your day of joining: ";
	cin >> jday;
	cout << "Employee 2 enter your month of joining: ";
	cin >> jmonth;
	cout << "Employee 2 enter your year of joining: ";
	cin >> jyear;
	Employee* e2 = new Employee(c1, n2, bday, bmonth, byear, jday, jmonth, jyear);
	cout << "Employee 3 enter your employee code: ";
	cin >> c1;
	cout << "Employee 3 enter your name: ";
	cin >> n3;
	cout << "Employee 3 enter your birth day: ";
	cin >> bday;
	cout << "Employee 3 enter your birth month: ";
	cin >> bmonth;
	cout << "Employee 3 enter your birth year: ";
	cin >> byear;
	cout << "Employee 3 enter your day of joining: ";
	cin >> jday;
	cout << "Employee 3 enter your month of joining: ";
	cin >> jmonth;
	cout << "Employee 3 enter your year of joining: ";
	cin >> jyear;
	Employee* e3 = new Employee(c1, n3, bday, bmonth, byear, jday, jmonth, jyear);
	cout << endl;
	e1->displayData();
	cout << endl;
	e2->displayData();
	cout << endl;
	e3->displayData();

	int age1 = 0, age2 = 0, age3 = 0;

	age1 = 2022 - e1->getBirthYear();
	age2 = 2022 - e2->getBirthYear();
	age3 = 2022 - e3->getBirthYear();

	cout << "\n\nEmployees with age more than 30: \n";

	if (age1 > 30)
	{
		e1->displayData();
		cout << endl;
	}
	if (age2 > 30)
	{
		e2->displayData();
		cout << endl;
	}
	if (age3 > 30)
	{
		e3->displayData();
		cout << endl;
	}

	delete e1;
	delete e2;
	delete e3;
	return 0;
}