//Eratosthenes_bits.c -- ʹ��Eratosthenesɸѡ����������,��λ���鴢������#include<stdio.h>
#include"USE.h"
#include<stdio.h>
#ifdef USE_06_05

#define NUM 1000000
#define TRUE 0
#define FALSE 1	//ע��,�����0,1��Լ���Ĳ�ͬ

void set_bits(char bit_array[], unsigned bit_number);
int test_bits(char bit_array[], unsigned bit_number);

int
Eratosthenes(int num) {
	int count = 0;
	int byte=num/8+(num%8==0?0:1);	//����λ��������

	/*
	**	�����ͳ�ʼ������
	*/
	char numbers[NUM] = { 0 };
	int index,assign;
	for (index = 0; index < byte; index++)
		numbers[index] = 0;
	/*
	**	��ʼɸѡ
	*/
	for (index = 2; index < num; index++) {
		if (test_bits(numbers,index) == TRUE){
			assign = index;
			while (assign += index, assign<num) {
				set_bits(numbers,assign);
			}
		}
	}
	/*
	**	��ӡ���
	*/
	for (index = 2; index < num; index++)
		if (test_bits(numbers, index) == TRUE) {
			//printf("%d is a prime\n", index);
			count++;
		}

	return count;
}
#endif // USE_06_05