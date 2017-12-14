#include "queuedata.h"

void queuedata::employee_details(vector<int>employee_id)
{
	employe_id.swap(employee_id);
}
void queuedata::bench_details()
{
	int flag = 0;
	cout << "Enter the employee_id" << endl;
	cin >> emp_id;
	for (int i = 0; i < employe_id.size(); i++)
	{

		if (employe_id[i] == emp_id)
		{

			bench_member.push_back(emp_id);
			flag++;
		}
	}
	if (flag == 0)
	{
		cout << "The id is not available" << endl;
	}
	
}
void queuedata::display_bench_details()
{
	for (int i = 0; i < bench_member.size(); i++)
	{
		cout << "The employee in bench" << endl;
		cout << bench_member[i]<< endl;
	}
}

void queuedata::project_details()
{
	int flag = 0;
	cout << "Enter the employee  in project" << endl;
	cin >> emp_id;
	for (int i = 0; i < employe_id.size(); i++)
	{
		if (employe_id[i] == emp_id)
		{

			project_member.push_back(emp_id);
			flag++;
		}
	}
	if (flag == 0)
	{
		cout << "The id not available" << endl;
	}
}

void queuedata::display_poject_details()
{
	int flag = 0;
	for (int i = 0; i <project_member.size(); i++)
	{
		cout << "The employee id in project" << endl;
		cout << project_member[i]<< endl;
		flag++;
	}
	if (flag==0)
	{
		cout << "the id not available" << endl;
	}
}
void queuedata::remove_from_project()
{
	add_member_to_bench = project_member.front();

	project_member.erase(project_member.begin());
}

void queuedata::remove_from_bench()
{
    
	add_member_to_project = bench_member.front();
	
	bench_member.erase(bench_member.begin());

}

void queuedata::add_employee_to_project()
{
	project_member.push_back(add_member_to_project);
}
void queuedata::add_employee_to_bench()
{
	bench_member.push_back(add_member_to_bench);
}
void queuedata::after_insertion_deletion()
{
	
	for (int i = 0; i < bench_member.size(); i++)
	{
		cout << "The employee in bench" <<endl;
		cout << bench_member[i]<<endl;
	}
	for (int i = 0; i < project_member.size(); i++)
	{
		cout << "The employee in project queue" << endl;
		cout << project_member[i] << endl;
	}
}

　
　
