	#pragma once
	class ComplexNumber
	{
	private:
		double re, im;
	public:
		ComplexNumber();//Default constructor
		ComplexNumber(double a, double i);//Value initialize constructor
		ComplexNumber(ComplexNumber& cmp);//Copy constructor
		void addValue(double a, double b);// Initialize complex number values 
		double complexAbs(); // Return absolute value of the complex number
		ComplexNumber operator +(const ComplexNumber& cmp);// "+" operator overload 
		ComplexNumber operator - (ComplexNumber& cmp);// "-" operator overload 
		ComplexNumber operator * (double numb);// "*" operator overload 
		void print() const;//Print complex number in standard form

	};
	void selectionSort(ComplexNumber cmp_arr[], int q);


