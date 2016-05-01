#pragma once
#include <string>

#include "Hash.h"

class Input {
public :
	Input();
	std::string Encrypt(std::string input);
	std::string Decrypt(std::string passedInput, std::string input1);
	
private:
	int _randNum;
	std::string _randStr;
	
};

