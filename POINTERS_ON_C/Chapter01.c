/*
**	rearrange.c -- 最近Get了全新的注释技巧,开心~
**	<<Pointers on C>> 第一章 程序1.1 重排字符
*/
#include"USE.h"
#ifdef USE_01_01
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers(int column[], int max);
void rearrange(char*output, char const*input, int n_column, int const columns[]);

int main(void)
{
	int n_columns; 
	int columns[MAX_COLS];
	char input[MAX_INPUT];
	char output[MAX_INPUT];

	n_columns = read_column_numbers(columns, MAX_COLS);

	while (gets(input) != NULL) {
		printf("Original input : %s\n", input);
		rearrange(output, input, n_columns, columns);
		printf("Rearranged Line: %s\n", output);
	}

	return EXIT_SUCCESS;

}

int read_column_numbers(int column[], int max)
{
	int num = 0;
	int ch;

	while (num < max&&scanf_s("%d", &column[num]) == 1 && column[num] >= 0)
		num++;

	if (num % 2 != 0)
	{
		puts("The last column number is not paired.");
		exit(EXIT_FAILURE);
	}

	while ((ch = getchar()) != EOF&&ch != '\n')
		continue;

	return num;
}

void rearrange(char * output, char const * input, int n_column, int const columns[])
{
	int col;	//columns[]数组的下标	
	int output_col;
	int len;

	len = strlen(input);
	output_col = 0;

	for (col = 0; col < n_column; col += 2)
	{
		int nchars = columns[col + 1] - columns[col]+1;
		if (columns[col] >= len || output_col == MAX_INPUT - 1)
			break;

		//if (output_col + nchars > MAX_INPUT - 1)
		//	nchars = MAX_INPUT - output_col - 1;

		strncpy_s(output + output_col, MAX_INPUT, input + columns[col],nchars);
		output_col += nchars;
	}
	output[output_col] = '\0';
}

#endif	//USE_01
