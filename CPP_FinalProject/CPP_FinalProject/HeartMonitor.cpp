#include "HeartMonitor.h"

HeartMonitor::HeartMonitor()
{
}

HeartMonitor::~HeartMonitor()
{
}

std::string HeartMonitor::GetHeartRate()
{
	int randNumFirst = rand() % (maxValue - minValue + 1) + minValue;
	int randNumSecond = rand() % (maxValue - minValue + 1) + minValue;

	std::string heartRateString = std::to_string(randNumFirst) +"/"+ std::to_string(randNumSecond);
	return heartRateString;
}
