#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex()
{
	real = nullptr;
	imaginary = nullptr;
}
Complex::Complex(int* real, int* imaginary)
{
	setReal(real);
	setImaginary(imaginary);
}
Complex::Complex(Complex& obj)
{
	this->real = obj.getReal();
	this->imaginary = obj.getImaginary();
}
void Complex::setReal(int* real)
{
	this->real = real;
}
void Complex::setImaginary(int* imaginary)
{
	this->imaginary = imaginary;
}
int* Complex::getReal()
{
	return real;
}
int* Complex::getImaginary()
{
	return imaginary;
}
void Complex::addition(Complex& obj)
{
	int* ptr1 = obj.getReal();
	int* ptr2 = obj.getImaginary();
	*real = *real + *ptr1;
	*imaginary = *imaginary + *ptr2;
}
void Complex::substraction(Complex& obj)
{
	int* ptr1 = obj.getReal();
	int* ptr2 = obj.getImaginary();
	*real = *real - *ptr1;
	*imaginary = *imaginary - *ptr2;
}
void Complex::multiplication(Complex& obj)
{
	int* ptr1 = obj.getReal();
	int* ptr2 = obj.getImaginary();
	*real = *real * *ptr1;
	*imaginary = *imaginary * *ptr2;
}
void Complex::increment()
{
	*real = *real + 1;
	*imaginary = *imaginary + 1;
}
void Complex::display()
{
	cout << *real << "+" << *imaginary << "i" << endl;
}
Complex::~Complex()
{
	real = nullptr;
	imaginary = nullptr;
	delete real;
	delete imaginary;
}