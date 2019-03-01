/*
+--------------------+
| Rodrigo CavanhaMan |
|        IFTM        |
|        SSI         |
+--------------------+
*/
#include<stdio.h>
#include<iostream>
using namespace std;

string encryptDecrypt(string toEncrypt){
    char key[16] = { 'x', 'Y', 'b', 'N', 'k', 'k', 'F', 'X', 'x', ']', 's', 't', 'o', 'a', 'V', 'c' };
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];

    return output;
}
