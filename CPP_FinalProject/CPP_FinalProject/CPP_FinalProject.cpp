#include <iostream>
#include <vector>
#include "HeartMonitor.h"
#include "BloodPressureMonitor.h"
#include "UserData.h"
#include "DataBase.h"

using namespace std;

int main()
{
    vector<UserData> usersData;

    for (int i = 0; i < 10; i++)
    {
        UserData newUser;
        usersData.push_back(newUser);
    }

    for (int i = 0; i < 10; i++)
        cout << usersData[i].ToString() << endl;

    DataBase db;
    db.InitUserList(usersData);
    db.GetUsers();

    for (int i = 0; i < db.GetUsers().size(); i++)
    {
        cout << db.GetUsers()[i].ToString() << endl;
    }
}