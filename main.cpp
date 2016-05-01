#include <iostream>
#include "Input.h"

std::string EncryptThis(std::string inputPass)
{
    Input hashThis;
    return hashThis.Encrypt(inputPass);
}

bool DecryptThis(std::string encryptedPass, std::string store)
{
    Input hashThis;
    if(hashThis.Decrypt(encryptedPass, store) == encryptedPass)
    {
        return true;

    }
    else
    {

        return false;
    }
}

int main(int argc, char *argv[])
{

    //int a = atoi(argv[1]);
    std::string i = EncryptThis(argv[1]);
    std::cout << i << std::endl;
    /////////////
    bool j = DecryptThis(i,argv[2]);
    std::cout<< j << std::endl;

/*
    int a;
    int b;
    std::cin >> a;
    //int i = atoi(argv[1]);
    //std::string j = std::to_string(i);
    std::string j = EncryptThis(std::to_string(a));
    std::cout << j << std::endl;
    std::cin >> b;
    bool k = DecryptThis(j, std::to_string(b));
    std::cout << k <<std::endl;
*/
/*
    int main(int argc, char *argv[])
    {
        int i = add(atoi(argv[1]), atoi(argv[2]));
        printf("%d\n", i);
        return 0;
    }
*/

    return 0;
}

//Encryption.exe InputPass1
//Encryption.exe EncryptedString,InputPass2