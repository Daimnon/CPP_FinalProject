#pragma once

#include <iostream>
#include <string>
#include "MeasurmentDevice.h"

class UserData {
private:
	int id;
	int minValue = 100000000; // values for random user demonstration
	int maxValue = 399999999; // values for random user demonstration
	std::string heartRate;
	std::string bloodPressure;

public:
	UserData();
	UserData(int _id);
	~UserData();

	int GetID();
	void SetRandomMeasurements();
	void SetMeasurements(MeasurmentDevice device);
	std::string ToString();
};

