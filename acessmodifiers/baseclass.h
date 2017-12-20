
#pragma once
#include<iostream>
using namespace std;
class baseclass
{
protected:
	int value1= 10, num1, num2;
	void protectedfunction()
	{
		cout << "The base protected class" << endl;
	}
private:
	int value2 = 20;
	void privatefunction()
	{
		cout << "Base private function" << endl;
	}
public:
	int value3 = 30, num3;
public:
	baseclass()
	{
		cout << "Default constructor" << endl;
	}														//default constructor
	baseclass(int);												//parameterized constructor
	baseclass(const baseclass &objref)										//copy constructor
	{
		cout << "copy constructor called" << endl;
	}
	void printfunction();
	void publicfunction(int formal_var)										//Pass by value
	{
		int temp_var = formal_var;
		int num4 = value1 + formal_var + temp_var;                                       //private variable acessed in this function
		cout << "the value of d in pass by value is" << num4 << endl;
	}
	void publicfunction(int *formal_var1, int *formal_var2)
	{
		int temp_var = *formal_var1;
		cout << "The value of v in pass by reference is " << temp_var << endl;   //pass by reference
	}
	void publicfunction()
	{
		cout << "function overloading" << endl;							//function overloading
	}
	void overriding_function()
	{
		cout << "this is baseclass overriding" << endl;
	}
	void calling_function()
	{
		privatefunction();
		protectedfunction();

	}

};

baseclass::baseclass(int formal_variable)				                                    //parameterized constructor function
{
	num3 = formal_variable;
}
void baseclass::printfunction()
{
	cout << "The value in parameterized constructor is" << num3 << endl;
}
class derived :public baseclass
{
public:
	void overriding_function()                                                //function overriding
	{
		
		cout << "derived class overriding function" << endl;
		baseclass::overriding_function();

		cout << "The protected value of the base class" << value1 << endl;  //potected data_member of baseclass
		cout << "The public value of bas class" << value3 << endl;        //public data_member of baseclass

	}

	void derivedprotected()
	{
		protectedfunction();
		derivedprotectedfunction();
			
	}
	void derivedprivate()
	{
		
		derivedprivatefunction();
	}
protected:
	void derivedprotectedfunction()
	{
		cout << "derived class protectd function" << endl;
	}
private:
	void derivedprivatefunction()
	{
		cout << "Child pivate function" << endl;
	}
};
