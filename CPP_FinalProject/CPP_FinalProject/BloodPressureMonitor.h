#pragma once

#include <iostream>
#include <string>

class BloodPressureMonitor {
private:
	int minValue = 100;
	int maxValue = 999;
public:
	BloodPressureMonitor();
	~BloodPressureMonitor();

	std::string GetBloodPressure();
};

