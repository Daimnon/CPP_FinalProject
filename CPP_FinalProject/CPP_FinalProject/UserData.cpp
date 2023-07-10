#include "UserData.h"

UserData::UserData()
{
    id = rand() % (399999999 - 100000000 + 1) + 100000000;
    HeartMonitor heartMonitor;
    BloodPressureMonitor bloodPressureMonitor;
    heartRate = heartMonitor.GetHeartRate();
    bloodPressure = bloodPressureMonitor.GetBloodPressure();
}

UserData::~UserData()
{
}

int UserData::GetID()
{
    return id;
}

void UserData::SetData()
{
    id = rand() % (399999999 - 100000000 + 1) + 100000000;
    HeartMonitor heartMonitor;
    BloodPressureMonitor bloodPressureMonitor;
    heartRate = heartMonitor.GetHeartRate();
    bloodPressure = bloodPressureMonitor.GetBloodPressure();
}

std::string UserData::ToString()
{
    std::string measurements = "Id: " + std::to_string(id) + ", Heart rate: " + heartRate + ", Blood pressure: " + bloodPressure;
    return measurements;
}
