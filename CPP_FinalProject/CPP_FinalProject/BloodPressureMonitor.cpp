#include "BloodPressureMonitor.h"

BloodPressureMonitor::BloodPressureMonitor()
{
}

BloodPressureMonitor::~BloodPressureMonitor()
{
}

std::string BloodPressureMonitor::GetBloodPressure()
{
	int randNumFirst = rand() % (maxValue - minValue + 1) + minValue;
	int randNumSecond = rand() % (maxValue - minValue + 1) + minValue;

	std::string heartRateString = std::to_string(randNumFirst) + "/" + std::to_string(randNumSecond);
	return heartRateString;
}
