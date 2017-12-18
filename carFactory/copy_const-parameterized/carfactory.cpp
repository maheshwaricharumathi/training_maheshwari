#include "carfactory.h"
#include"car.h"

void main()
{
	car suzuki,volvo("dfgd","dfgdf",345,"ghbf");
	car mars = suzuki;
	car pmw = suzuki;
	car skoda = suzuki;
		suzuki.get_details();
		suzuki.print_details();
		mars.get_details();
		mars.print_details();
		//volvo.get_details();
		volvo.print_details();
		pmw.get_details();
		pmw.print_details();
		skoda.get_details();
		skoda.print_details();
		system("pause");

}
