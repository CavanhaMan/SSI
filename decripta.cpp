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
	string mensagemCifrada[] = {"12", "17", "18", "1E", "08", "01", "1A", "05", "16", "06", "10", "0E", "02", "02", "07","03", "0B", "1E", "1C", "09", "04", "0E", "0F", "06", "01", "1B", "07", "0C", "09", "00", "1C", "0D","0B", "01", "1A", "1E", "1E", "0A", "09", "05", "00", "13", "18", "08", "03", "1B", "0B", "02", "0D","06", "10", "00", "02", "1C", "01", "17", "01", "17", "16", "08", "1F", "1C", "01", "01", "05", "02","07", "08", "03", "0B", "0F", "09", "0B", "01", "04", "08", "08", "0E", "18", "0D", "00", "13", "05","0C", "1E", "1C", "0F", "01", "0A", "13", "1A", "08", "1E", "1B", "0F", "09", "0B", "01", "11", "08","00", "0E", "01", "17", "01", "1C", "19", "0C", "0E", "0E", "0A", "05", "17", "17", "1B", "01", "0C","0C", "0B", "09", "0B", "01", "14", "1E", "00", "0E", "01", "17", "00", "17", "05", "02", "04", "1C","1E", "01", "0A", "01", "10", "00", "02", "1C", "0D", "16", "0D", "13", "1B", "0E", "0C", "1C", "0F","00", "01", "1E", "01", "0C", "1E", "1E", "0B", "01", "05", "04", "1C", "09", "0C", "1F", "0F", "17","17", "13", "10", "03", "0C", "00", "08", "0D", "07", "13", "1B", "0C", "09", "0E", "0A", "01", "0D","0A", "14", "08", "03", "0A", "00", "07", "05", "00", "10", "0A", "1F", "0A", "1D", "17", "05", "04","14", "04", "1D", "0E", "1C", "05", "01", "1F", "18", "0C", "1F", "02", "0B", "0D", "10", "1D", "19","02", "03", "08", "0B", "14", "05", "00", "14", "0C", "02", "1F", "0B", "00", "0B", "14", "14", "09","02", "02", "0F", "0D", "17", "1E", "1A", "03", "0A", "0A", "1F", "01", "01", "1D", "06", "09", "08","0A", "1D", "01", "17", "16", "10", "1E", "08", "01", "02", "05", "07", "17", "18", "02", "1E", "0E","1D", "09", "05", "1D", "06", "1D", "02", "1D", "1F", "01", "01", "1C", "14", "02", "1B", "0E", "02","01", "05", "02", "10", "03", "0C", "0C", "0F", "0A", "17", "13", "07", "00", "02", "01", "01", "17","15", "17", "10", "1F", "0A", "00", "14", "01", "09", "1D", "06", "1C", "08", "0A", "1C", "0A", "05","1D", "12", "02", "17", "0A", "03", "0B", "17", "02", "14", "1E", "1E", "0E", "03", "0B", "17", "11","1A", "00", "02", "00", "1C", "0D", "0B", "1F", "14", "04", "1E", "19", "0F", "08", "01", "01", "14","0F", "08", "1D", "1E", "05", "17", "01", "14", "1F", "1E", "06", "02", "01", "0A", "11", "1C", "02","1E", "0E", "03", "01", "0A", "06", "10", "08", "1E", "0A", "03", "00", "01", "01", "14", "1E", "1E","00", "1D", "17", "01", "15", "1A", "1E", "0A", "1D", "0F", "0A", "00", "17", "06", "1E", "08", "02","0F", "09", "0B", "00", "10", "1E", "03", "0A", "03", "0B", "00", "1B", "1A", "1E", "03", "0A", "03","14", "05", "1B", "0D", "02", "08", "1C", "1F", "01", "01", "1E", "10", "1B", "0C", "01", "1A", "05","09", "13", "03", "02", "17", "01", "0B", "09", "0D", "1C", "03", "08", "07", "0E", "1D", "15", "01","17", "11", "0C", "02", "02", "01", "12", "0D", "1F", "10", "03", "19", "00", "0A", "01", "09", "13","1C", "1E", "0C", "00", "1D", "0B", "08", "1A", "1A", "1E", "03", "0A", "03", "07", "01", "1B", "11","0C", "09", "00", "1D", "14", "0B", "00", "04", "08", "08", "1C", "0B", "0B", "17", "06", "1C", "1B","08", "1C", "1D", "01", "0B", "00", "1C", "02", "1E", "0A", "03", "14", "16", "17", "16", "02", "1F","1D", "0B", "16", "0D", "13", "10", "1E", "08", "02", "1E", "16", "01", "1B", "07", "04", "0C", "1B","0B", "16", "05", "1D", "18", "0C", "1F", "0E", "03", "01", "09", "1D", "1B", "02", "1E", "1B", "1C","05", "0A", "03", "10", "04", "01", "0E", "03", "01", "0A", "06", "10", "1D", "08", "01", "1D", "05","0A", "16", "1A", "1C", "08", "0A", "1E", "0B", "00", "1B", "14", "00", "02", "1C", "1D", "01", "15","17", "1C", "1E", "08", "1C", "1D", "01", "09", "1D", "06", "19", "1F", "00", "0D", "05", "16", "10","10", "04", "07", "00", "1D", "01", "05", "10", "07", "0C", "0E", "00", "1D", "01", "07", "13", "07","04", "0E", "06", "0F", "17", "09", "13", "06", "1C", "08", "0A", "03", "05", "0D", "01", "03", "0C","01", "0A", "0B", "17", "10", "13", "07", "00", "02", "1C", "1D", "01", "0A", "06", "14", "09", "02","1C", "0F", "0B", "14", "17", "10", "00", "09", "00", "01", "01", "10", "00", "1A", "02", "08", "19","07", "0A", "00", "1D", "16", "02", "1F", "1D", "0B", "16", "0B", "00", "1C", "02", "08", "19", "0B","0A", "00", "1D", "1A", "0E", "02", "03", "06", "05", "09", "1D", "06", "0B", "01", "00", "1C", "01","17", "02", "10", "0A", "0C", "1B", "0B", "0A", "01", "1E", "14", "1E", "08", "0B", "0B", "0D", "1C","13", "14", "1E", "03", "00", "0D", "0B", "08", "1D", "10", "1C", "08", "0A", "01", "17", "01", "17","05", "08", "1F", "09", "0B", "09", "01", "01", "10", "0C", "1B", "06", "14", "01", "0B", "1F", "1A","00", "08", "01", "1A", "0B", "01", "01", "01", "08", "00", "00", "03", "01", "0A", "06", "1A", "08","00", "1E", "0B", "01", "17", "1D", "06", "1E", "08", "08", "0F", "00", "05", "1F", "10", "03", "19","0A", "00", "05", "0B", "11", "07", "08", "00", "00", "1D", "01", "09", "1C", "14", "09", "0C", "1F","0F", "03", "05", "1D", "06", "04", "03", "00", "0D", "01", "0A", "06", "10", "1E", "09", "0E", "0A","01", "07", "13", "11", "08", "03", "0C", "07", "05", "05", "1D", "18", "08", "03", "00", "1D", "17","01", "14", "1A", "1F", "1E", "00", "03", "06", "16", "13", "14", "03", "19", "0A", "1D", "08", "01","1F", "17", "1F", "0C", "1D", "1A", "01", "05", "01", "11", "08", "00", "06", "03", "00", "01", "02","1A", "04", "1E", "1C", "0B", "09", "15", "17", "10", "0C", "00", "06", "00", "0C", "05", "1E", "10","00", "0F", "1D", "0F", "0A", "07", "13", "01", "08", "0C", "1D", "0A", "05", "0B", "17", "01", "08","0B", "06", "1C", "05", "0B", "17", "01", "08", "00", "00", "18", "05", "14", "1D", "07", "1C", "08","0A", "00", "01", "0A", "11", "14", "08", "03", "03", "0F", "07", "05", "1F", "1A", "1E", "0C", "1C","03", "05", "0B", "01", "1B", "08", "00", "01", "01", "17", "06", "17", "1C", "07", "0C", "02", "01","17", "0A", "17", "18", "0B", "02", "02", "01", "17", "09", "13", "1C", "1E", "09", "00", "1F", "01","01", "11", "07", "04", "0C", "01", "0D", "05", "17", "17", "06", "08", "0C", "01", "1A", "01", "17","16", "1A", "1C", "08", "0A", "0B", "01", "08", "17", "03", "0C", "1F", "0A", "1D", "0B", "0B", "10","1A", "01", "02", "0E", "01", "06", "05", "00", "04", "08", "08", "06", "1C", "0B", "17", "1D", "18","0F", "1F", "06", "01", "01", "01", "1C", "14", "09", "0C", "1B", "0B", "16", "01", "1B", "04", "08","08", "1C", "01", "02", "16", "17", "07", "0C", "02", "03", "0B", "09", "06", "00", "14", "1F", "00","0A", "0A", "01", "10", "1B", "06", "08", "1F", "02", "0B", "05", "17", "01", "10", "0C", "1B", "0A","0F", "09", "01", "1F", "1A", "1F", "04", "0E", "02", "01", "09", "10", "07", "0C", "03", "0B", "01","10", "01", "13", "06", "1E", "04", "02", "0F", "06", "01", "1B", "07", "0C", "1F", "06", "01", "14","05", "15", "14", "19", "1F", "06", "1D", "10", "01", "17", "16", "02", "00", "09", "02", "0B", "16","17", "06", "03", "02", "1D", "0B", "03", "05", "11", "1A" };
	char testeChave[] = {'s','o','s','s','e','g','o'};
	//char testeChave[] = {'d','r','u','m','m','o','n','d'};
	char *stop;
	int tamch = (sizeof(testeChave)/sizeof(*testeChave));
	int tamci = (sizeof(mensagemCifrada)/sizeof(*mensagemCifrada));
	char mensagemResgatada[tamci];

	char c1 = mensagemCifrada[0][0];
	char c2 = mensagemCifrada[0][1];
	
	for(int i=0 ; i<tamci ; i++) {
		char aux = hexToAscii(mensagemCifrada[i][0],mensagemCifrada[i][1]);
		mensagemResgatada[i]=aux^testeChave[i%8];
		
		if((mensagemResgatada[i]>64 && mensagemResgatada[i]<91) || (mensagemResgatada[i]>96 && mensagemResgatada[i]<123))
			cout << mensagemResgatada[i];
	}
}

