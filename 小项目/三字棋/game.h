#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


#define ROW 3
#define COL 3


// 定义初始化棋盘
void initBoard(char board[ROW][COL], int row, int col);
// 绘制棋盘
void drawnBoard(char board[ROW][COL], int row, int col);

// 玩家走棋
void playerMove(char board[ROW][COL], int row, int col);
// 电脑走棋
void AiMove(char board[ROW][COL], int row, int col);

// 判断输赢
// 玩家赢 -- *
// 电脑赢 -- #
// 平局   -- Q
// 继续	  -- C
char isWin(char board[ROW][COL],int row,int col);