#pragma once
#include<iostream>
using namespace std;

class dynamic_base
{
public:
virtual void display_function()            
	 {
		 cout << " In Base \n"; 
	 }
	 
	 void print_function()
	 {
		 cout << "base print function" << endl;
	 }
};
class Derived : public dynamic_base
{
public:
	void display_function() 
	{
		cout << "In Derived \n"; 
	}
	
};

　
