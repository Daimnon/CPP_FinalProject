#pragma once

#include <iostream>
#include <string>

class HeartMonitor {
private:
	int minValue = 10;
	int maxValue = 99;
public:
	HeartMonitor();
	~HeartMonitor();

	std::string GetHeartRate();
};

