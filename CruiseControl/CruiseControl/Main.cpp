#include "CruiseControl.h"
#include <iostream>
using namespace std;



int main() {
	CruiseControl* car1 = new CruiseControl(0, 100);

	car1->maintainSpeed();


	cout << endl; 
	return 0;
}