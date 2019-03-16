/*-------------------*
* Rodrigo CavanhaMan *
*     IFTM - SSI     *
*--------------------*/
#include<stdio.h>
#include <stdlib.h> 
#include<iostream>
using namespace std;

char hexToAscii(char first, char second) {
	char *stop;
	char hex[5] = {'0','x',first,second,0};
	return strtol(hex, &stop, 16);
}

int main(void)	{
	string mensagemCifrada[] = {"07","0B","1A","10","1D","08","06","00","1D","09","01","1C","01","15","06","00","06","0A","1A","1D","1D","15","08","00","01","04","0D","1C","04","00","0C","1E","1D","14","1C","16","1C","04","06","05","17","00","04","1C","07","11","1B","1C","01","03","00","07","1D","16","06","00","1F","00","1A","1E","1D","16","06","1F","1A","0A","1A","1D","1D","03","1C","07","07","17","06","05","17","00","04","1C","03","10","0C","1D","13","0A","1A","16","02","0A","0D","16","04","00","1B","03","1D","17","18","06","17","11","08","1C","1E","0A","07","14","17","0C","1B","03","1D","17","06","02","07","00","0C","00","06","04","19","16","00","11","06","12","01","00","0E","06","00","04","07","10","13","0B","06","00","01","04","0C","00","06","00","0C","1C","16","0C","08","16","01","11","08","16","13","0D","06","01","13","00","1A","07","17","0A","04","1C","1F","00","07","07","1D","0C","1A","07","1D","00","18","06","17","08","1A","1C","1F","0A","1A","16","17","11","1C","17","1D","15","0C","01","17","0B","0C","15","1E","10","00","12","1B","0B","1D","16","00","08","00","1D","13","13","0C","1F","1A","0A","1B","12","03","10","0C","1D","1D","16","0A","1C","1C","03","0C","00","01","04","07","06","1E","0A","1A","1D","1D","08","0C","00","1F","0A","01","12","07","16","1D","1C","17","08","18","06","17","13","00","05","17","08","06","00","1F","0A","1B","01","17","17","0C","1E","1D","16","0A","1C","1E","0D","0C","1C","16","0C","08","03","1D","17","18","06","17","00","1A","16","1E","00"};
	char testeChave[] = {'r','e','i','s'};
	//char testeChave[] = {'d','r','u','m','m','o','n','d'};
	char *stop;
	int tamch = (sizeof(testeChave)/sizeof(*testeChave));
	int tamci = (sizeof(mensagemCifrada)/sizeof(*mensagemCifrada));
	char mensagemResgatada[tamci];

	char c1 = mensagemCifrada[0][0];
	char c2 = mensagemCifrada[0][1];
	
	for(int i=0 ; i<tamci ; i++) {
		char aux = hexToAscii(mensagemCifrada[i][0],mensagemCifrada[i][1]);
		mensagemResgatada[i]=aux^testeChave[i%sizeof(testeChave)];
		
		if((mensagemResgatada[i]>64 && mensagemResgatada[i]<91) || (mensagemResgatada[i]>96 && mensagemResgatada[i]<123))
			cout << mensagemResgatada[i];
	}
}

