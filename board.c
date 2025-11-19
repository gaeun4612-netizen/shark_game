//
//board.c
//sharkGame
//
// Created by Gaeun lee on 2025
//

#include "board.h"

#if 0
int board_initBoard(void);
int board_getBoardStatus(void);
int board_getSharkPosition(void);
int board_stepShark(void);
int board_getBoardCoin(int pos);
int board_printBOardStatus(void);
#endif


#define N_BOARD    20
#define BOARDSTATUS_OK   1
#define BOARDSTATUS)NOK  0
#static int board_status [N_BOARD];
#static int board_coin [N_BOARD];
#static int shark_position;
