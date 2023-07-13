#pragma once

#include <iostream>
#include <vector>
#include "UserData.h";

class DataBase {
private:
	std::vector<UserData> userList;

public:
	DataBase();
	~DataBase();

	void InitUserList(std::vector<UserData> newUserList);
	std::vector<UserData> GetUsers();
	UserData GetUser(int id);
	std::vector<std::string> ToString();
};

