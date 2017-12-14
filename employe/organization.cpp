#include"organization.h"
#include"queuedata.h"
#include<string>
using namespace std;

void organization::get_employee_details()
{
	static int id = 101;
	cout << "Enter the employee details" << endl;
	empobj.employee_id.push_back(empobj.id);
	cout << "Enter the employee name:\n" << endl;
	cin >> empobj.name;
	empobj.employee_name.push_back(empobj.name);
	cout << "Enter the year of joining:\n" << endl;
	cin >> empobj.joining;
	empobj.integer_validation();
	empobj.year_validation();
	empobj.employee_year_of_joining.push_back(empobj.joining);
	cout << "Enter the emp salary:\n"<< endl;
	cin >> empobj.salary;
	empobj.integer_validation();
	empobj.employee_salary.push_back(empobj.salary);
	cout << "Enter the department of employee:\n" << endl;
	cin >> empobj.department;
	empobj.employee_department.push_back(empobj.department);
	std::string emp_id = std::to_string(empobj.id);
	emp_id = empobj.id_value +emp_id;
	empobj.emp_id.push_back(emp_id);
	empobj.id = empobj.id++;
	queueobj.employee_details(empobj.employee_id);

}
void organization::display_employee_details()
{
	cout << "The employee details" << endl;
	for (int i = 0; i <empobj.employee_id.size(); i++)
	{
		cout << "The employee id:" << endl;
		cout << empobj.emp_id[i] << endl;;
		cout << "The name of the employee:" << endl;
		cout << empobj.employee_name[i] << endl;
		cout << "The year of joining:" << endl;
		cout <<empobj.employee_year_of_joining[i] << endl;
		cout << "The salary of the employee:" << endl;
		cout << empobj.employee_salary[i] << endl;
		cout << "The emp_department:" << endl;
		cout << empobj.employee_department[i] << endl;

　
	}
}
void organization::display_names()
{
	int year,temp_variable=0;
	cout << "Enter the year of joining:" << endl;
	cin >> year;
year:empobj.integer_validation();
	if (!cin.fail())
	{
		for (int i = 0; i < empobj.employee_id.size(); i++)
		{
			if (empobj.employee_year_of_joining[i] == year)
			{
				cout << empobj.employee_name[i] << endl;
				temp_variable++;
			}
		}
		if (temp_variable == 0)
		{
			cout << "the entered year is not available" << endl;
		}
	}
	else
	{
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Invalid";
	}
}

void organization::sorted_order()
{
	for (int i = 0; i < empobj.employee_id.size(); i++)
	{
		cout << "The emp_id:" << endl;
		cout << empobj.emp_id[i]<<endl;
		cout << "Emp_name:" << endl;
		cout << empobj.employee_name[i] << endl;
		cout << "emp_year_of_joining:" << endl;
		cout << empobj.employee_year_of_joining[i] << endl;
		cout << "emp_salary:" << endl;
		cout << empobj.employee_salary[i] << endl;
		cout << "emp_department:" << endl;
		cout << empobj.employee_department[i]<<endl;
		
	}
}
void::organization::update_pay()
{
	int id, temp_variable = 0;
	cout << "Enter the employee id to update pay:" << endl;
	cin >> id;
	if (!cin.fail())
	{
		for (int i = 0; i < (int)empobj.employee_id.size(); i++)
		{
			if (empobj.employee_id[i] == id)
			{
				empobj.employee_salary[i] = empobj.employee_salary[i] * 1.05;
				cout << "Updated employee_salary is:" << endl;
				cout << empobj.employee_salary[i];
				temp_variable++;
			}
		}
	
	if (temp_variable == 0)
	{
		cout << "entered id not available" << endl;
	}
}
	else
	{
		cin.clear();
		cin.ignore(10000,'\n');
		cout << "Invalid data" << endl;
	}
	}
void organization::highest_pay()

{
	float temp_variable = 0.0;
	int position = 0, i = 0, flag = 0;
	string department;
	cout << "Enter the department of the employee:" << endl;
	cin >> department;
	for (i = 0; i <(int)empobj.employee_id.size(); i++)
	{
		if (empobj.employee_department[i] == department)
		{
			if (empobj.employee_salary[i]>temp_variable)
			{
				temp_variable = empobj.employee_salary[i];
				position = i;
				flag = 1;

			}

		}

	}
	if (flag == 0)
	{
		cout << "no records:" << endl;
	}
	if (flag != 0)
	{
		cout << "the employee id:" << endl;
		cout << "EMP";
		cout << empobj.employee_id[position] << endl;
		cout << "The employee name" << endl;
		cout << empobj.employee_name[position] << endl;
		cout << "The year of joining:" << endl;
		cout << empobj.employee_year_of_joining[position] << endl;
		cout << "The salary of the employee:" << endl;
		cout << empobj.employee_salary[position] << endl;
		cout << "the department of employee:" << endl;
		cout << empobj.employee_department[position] << endl;
	}
}
	
int main()
{
	employe empobj;
	organization orgobj;
	int choice;

	while (1)
	{
		cout << "Enter your choice:" << endl;
		cout << "1.get_employee_details:" << endl; cout << "2.display_employee_details:" << endl; cout << "3.display names regarding year of joining:" << endl;
		cout << "4.displaying_highest_pay_in particular_department:" << endl; cout << "5.ascending order" << endl; cout << "6.update pay:" << endl; cout << "7.give the employee details into queue" << endl;
		cout << "8.queue_operations " << endl; cout << "9.exit" << endl;
		cout << "Enter your choice:" << endl;
		cin >> choice;
		switch (choice)
			{
			case 1:

				cout << "get details of the employee:" << endl;
				orgobj.get_employee_details();
				break;
			case 2:
				cout << "display the employee details:" << endl;
				orgobj.display_employee_details();
				break;
			case 3:
				cout << "Display the names regarding the date_of_joining:" << endl;
				orgobj.display_names();
				break;
			case 4:
				cout << "update pay" << endl;
				orgobj.highest_pay();
				break;
			case 5:
				cout << "ascending_order:" << endl;
				orgobj.sorted_order();
				break;
			case 6:
				cout << "update_the_pay:" << endl;
				orgobj.update_pay();
				break;
			case 7:
				orgobj.queueobj.bench_details();
				orgobj.queueobj.project_details();
				orgobj.queueobj.display_bench_details();				
				orgobj.queueobj.display_poject_details();
				break;
			case 8:
				orgobj.queueobj.remove_from_project();
				orgobj.queueobj.remove_from_bench();
				orgobj.queueobj.add_employee_to_project();
				orgobj.queueobj.add_employee_to_bench();
				orgobj.queueobj.after_insertion_deletion();
				break;
			case 9:
				exit(0);
				break;
			default:
				cout << "THIS IS DEFAULT STATEMENT" << endl;
				break;
			}
		}
		
}
