#include <iostream>
#include<sstream>

using namespace std;
int hexCharToInt(char);
string hexToString(string);
int main()
{
    std::string str;
    std::stringstream str1;

    str="cavanhaman1";
    for(int i=0;i<str.length();i++){
        str1 << std::hex << (int)str.at(i);
    }
    std::cout << str1.str() <<"\n";
    string test = "48656c6c6f20576f726c64";
    std::cout << hexToString(test) <<"\n";
    return 0;
}
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
