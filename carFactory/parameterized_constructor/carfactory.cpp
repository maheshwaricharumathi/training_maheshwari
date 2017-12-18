#include "carfactory.h"
#include"car.h"

void main()
{
		car suzuki("suzuki", "petrol", 123, "jfhdskj");
		car volvo("volvo", "dessiel", 234, "dfsd");
		car pmw("pmw", "petrol", 456, "fgvd");
		car mars("mars", "petrol", 567, "sgf");
		car skoda("skoda", "dessiel", 789, "dfswd");

		suzuki.print_details();
		volvo.print_details();
		pmw.print_details();
		mars.print_details();
		skoda.print_details();
		system("pause");

}
