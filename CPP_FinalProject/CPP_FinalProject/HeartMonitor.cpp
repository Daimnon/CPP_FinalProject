#include "HeartMonitor.h"

HeartMonitor::HeartMonitor() : minValue(40), maxValue(220) {}

HeartMonitor::HeartMonitor(int _minValue, int _maxValue) : minValue(_minValue), maxValue(_maxValue) {}

HeartMonitor::~HeartMonitor()
{
}

std::string HeartMonitor::GetHeartRate()
{
	// random formula between two values in order to get random heart rate
	int randNumFirst = rand() % (maxValue - minValue + 1) + minValue; 
	int randNumSecond = rand() % (maxValue - minValue + 1) + minValue;

	// making sure lower value is on the left
	std::string heartRateString;
	if (randNumFirst < randNumSecond)
		heartRateString = std::to_string(randNumFirst) +"-"+ std::to_string(randNumSecond);
	else
		heartRateString = std::to_string(randNumSecond) +"-"+ std::to_string(randNumFirst);

	return heartRateString;
}
