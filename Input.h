#pragma once
#include <string>

#include "Hash.h"

class Input {
public :
	Input();
	std::string Encrypt(std::string input);
	void Decrypt(std::string input,std::string store);
	
private:
	int _randNum;
	std::string _randStr;
	
};

