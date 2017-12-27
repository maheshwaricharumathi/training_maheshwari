#include "polymor_base.h"

　
void main()
{
	
	Base *bp;
	Derived dp;
	bp = &dp;
	bp->display_function();								//The derived class function called using base object;by using the virtual keyword in base class
	dp.display_function();              //it overrride the base display_function and it will call the derived class display_function
	dp.print_function();							//The baseclass function called by using derived object
	system("pause");
}
