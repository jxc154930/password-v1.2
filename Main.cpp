#include <iostream>
#include <conio.h>
#include "Hash.h"
#include "Input.h"


int main()
{
	std::string input1;
	std::string input2;
//this.getData();
//this.processInput();
//this.returnHash();




	do {
		std::string store;
		Input hashThis;
		std::cout << "Input your password: " << std::endl;
		std::cin >> input1;
		store = hashThis.Encrypt(input1);
		std::cout << "Re-input your password: " << std::endl;
		std::cin >> input2;
		hashThis.Decrypt(input2, store);
		if (input1 == input2)
		{
			std::cout << "Logged in" << std::endl;
		}
		else
		{
			std::cout << "Wrong password" << std::endl;
		}
	} while (input1 != input2);

	///////////// take this out
	char a = _getch();
	return 0;
}


// add into queue .. or multithread?

