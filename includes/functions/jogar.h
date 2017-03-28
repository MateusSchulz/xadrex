void jogar(char **tabuleiro){

	//Número da linha e da coluna
	int linOri, colOri, linDes, colDes;

	//Verificar se o destino é válida
	bool destino;

	do{
	
		printf("\nSelecione a peça:");
		printf("\n\nLinha: ");
		scanf("%d", &linOri);
		printf("Coluna: ");
		scanf("%d", &colOri);

	} while(tabuleiro[linOri][colOri] == ' '); //Enquanto a linha selecionada pelo usuário for vazia o loop vai se repetir

	do{
		printf("\nSelecione a origem:");
		printf("\n\nLinha: ");
		scanf("%d", &linDes);
		printf("Coluna: ");
		scanf("%d", &colDes);
		//Verificar se a origem é válida
		destino = origemValida(tabuleiro, linOri, colOri, linDes, colDes);
	} while(destino == false);

}