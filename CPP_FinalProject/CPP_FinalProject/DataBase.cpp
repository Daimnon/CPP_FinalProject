#include "DataBase.h"

DataBase::DataBase()
{
}

DataBase::~DataBase()
{
}

void DataBase::InitUserList(std::vector<UserData> newUserList)
{
	userList = newUserList;
}

std::vector<UserData> DataBase::GetUsers()
{
	return userList;
}

UserData DataBase::GetUser(int id)
{
	for (int i = 0; i < userList.size(); i++)
	{
		if (userList[i].GetID() == id)
			return userList[i];
	}
}

std::vector<std::string> DataBase::ToString()
{
	std::vector<std::string> allUsers;

	for (int i = 0; i < userList.size(); i++)
		allUsers.push_back(userList[i].ToString());

	return allUsers;
}
