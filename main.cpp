#include "rhombus.h"
#include "rectangle.h"
#include <iostream>

using namespace std;

int main(){
	Rhombus test (2,2);
	test.Dump();
	test.GetArea();
	cout << test << endl;
	cout << "Enter diagH and diagV:" ;
	cin >> test;
	cout << test << endl << endl;

	Rectangle obj_rect(2,3);
	obj_rect.Dump();
	obj_rect.GetArea();
	cout << obj_rect << endl;
	cout << "Enter length and width: "; 
	cin >> obj_rect;
	cout << obj_rect;

	return 0;
}

