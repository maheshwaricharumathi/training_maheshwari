#include "car.h"
car::car(string make_model, string fuel_type, int s_no, string mod)
{
	MakeModel = make_model;
	FuelType = fuel_type;
	SerialNo = s_no;
	model = mod;
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
	
 
