void board_printBoardStatus(void)
{
	int i;
	
	printf("------------BOARD STATUS------------");
	for(i=0;i<N_BOARD;i++)
	{
		printf("|");
		if (board_status[i] == BOARDSTATUS_NOK)
			printf("X");
		else
			printf("O");
	}
	printf("|\n");
	printf("------------------------------------");
}
