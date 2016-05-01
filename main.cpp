#include <iostream>
#include "Input.h"

std::string EncryptThis(std::string inputPass)
{
    Input hashThis;
    return hashThis.Encrypt(inputPass);
}
std::string DecryptThis(std::string encryptedPass, std::string store)
{
    Input hashThis;
    return hashThis.Decrypt(encryptedPass, store);
}

int main(int argc, char *argv[])
{

    std::string input1;
    std::string input2;
    std::string output1;
    std::cin >> input1;
    output1 = EncryptThis(input1);
    std::cout << output1 << std::endl;
    std::cin >> input2;
    std::cout << DecryptThis(output1, input2) << std::endl;


/*
    int asdf;
    std::cin >> asdf;
    //int i = atoi(argv[1]);
    //std::string j = std::to_string(i);
    std::string j = std::to_string(asdf);
    std::string k = EncryptThis(j);
    std::cout << k << std::endl;

    std::string a = DecryptThis((k));
    std::cout << a;


    int main(int argc, char *argv[])
    {
        int i = add(atoi(argv[1]), atoi(argv[2]));
        printf("%d\n", i);
        return 0;
    }
*/

    return 0;
}


