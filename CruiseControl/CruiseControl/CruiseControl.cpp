#include "CruiseControl.h"

CruiseControl::CruiseControl(int _currentSpeed, int _targetSpeed) {
	currentSpeed = _currentSpeed;
	targetSpeed = _targetSpeed;
}

CruiseControl::~CruiseControl() {

}

void CruiseControl::maintainSpeed() {
	int count = 0;

	while (true) {
		if (currentSpeed < targetSpeed) {
			currentSpeed = currentSpeed + 1;
		}
		else if (currentSpeed > targetSpeed) {
			currentSpeed = currentSpeed - 1;
		}


		slope = setSlope();
		currentSpeed = currentSpeed + slope;


		if (currentSpeed == 100) {
			count++;
		}

		cout << "Current speed: " << currentSpeed << "km/h" << endl;
		this_thread::sleep_for(chrono::milliseconds(50));
		if (count == 10) {
			cout << "\n****************************************";
			cout << "\n* The speed of the car is fixed at 100 *";
			cout << "\n****************************************";
			break;
		}
	}
}

int CruiseControl::setSlope() {
	random_device rand;
	mt19937 gen(rand());
	uniform_int_distribution<> dis(-1, 1);
	return dis(gen);
}