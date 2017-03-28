bool verificaTorre(char **tabuleiro, int linOri, int colOri, int linDes, int colDes){

	if(linDes == linOri || colDes == colOri){
		trocar(tabuleiro, linOri, colOri, linDes, colDes);
		mostraTabuleiro(tabuleiro);
		return true;
	} else{
		printf("Jogada não é possível, tente novamente!\n");
		return false;
	}

}