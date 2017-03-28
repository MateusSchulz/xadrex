void trocar(char **tabuleiro, int linOri, int colOri, int linDes, int colDes){
	tabuleiro[linDes][colDes] = tabuleiro[linOri][colOri];
	tabuleiro[linOri][colOri] = ' ';
}