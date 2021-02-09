#pragma once
#include<string.h>
#include <time.h>
#include <stdlib.h>

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


#define  ROW 3
#define  COL 3
void Initbard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void  playermove(char board[ROW][COL], int row, int col);
int  judge(char board[ROW][COL], int row, int col);



