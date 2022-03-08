#include "Complex.h"
#include<iostream>
using namespace std;

int main()
{
	int r1 = 5;
	int i1 = 7;
	int r2 = 4;
	int i2 = 3;
	Complex obj1(&r1,&i1);
	Complex obj2(&r2, &i2);
	obj1.increment();
	obj2.increment();
	obj1.addition(obj2);
	obj1.display();
	obj2.display();
	return 0;
}