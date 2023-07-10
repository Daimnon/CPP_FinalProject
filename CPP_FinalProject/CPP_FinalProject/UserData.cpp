#include "UserData.h"

UserData::UserData()
{
}

UserData::~UserData()
{
}

void UserData::SetData()
{
    HeartMonitor heartMonitor;
    BloodPressureMonitor bloodPressureMonitor;
    heartRate = heartMonitor.GetHeartRate();
    bloodPressure = bloodPressureMonitor.GetBloodPressure();
}

std::string UserData::ToString()
{
    std::string measurements = "Heart rate: " + heartRate + ", Blood pressure: " + bloodPressure;
    return measurements;
}
