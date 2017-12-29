#pragma once
#include<iostream>
#include<vector>
using namespace std;
class CustomVector
{
private:
	vector<int>custom;
	vector<double>array_values;
	int length;
public:

	CustomVector(vector<int>custom)
	{
		cout << "The size of the vector is beforing inserting the elements" << custom.size() << endl;
		custom.push_back(10);
		custom.push_back(20);
		cout << "The size of the vector is after inserting the elements" << custom.size()<<endl;
	}
	
	CustomVector(vector<int>length,vector<double>array_values)
	{

	
		   //initializing the values 
			array_values.push_back(1);
			array_values.push_back(2);
			array_values.push_back(3);
			array_values.push_back(4);
			array_values.push_back(5);
			array_values.push_back(6);
			cout << array_values[1] << endl;
			cout << array_values[2] << endl;
			cout << array_values[3] << endl;
			cout << array_values[4] << endl;
			cout << array_values[5] << endl;
			cout << array_values[6] << endl;
			cout << "the size of length is " << length.size() << endl;;

		
	}
	
	CustomVector::CustomVector(const CustomVector  &paracust)
	{
		cout << "Copy constructor called" << endl;
		cout << length;
	}
CustomVector(int length)
	{
		cout << "The length is" << length << endl;
	}

};
