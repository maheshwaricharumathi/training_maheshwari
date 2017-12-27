#include "polymor_base.h"

　
void main()
{
	
	polymorphism object;                 //object creation 
	int variable1 = 30;
	double variable2 = 30.576474858658;
	char char_variable = 'v';
	object.display_function();					  //The functions having the same name as function name  but the parameters are different			
	object.display_function(variable1);
	object.display_function(variable2);
	object.display_function(char_variable);
	system("pause");
}
