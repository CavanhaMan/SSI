#include <iostream>

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key[3] = {'R', 'C', 'B'};
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
    
    return output;
}

int main(int argc, const char * argv[])
{
    string encrypted = encryptDecrypt("CavanhaMan");
    cout << "Encrypted:" << encrypted << "\n";
    
    string decrypted = encryptDecrypt(encrypted);
    cout << "Decrypted:" << decrypted << "\n";
    
    return 0;
}
