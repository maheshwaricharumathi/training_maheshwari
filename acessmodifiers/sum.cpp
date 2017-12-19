#include "sum.h"

void  main()
{
	
	sum baseobj;
	sum constobj = baseobj;
	sum paramconst(20);
	derived derivedobj;
	int c = 100;
	int e = 50,s=90;
	derivedobj.r1();
	paramconst.print();
	baseobj.publicfun(c);
	baseobj.publicfun(&e,&s);
	baseobj.publicfun();
	derivedobj.publicfun();
	system("pause");

}

　
