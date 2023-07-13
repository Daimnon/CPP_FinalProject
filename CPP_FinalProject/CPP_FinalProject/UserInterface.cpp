#include "UserInterface.h"

UserInterface::UserInterface()
{
    // create artificial users to demonstrate - idealy will get a list of already tested users from an external data base
    for (int i = 0; i < 100; i++)
    {
        UserData newUser;
        newUser.SetRandomMeasurements();
        usersData.push_back(newUser);
    }

    DataBase db;
    db.InitUserList(usersData);
    usersData = db.GetUsers();
}

UserInterface::~UserInterface()
{
}

vector<UserData> UserInterface::GetUsersData()
{
	return usersData;
}

void UserInterface::DisplayUserData(int numOfUsers)
{
    for (int i = 0; i < numOfUsers; i++)
    {
        cout << usersData[i].ToString() << endl;
    }
}
