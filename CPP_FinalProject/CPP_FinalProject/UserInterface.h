#pragma once

#include <iostream>
#include <vector>
#include "UserData.h"
#include "DataBase.h"

class UserInterface
{
private:
	vector<UserData> usersData;

public:
	UserInterface();
	~UserInterface();

	vector<UserData> GetUsersData();
	void DisplayUserData(int numOfUsers);
};

