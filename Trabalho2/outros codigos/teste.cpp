// Presented with hex such as 0x12345abc perhaps there is a spot in there
// which represents an ascii char - such as 53 would be 'S'
// Common when dealing with hardware-related data structures and wire
// protocols
#include<stdio.h>
#include <stdlib.h> 
#include<iostream>
using namespace std;
/*
*To convert 53 to the character 'S':
*char returnVal = hexToString('5', '3');
*/
char hexToAscii(char first, char second) {
	char *stop;
	char hex[5] = {'0','x',first,second,0};
	return strtol(hex, &stop, 16);
}
int main(void) {
	printf("%c\n", hexToAscii('9', '3'));
}
