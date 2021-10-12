#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define MAX_ROW 3
#define MAX_COL 3
void init(char(*board)[MAX_COL])
{
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			board[row][col] = ' ';
		}
	}
	//�����������
	srand((unsigned)time(NULL));
}

void print_board(char(*board)[MAX_COL])
{
	for(int row = 0; row < MAX_ROW; row++)
	{
		printf("+---+---+---+\n");
		for (int col = 0; col < MAX_COL; col++)
		{
			printf("| %c ", board[row][col]);
		}
		printf("|\n");
	}
	printf("+---+---+---+\n");
}

void player_move(char(*board)[MAX_COL])
{

	printf("�����������������:>");
	while (1)
	{	
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
		{
			printf("������������������:>");
			continue;
		}
		if (board[row][col] != ' ')
		{
			printf("�����ӣ��޷�����,����������\n");
			continue;
		}
		board[row][col] = 'X';
		break;
	}
}

void computer_move(char(*board)[MAX_COL])
{
	int row = 0;
	int col = 0;
	while (1)
	{
		row = rand() % MAX_ROW;
		col = rand() % MAX_COL;
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
		{
			continue;
		}
		if (board[row][col] != ' ')
		{
			continue;
		}
		board[row][col] = 'O';
		break;
	}
}
int is_full(char(*board)[MAX_ROW])
{
	for (int row = 0; row < MAX_ROW; row++)
	{
		int col = 0;
		for (; col < MAX_COL; col++)
		{
			if (board[row][col] == ' ')
			{
				return 0;   //���Ǻ���
			}
		}
	}
	return 1;
}
int check_winner(char(*board)[MAX_ROW])
{
	for (int row = 0; row < MAX_ROW; row++)  //�ж�������
	{
		if (board[row][0] != ' ' && board[row][0] == board[row][1] && board[row][1] == board[row][2])
		{
			return board[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++)    //�ж�������
	{
		if (board[0][col] != ' ' && board[0][col] == board[1][col] && board[1][col] == board[2][col])
		{
			return board[0][col];
		}
	}
	//�Խ���
	if ((board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]))  
	{
		return board[0][0];
	}
	if (board[2][0] != ' ' && board[2][0] == board[1][1] && board[1][1] == board[0][2])
	{
		return board[2][0];
	}
	//����
	return is_full(board);
	
}
int main()
{
	char board[MAX_ROW][MAX_COL] = { 0 };
	init(board);
	char winner = ' ';
	while (1)
	{
		system("cls");
		//��ӡ����
		print_board(board);
		//�������
		player_move(board);
		////��������
		computer_move(board);
		////�ж�ʤ��
		winner = check_winner(board);
		if (winner == 'X')
		{
			printf("��һ�ʤ\n");
			break;
		}
		else if (winner == 'O')
		{
			printf("���Ի�ʤ\n");
			break;
		}
		else if(winner == 1)
		{
			printf("����\n");
			break;
		}
	}
	return 0;
}