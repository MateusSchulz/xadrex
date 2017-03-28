void mostraTabuleiro(char **tabuleiro){

	int i, j;

	printf("                 0   1   2   3   4   5   6   7  \n\n");
	for(i=0;i<8;i++){
		printf("            %d  |", i);
		for(j=0;j<8;j++){
			printf(" %c |", tabuleiro[i][j]);
		}
		printf("\n");
	}

}