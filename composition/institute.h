
#pragma once
#include<iostream>
#include<string>
#include"student.h"
using namespace std;
class	institute
{

public:
	student Student;          //composition
	int InsCode;
	string InsName;
public:
	void InstDetail(int Code,string name)
	{
		Code = InsCode;
		InsName = name;
		cout << "Enter the student name" << endl;
			cin >> Student.name;
			cout << "Enter the department of student" << endl;
			cin >> Student.department;
		}
		void print()
	{
		cout << "InsCode is ==" <<InsCode << endl;
		cout << "Name of the Institute is==" <<InsName<< endl;
		cout << "The student name is==" << Student.name << endl;
		cout << "The department of the student is==" << Student.department << endl;
	
		
	}
};
