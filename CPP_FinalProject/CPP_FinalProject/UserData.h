#pragma once

#include <iostream>
#include <string>
#include "HeartMonitor.h"
#include "BloodPressureMonitor.h"

class UserData {
private:
	int id;
	std::string heartRate;
	std::string bloodPressure;

public:
	UserData();
	~UserData();

	int GetID();
	void SetData();
	std::string ToString();
};

