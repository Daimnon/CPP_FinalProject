#include "UserData.h"

UserData::UserData()
{
    // generate random id with random formula
    id = rand() % (maxValue - minValue + 1) + minValue;
}

UserData::UserData(int _id) : id(_id) {}

UserData::~UserData()
{
}

int UserData::GetID()
{
    return id;
}

void UserData::SetRandomMeasurements()
{
    MeasurmentDevice device;
    heartRate = device.GetHeartRate(); // set random heart rate
    bloodPressure = device.GetBloodPressure(); // set random blood pressure
}
void UserData::SetMeasurements(MeasurmentDevice device)
{
    heartRate = device.GetMeasurements()[0]; // get heart rate from device
    bloodPressure = device.GetMeasurements()[1]; // get blood pressure from device
}

std::string UserData::ToString()
{
    std::string measurements = "Id: " + std::to_string(id) + ", Heart rate: " + heartRate + ", Blood pressure: " + bloodPressure;
    return measurements;
}
