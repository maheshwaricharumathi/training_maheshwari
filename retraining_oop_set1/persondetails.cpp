#include "PersonDetails.h"

void PersonDetails::GetUserDetails()
{
	cout << "Enter the size" << endl;
	cin >> size;
	for (int count = 0; count < size; count++)
	{
		cout << "Enter the username" << endl;
		cin >> UserName[count];
		//UserName_validation();
		cout << "Enter the age" << endl;
		cin >> UserAge[count];
		try
		{
			if (UserAge[count] < 0)
			{
				cout << "This is not a  positive integer" << endl;
				throw UserAge[count];

			}
		}
		catch (int Age)
		{
			cout << "EXCEPTION OCCURED:bad Exception" << endl;
		}
		try
		{
			if (UserAge[count] > 0 && UserAge[count] < 16)
			{
				cout << "The user under 16" << endl;
				throw UserAge[count];
			}
		}
		catch (int age1)
		{
			cout << "Exception occured:Logic error" << endl;
		}
		cout << "Enter the email_id" << endl;
		cin >> EmailId[count];
		if (EmailId[count].find('@'))
		{
			if (EmailId[count].find('.'))
			{
			cout << "Valid email_id" << endl;
			}
		}
		else
		{
			cout << "invalid email id" << endl;
		}
	}
}
void PersonDetails::display_details()
{
	for (int count = 0; count < size; count++)
	{
		cout << UserName[count] << endl;
		cout << EmailId[count] << endl;
	}
}
void PersonDetails::UserName_validation()
{
	for (int count = 0; count < size; count++)
	{
		if (UserName[count] == UserName[count+1])
		{
		cout << "The user name exits already" << endl;
		}
	}
}
void main()
{
	PersonDetails object;
	object.GetUserDetails();
	object.display_details();
	system("pause");
}
