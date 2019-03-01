#include<stdio.h>
#include<iostream>
using namespace std;

int main(void) {
	char chave[]={'c','a','p','i','t','a','o'};
	char texto[]={'T','r','o','p','a',' ','d','e',' ','E','l','i','t','e',' ','a','l','t','e','r','n','a','t','i','v','a','m','e','n','t','e',' ','c','o','n','h','e','c','i','d','o',' ','c','o','m','o',' ','T','r','o','p','a',' ','d','e',' ','E','l','i','t','e',' ','M','i','s','s','a','o',' ','D','a','d','a',' ','e',' ','M','i','s','s','a','o',' ','C','u','m','p','r','i','d','a',' ','e',' ','u','m',' ','f','i','l','m','e',' ','p','o','l','i','c','i','a','l',' ','b','r','a','s','i','l','e','i','r','o',' ','d','e',' ','2','0','0','7',' ','c','o','m',' ','o',' ','g','e','n','e','r','o',' ','d','r','a','m','a','/','f','i','l','m','e',' ','p','o','l','i','c','i','a','l',' ',' ','d','i','r','i','g','i','d','o',' ','p','o','r',' ','J','o','s','e',' ','P','a','d','i','l','h','a',' ','q','u','e',' ','t','a','m','b','e','m',' ','e','s','c','r','e','v','e','u',' ','s','e','u',' ','r','o','t','e','i','r','o',' ','c','o','m',' ','B','r','a','u','l','i','o',' ','M','a','n','t','o','v','a','n','i',' ','e',' ','R','o','d','r','i','g','o',' ','P','i','m','e','n','t','e','l',' ','e',' ','p','r','o','d','u','z','i','u',' ','c','o','m',' ','M','a','r','c','o','s',' ','P','r','a','d','o','.',' ','T','e','m',' ','c','o','m','o',' ','t','e','m','a',' ','a',' ','v','i','o','l','e','n','c','i','a',' ','u','r','b','a','n','a',' ','n','a',' ','c','i','d','a','d','e',' ','b','r','a','s','i','l','e','i','r','a',' ','d','o',' ','R','i','o',' ','d','e',' ','J','a','n','e','i','r','o',' ','j','u','n','t','o',' ','c','o','m',' ','a',' ','a','j','u','d','a',' ','d','o',' ','B','a','t','a','l','h','a','o',' ','d','e',' ','O','p','e','r','a','c','o','e','s',' ','P','o','l','i','c','i','a','i','s',' ','E','s','p','e','c','i','a','i','s',' ','(','B','O','P','E',')',' ','e',' ','d','a',' ','P','o','l','i','c','i','a',' ','M','i','l','i','t','a','r',' ','d','o',' ','E','s','t','a','d','o',' ','d','o',' ','R','i','o',' ','d','e',' ','J','a','n','e','i','r','o','.',' ','O',' ','f','i','l','m','e',' ','e',' ','b','a','s','e','a','d','o',' ','e','l','e','m','e','n','t','o','s',' ','p','r','e','s','e','n','t','e','s',' ','n','o',' ','l','i','v','r','o',' ','E','l','i','t','e',' ','d','a',' ','T','r','o','p','a',' ','d','e',' ','A','n','d','r','e',' ','B','a','t','i','s','t','a',' ','e',' ','R','o','d','r','i','g','o',' ','P','i','m','e','n','t','e','l',' ','e','m',' ','p','a','r','c','e','r','i','a',' ','c','o','m',' ','L','u','i','z',' ','E','d','u','a','r','d','o',' ','S','o','a','r','e','s','.',' ','E',' ','e','s','t','r','e','l','a','d','o',' ','p','o','r',' ','W','a','g','n','e','r',' ','M','o','u','r','a',' ','A','n','d','r','e',' ','R','a','m','i','r','o',' ','C','a','i','o',' ','J','u','n','q','u','e','i','r','a',' ','M','i','l','h','e','m',' ','C','o','r','t','a','z',' ','F','e','r','n','a','n','d','a',' ','M','a','c','h','a','d','o',' ','P','a','u','l','o',' ','V','i','l','e','l','a',' ','F','e','r','n','a','n','d','a',' ','d','e',' ','F','r','e','i','t','a','s',' ','M','a','r','i','a',' ','R','i','b','e','i','r','o',' ','e',' ','F','a','b','i','o',' ','L','a','g','o','.'};

	int textoSize=sizeof(texto)/sizeof(char);
	char mensagemCifrada[textoSize];
	
	printf("mensagem cifrada:\n");
	for(int i=0;i<textoSize;i++) {
		mensagemCifrada[i]=texto[i]^chave[i%7];
		printf("%02X",mensagemCifrada[i]);
	}

	printf("\nMensagem Resgatada:\n");
	char teste[]={'c','a','p','i','t','a','o'};
	//char teste[]={'m','i','s','s','a','o'};

	char mensagemResgatada[textoSize];

	for(int i=0;i<textoSize;i++) {
        mensagemResgatada[i]=mensagemCifrada[i]^teste[i%6];
        cout << mensagemResgatada[i];
		//printf("%c",mensagemResgatada[i]);
        //printf("%02X",mensagemResgatada[i]);
/*        if((mensagemResgatada[i]>64 && mensagemResgatada[i]<91) || (mensagemResgatada[i]>96 && mensagemResgatada[i]<123))
			printf("%c",mensagemResgatada[i]);
		else
			printf("%02X",mensagemResgatada[i]);*/
	}
	
printf("\n");
return 0;
}
