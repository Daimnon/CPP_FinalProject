#include "BloodPressureMonitor.h"

BloodPressureMonitor::BloodPressureMonitor() : minValue(60), maxValue(180) {}

BloodPressureMonitor::BloodPressureMonitor(int _minValue, int _maxValue) : minValue(_minValue), maxValue(_maxValue) {}

BloodPressureMonitor::~BloodPressureMonitor()
{
}

std::string BloodPressureMonitor::GetBloodPressure()
{
	// random formula between two values in order to get random blood pressure
	int randNumFirst = rand() % (maxValue - minValue + 1) + minValue;
	int randNumSecond = rand() % (maxValue - minValue + 1) + minValue;

	// making sure higher value is on the left
	std::string bloodPressureMonitorString;
	if (randNumFirst > randNumSecond)
		bloodPressureMonitorString = std::to_string(randNumSecond) + "/" + std::to_string(randNumFirst);
	else
		bloodPressureMonitorString = std::to_string(randNumFirst) + "/" + std::to_string(randNumSecond);

	return bloodPressureMonitorString;
}
