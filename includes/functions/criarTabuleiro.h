char **criarTabuleiro(){
	
	int i;

	//Aloca as linhas
	char **tabuleiro = (char**) malloc(8*sizeof(char*));
	//Aloca as colunas
	for(i=0;i<8;i++){
		tabuleiro[i] = (char*) malloc(8*sizeof(char));
	}

	return tabuleiro;
}