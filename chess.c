#include "includes/header.h"

void main(){
printf("\n");

	bool fim = false;

	printf("You're Welcome in my side!!! \n\n");

	char **tabuleiro;
	tabuleiro = criarTabuleiro();
	preencheTabuleiro(tabuleiro);
	mostraTabuleiro(tabuleiro);
	while(fim == false){
		jogar(tabuleiro);
	}


printf("\n");
}
