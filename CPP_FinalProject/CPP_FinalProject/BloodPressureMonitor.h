#pragma once

#include <iostream>
#include <string>

class BloodPressureMonitor {
private:
	int minValue;
	int maxValue;
public:
	BloodPressureMonitor();
	BloodPressureMonitor(int _minValue, int _maxValue);
	~BloodPressureMonitor();

	std::string GetBloodPressure();
};

