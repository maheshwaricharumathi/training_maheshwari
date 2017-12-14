#include<vector>
#include<iostream>
#include"employe.h"
#include"queuedata.h"
using namespace std;
class organization
{
public:
	employe empobj;
	queuedata queueobj;
public:
	void get_employee_details();
	void display_employee_details();
	void display_names();
	void highest_pay();
	void sorted_order();
	void update_pay();
		
};
	
