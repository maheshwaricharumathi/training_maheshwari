#include "car.h"

void car::get_details()

{
cout << "Enter the make model" << endl;
cin >> MakeModel;
cout << "Enter the fuel_type" << endl;
cin >> FuelType;
cout << "Enter the serialno" << endl;
cin >> SerialNo;
cout << "Entre the model" << endl;
cin >> model;

}
void car::print_details()
{
	cout << "The MakeModel is" << endl;
	cout << MakeModel << endl;
	cout << "The fueltype is" << endl;
	cout << FuelType << endl;
	cout << "The serialNo is" << endl;
	cout << SerialNo << endl;
	cout << "The model is" << endl;
	cout << model << endl;
}
	
 
