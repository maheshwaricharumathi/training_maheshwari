#pragma once
#include<iostream>
using namespace std;

class polymorphism
{
public:
virtual void display_function()
	 {
		 cout << " This is static binding in polymophism \n"; 
	 }
	 void display_function(int variable1)
	 {
		 cout << variable1 << endl;
	 }
	 void display_function(double variable2)
	 {
		 cout <<variable2<< endl;
	
	 }
	 void display_function(char char_variable)
	 {
		 cout <<char_variable << endl;
	 }
	 
};


　
