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
// 1 = true is good 0 = false = bad
    // cd /Users/JC/Library/Caches/CLion2016.1/cmake/generated/PassV1_2-c47ed446/c47ed446/Debug/
    // ./PassV1.2 (1 value for encryption)
    // ./PassV1.2 (1 value for encryptedPass) (2nd value Password again for Decryption)

    if(argc == 2)
    {
        std::string i;
        i = EncryptThis(argv[1]);
        std::cout << i;
    }
    else if(argc == 3)
    {
        bool j = DecryptThis(argv[1],argv[2]);
        std::cout<< j;

    }
    else
    {
        std::cout << 2;

    }
//    std::string i;
//    i = EncryptThis(argv[1]);
//    std::cout << i << std::endl;

    /////////////
//    bool j = DecryptThis(i,argv[2]);
//    std::cout<< j << std::endl;


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