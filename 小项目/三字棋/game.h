#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


#define ROW 3
#define COL 3


// �����ʼ������
void initBoard(char board[ROW][COL], int row, int col);
// ��������
void drawnBoard(char board[ROW][COL], int row, int col);

// �������
void playerMove(char board[ROW][COL], int row, int col);
// ��������
void AiMove(char board[ROW][COL], int row, int col);

// �ж���Ӯ
// ���Ӯ -- *
// ����Ӯ -- #
// ƽ��   -- Q
// ����	  -- C
char isWin(char board[ROW][COL],int row,int col);