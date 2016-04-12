//Eratosthenes.c -- ʹ��Eratosthenesɸѡ����������
#include"USE.h"
#ifdef USE_06_04

#include<stdio.h>

#define NUM 1000000
#define TRUE 1
#define FALSE 0
int
Eratosthenes(int num) {
	int count=0;
	/*
	**	�����ͳ�ʼ������
	*/
	char numbers[NUM] = { 1 };
	int index;
	for (index = 0; index < num; index++)
		numbers[index] = TRUE;
	/*
	**	��ʼɸѡ
	*/
	char *cp=NULL;	
	char *end = &numbers[num];	//ע��,�����������

	for (index = 2; index < num; index++) {
		if (numbers[index] == TRUE) {
			cp = &numbers[index];
			while (cp += index,cp<end) {
				*cp = FALSE;
			}
		}
	}	
	/*
	**	��ӡ���
	*/
	for (index = 2; index < num; index++)
		if (numbers[index] == 1) {
			/*printf("%d is a prime\n", index);*/
			count++;
		}

	return count;
}
#endif // USE_06_04