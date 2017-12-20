
　
#include "baseclass.h"

void  main()
{

	baseclass baseobj;
	baseclass constobj = baseobj;
	baseclass paramconst(20);
	derived derivedobj;
	int actual_variable1 = 100;
	int actual_variable2 = 50, actual_variable3 = 90;
	derivedobj.r1();
	paramconst.printfunction();
	baseobj.publicfunction(actual_variable1);
	baseobj.privatecallfunction();
	baseobj.publicfunction(&actual_variable2, &actual_variable3);
	baseobj.publicfunction();
	derivedobj.publicfunction();
	system("pause");

}
