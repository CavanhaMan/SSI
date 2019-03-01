#include<iostream>
#include<string>
using namespace std;
void encrypt(string msg, string key) {
    while (msg.length() > key.length())
        key += key;

    string encrypt_Text = "";
    for (size_t i = 0; i <= msg.length(); i++)
        encrypt_Text += msg[i] ^ key[i];
        
    cout << "the cipher text is:" << encrypt_Text << endl;
}

void decrypt(string cipher, string key) {
    while (cipher.length() > key.length())
        key += key;

    string decrypt_Text = "";
    for (int i = 0; i < cipher.length(); i++)
        decrypt_Text += cipher[i] ^ key[i];

    cout << "the messege is:" << decrypt_Text << endl;
}

int main(void) {
    string msg, key;
    cout << "enter your messege in boolean : " << endl;
    cin >> msg;
    cout << "enter your key in boolean : " << endl;
    cin >> key;
    encrypt(msg, key);
	return 0;
}
