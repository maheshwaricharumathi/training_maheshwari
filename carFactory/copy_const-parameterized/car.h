#pragma once
#include<string>
#include<iostream>
using namespace std;
class car
{
public:
	string MakeModel;
	string FuelType;
	int SerialNo;
	string model;
	public:
		car()
		{}
		car(string, string, int, string);
		car(const car &c)
		{
			cout << "copy constructor called" << endl;
		}
    void get_details();
	void print_details();
};

　
	
