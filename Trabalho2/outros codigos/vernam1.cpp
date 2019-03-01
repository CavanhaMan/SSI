/*Vernam Cipher C++ Program*/
#include<iostream>
using namespace std;

class vernam{
	public:
		string s,k;
		char enc[1000],dec[1000];
		vernam(string a, string b) {
			s = a;
			k = b;
		}
		void encrypt() {
			int i,j=0;
			for(i=0;i<s.size();i++) {
				enc[i] = s[i]^k[j];
				j++;
				if(j>=k.size())
					j =0;
			}
		}
		void decrypt() {
			int i,j=0;
			for(i=0;i<s.size();i++) {
				dec[i] = enc[i]^k[j];
				j++;
				if(j>=k.size())
					j =0;
			}
		}
		void printenc() {
			int i;
			char c;
			for(i=0;i<s.size();i++) {
				c = enc[i]%74 + 48;
				cout<<c;
			}
			cout<<endl;
		}
		void printdec() {
			int i;
			for(i=0;i<s.size();i++)
				cout<<dec[i];
			cout<<endl;
		}
};


int main()
{
	string s,k;
	cout<<"Enter the Plain Text Message"<<endl;
	getline(cin,s);
	cout<<"Enter the Key"<<endl;
	getline(cin,k);
	
	vernam v(s,k);
	
	v.encrypt();
	cout<<"Encrypted Message : ";
	v.printenc();
	cout<<endl;
	
	v.decrypt();
	cout<<"Decrypted Message : ";
	v.printdec();
	return 0;
}

/*
Enter the Plain Text Message
hello brother
Enter the Key
fire51
Encrypted Message : ><N9@A4KMAC:D

Decrypted Message : hello brother
*/
