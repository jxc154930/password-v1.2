#include "Input.h"
#include <string>
#include <iostream>
#include <random>
#include <time.h>
#include <sstream>

#define saltSize 12

using namespace std;

Input::Input()
{
	stringstream convert;
	string randStr;
	do {
		srand((unsigned int)time(NULL));
		_randNum = rand() + 1;
		_randNum = _randNum * rand();
		convert << _randNum;
		_randStr = convert.str();
	} while (_randStr.size() >= saltSize);

	while(_randStr.size() < saltSize)
	{
		_randStr.append("0");
	}
}

string Input::Encrypt(string input)
{
	string output1;
	
	input = _randStr + input;
	output1 = sha256(input);
	for (int i = 0; i < 1024; i++)
	{
		output1 = sha256(output1);
	}
	output1 = _randStr + output1;
	string store = output1;
	return store;
}

void Input::Decrypt(string input, string store)
{
	string output1;
	string saltStr;

	for (int i = 0; i < saltSize; i++)
	{
		saltStr += store[i];
	}
	
	input = saltStr + input;
	output1 = sha256(input);
	for (int i = 0; i < 1024; i++)
	{
		output1 = sha256(output1);
	}
	output1 = saltStr + output1;
	
}



