#include<stdio.h>
#include<iostream>
#include<sstream>
using namespace std;

int hexCharToInt(char);
string hexToString(string);

int main(void)	{
	int i=0;
	string test = "436176616e68614d616e202d2048656c6c6f20576f726c64";
	
	std::cout << hexToString(test) <<"\n";
}

//******CONVERTE HEXADECIMAL PARA STRING********
string hexToString(string str){
    std::stringstream HexString;
    for(int i=0;i<str.length();i++){
        char a = str.at(i++);
        char b = str.at(i);
        int x = hexCharToInt(a);
        int y = hexCharToInt(b);
        HexString << (char)((16*x)+y);
    }
    return HexString.str();
}
int hexCharToInt(char a){
    if(a>='0' && a<='9')
        return(a-48);
    else if(a>='A' && a<='Z')
        return(a-55);
    else
        return(a-87);
}
//**********************************************

