#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "HeartMonitor.h"
#include "BloodPressureMonitor.h"

using namespace std;

class MeasurmentDevice
{
private:
	HeartMonitor heartMonitor;
	BloodPressureMonitor bloodPressureMonitor;

public:
	MeasurmentDevice();
	~MeasurmentDevice();

	string GetHeartRate();
	string GetBloodPressure();
	vector<string> GetMeasurements();
	void DisplayData();
};

