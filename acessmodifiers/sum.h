#pragma once
#include<iostream>
using namespace std;
class sum
{
protected:
	int a = 10,m,n;
	void protectedfun()
	{
		cout << "The base protected class"<<endl;
	}
	
	
private:
	int b=20;
	
public:
	int p=30,q;
public:
	sum()
	{}														//default constructor
	sum(int);												//parameterized constructor
	sum(const sum &s)										//copy constructor
	{
		cout << "copy constructor called" << endl;
	}																						
	void print();
	void publicfun(int x)										//Pass by value
	{  
	   int temp= x;
		int d = a+b+temp;                                       //private variable acessed in this function
		cout <<"the value of d in pass by value is"<<d<<endl;
	}
	void publicfun(int *v,int *s)								
	{
		int t = *v;
		cout << "The value of v in pass by reference is " << t << endl;   //pass by reference
	}
	void publicfun()
	{
		cout << "function overloading" << endl;							//function overloading
	}

};

sum::sum(int q1)				                                    //parameterized constructor function
{
	q = q1;
}
void sum::print()
{
	cout << "The value in parameterized constructor is" << q << endl;
}
class derived:protected sum
{
public:
	void publicfun()                                                //function overriding
	{
		
		cout << "function overriding" << endl;
		cout << "The public value of bas class"<<p<<endl;    //public data_member of baseclass
		cout << "The protected value of the base class"<<a<< endl;  //potected data_member of baseclass
	}
	void r1()
	{
		read();
		cout << "m1=" << m;
		cout << "n2=" << n;
	}
	
protected:
		void protectedfun()
		{
		cout << "child protected function" <<endl;
		}
		void read()
		{
			m = 20;
			n = 40;
			cout << "prpote cted function" << endl;
		}
private:
		void s()
		{
		cout << "Child pivate function" << endl;
		}
};
