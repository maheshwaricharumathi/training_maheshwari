#include "carfactory.h"
#include"car.h"

void main()
{
	car suzuki,volvo,pmw,skoda;
	car mars=volvo;               //copy constructor
		suzuki.get_details();
		suzuki.print_details();
		mars.get_details();
		mars.print_details();
		volvo.get_details();
		volvo.print_details();
		pmw.get_details();
		pmw.print_details();
		skoda.get_details();
		skoda.print_details();
		system("pause");

}
