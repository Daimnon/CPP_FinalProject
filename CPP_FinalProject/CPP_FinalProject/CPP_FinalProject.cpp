#include <iostream>
#include "HeartMonitor.h"
#include "BloodPressureMonitor.h"
#include "UserData.h"

int main()
{
    UserData userData;
    userData.SetData();
    std::cout << userData.ToString() << std::endl;
}