#include <iostream>
using namespace std;

string encryptDecrypt(string toEncrypt) {
	int x=0;

    char key[] = {'d','r','u','m','m','o','n','d'};
    string output = toEncrypt;
    int tam = 7;
    for (int i = 0; i < toEncrypt.size(); i++){
    	int aux1 = key[x];
        output[i] = toEncrypt[i] ^ aux1;//key[i % (sizeof(key) / sizeof(char))];
	    if (x < tam)
			x++;
		else
			x = 0;
	}
    
    return output;
}

int main(int argc, const char * argv[])
{
    string encrypted = encryptDecrypt("Vem sentar te comigo, Lidia, a beira do rio. Sossegadamente fitemos o seu curso e aprendamos que a vida passa, e nao estamos de maos enlacadas. Enlacemos as maos. Depois pensemos, criancas adultas, que a vida passa e nao fica, nada deixa e nunca regressa, vai para um mar muito longe, para ao pe do Fado, mais longe que os deuses. Desenlacemos as maos, porque nao vale a pena cansarmo nos. Quer gozemos, quer nao gozemos, passamos como o rio. Mais vale saber passar silenciosamente e sem desassossegos grandes. Sem amores, nem odios, nem paixoes que levantam a voz, nem invejas que dao movimento demais aos olhos, nem cuidados, porque se os tivesse o rio sempre correria, e sempre iria ter ao mar. Amemo nos tranquilamente, pensando que podiamos, se quisessemos, trocar beijos e abracos e caricias, mas que mais vale estarmos sentados ao pe um do outro ouvindo correr o rio e vendo o. Colhamos flores, pega tu nelas e deixa as no colo, e que o seu perfume suavize o momento. Este momento em que sossegadamente nao cremos em nada, pagaos inocentes da decadencia. Ao menos, se for sombra antes, lembrar te as de mim depois sem que a minha lembranca te arda ou te fira ou te mova, porque nunca enlacamos as maos, nem nos beijamos nem fomos mais do que criancas. E se antes do que eu levares o obolo ao barqueiro sombrio, eu nada terei que sofrer ao lembrar me de ti. Ser me as suave a memoria lembrando te assim, a beira rio, paga triste e com flores no regaco.");
    cout << "Encrypted:" << encrypted << endl;
    
    string decrypted = encryptDecrypt(encrypted);
    cout << "Decrypted:" << decrypted << endl;
    
    return 0;
}
