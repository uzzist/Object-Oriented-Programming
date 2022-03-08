#pragma once
class Complex
{
public:
	Complex();
	Complex(int* , int*);
	Complex(Complex&);
	void setReal(int*);
	void setImaginary(int*);
	int* getReal();
	int* getImaginary();
	void addition(Complex&);
	void substraction(Complex&);
	void multiplication(Complex&);
	void increment();
	void display();
	~Complex();
private:
	int* real;
	int* imaginary;
};

