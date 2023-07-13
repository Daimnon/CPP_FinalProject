#pragma once

#include <iostream>
#include <string>

class HeartMonitor {
private:
	int minValue;
	int maxValue;
public:
	HeartMonitor();
	HeartMonitor(int _minValue, int _maxValue);
	~HeartMonitor();

	std::string GetHeartRate();
};

