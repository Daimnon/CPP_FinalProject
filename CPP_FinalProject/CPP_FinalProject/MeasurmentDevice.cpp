#include "MeasurmentDevice.h"

MeasurmentDevice::MeasurmentDevice() 
{
}

MeasurmentDevice::~MeasurmentDevice()
{
}

string MeasurmentDevice::GetHeartRate()
{
    string newHeartRate = heartMonitor.GetHeartRate();
    return newHeartRate;
}

string MeasurmentDevice::GetBloodPressure()
{
    string newBloodPressure = bloodPressureMonitor.GetBloodPressure();
    return newBloodPressure;
}

vector<string> MeasurmentDevice::GetMeasurements()
{
    vector<string> newMeasurements = { GetHeartRate(), GetBloodPressure() };
    return newMeasurements;
}

void MeasurmentDevice::DisplayData()
{
    vector<string> measurements = GetMeasurements();
    string displayString = "HeartRate: " + measurements[0] + ", BloodPressure: " + measurements[1] + ".";
    cout << displayString << endl;
}
