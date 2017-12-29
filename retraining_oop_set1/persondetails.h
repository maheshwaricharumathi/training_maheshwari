#pragma once
#include<iostream>
#include<string>
using namespace std;
class PersonDetails
{
public:
	bool isvalidchar(char);
	string UserName[10];
	int UserAge[10];
	string EmailId[10];
	int size;
	
	
public:
	void GetUserDetails();
	void display_details();
	int integer_validation();
	void UserName_validation();
	void Email_validation();
	};
