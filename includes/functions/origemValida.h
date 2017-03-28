bool origemValida(char **tabuleiro, int linOri, int colOri, int linDes, int colDes){

	bool destino = true;

	//Verifica se a peça é uma TORRE
	if(tabuleiro[linOri][colOri] == 'T'){

		destino = verificaTorre(tabuleiro, linOri, colOri, linDes, colDes);

	//Verifica se a peça é um BISPO
	} else if(tabuleiro[linOri][colOri] == 'B'){

		destino = verificaBispo(tabuleiro, linOri, colOri, linDes, colDes);

	//Verifica se a peça é um CAVALO
	} else if(tabuleiro[linOri][colOri] == 'C'){

		destino = verificaCavalo(tabuleiro, linOri, colOri, linDes, colDes);

	//Verifica se a peça é uma DAMA
	} else if(tabuleiro[linOri][colOri] == 'D'){

		destino = verificaDama(tabuleiro, linOri, colOri, linDes, colDes);

	//Verifica se a peça é um REI
	} else if(tabuleiro[linOri][colOri] == 'R'){

		destino = verificaRei(tabuleiro, linOri, colOri, linDes, colDes);

	//Verifica se a peça é um PEÃO
	} else if(tabuleiro[linOri][colOri] == 'P'){

		destino = verificaPeao(tabuleiro, linOri, colOri, linDes, colDes);

	//Algum erro na origem
	} else{
		destino = false;
	}

	return destino;

}