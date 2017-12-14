#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class employe
{
public:
vector<int>employee_id;
vector<string>emp_id;
vector<string>employee_name;
vector<int>employee_year_of_joining;
vector<float>employee_salary;
vector<string>employee_department;
int id = 101;
string id_value = "EMP";
string name;
int joining;
float salary=0.0;
string department;

public:
	void year_validation();
	int integer_validation();

　
};
