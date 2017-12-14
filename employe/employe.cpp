#include "employe.h"

　
　
　
void employe::year_validation()

{

　
	if (joining>=1880)
	{
		employee_year_of_joining.push_back(joining);
	}

	else
	{
		//cout << "Enter the valid data:" << endl;
		cin >> joining;
	}

}
int employe::integer_validation()
{
	int num = 0;
	while (!cin)
	{
		cout << "Enter an integer: ";
		cin >> num;
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> num;
	}

	return num;

}
