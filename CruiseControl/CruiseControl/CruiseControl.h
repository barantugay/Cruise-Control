#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <random>
using namespace std;

class CruiseControl{
private:
	int currentSpeed;
	int targetSpeed;
	int slope;

public:
	CruiseControl(int _currentSpeed, int _targetSpeed);
	~CruiseControl();

	void maintainSpeed();
	int setSlope();
};

