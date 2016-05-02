#include "Input.h"
#include <iostream>
#include <random>
#include <sstream>

#define saltSize 12

using namespace std;

Input::Input()
{
	stringstream convert;
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<long double > dist(10000000000, 99999999999);
	unsigned long hold = (unsigned long)dist(mt);
	convert << hold;
	_randStr = convert.str();

   while(_randStr.size() < saltSize)
   {
       _randStr.append("0");
   }

}

string Input::Encrypt(string input)
{
	string output;
	
	input = _randStr + input;
	for (int i = 0; i < 1024; i++)
	{
		output = sha256(input);
	}
	output = _randStr + output;
	return output;
}

string Input::Decrypt(string passedInput, string input1)
{
	string output1;
	string saltStr;

	for (int i = 0; i < saltSize; i++)
	{
		saltStr += passedInput[i];
	}
	
	input1 = saltStr + input1;
	for (int i = 0; i < 1024; i++)
	{
		output1 = sha256(input1);
	}
	output1 = saltStr + output1;
	return output1;
}



