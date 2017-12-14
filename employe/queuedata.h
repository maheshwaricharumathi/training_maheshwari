
#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"employe.h"
using namespace std;
class queuedata
{
public:
	vector<int>employe_id;
	vector<int>bench_member;
	vector<int>project_member;
    int emp_id;
	int add_member_to_project=0;
	int add_member_to_bench = 0;
		
public:
	void employee_details(vector<int>employee_id);
	
	void bench_details();
	void display_bench_details();
	void project_details();
	void display_poject_details();
	void remove_from_project();
	void remove_from_bench();
	void add_employee_to_project();
	void add_employee_to_bench();
	void after_insertion_deletion();
	
};
