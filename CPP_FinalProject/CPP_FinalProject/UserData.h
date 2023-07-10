#pragma once

#include <iostream>
#include <string>
#include "HeartMonitor.h"
#include "BloodPressureMonitor.h"

class UserData {
private:
	std::string heartRate;
	std::string bloodPressure;

public:
	UserData();
	~UserData();

	void SetData();
	std::string ToString();
};

