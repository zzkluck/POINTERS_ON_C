//Eratosthenes_bits.c -- 使用Eratosthenes筛选法查找素数,用位数组储存数据#include<stdio.h>
#include"USE.h"
#include<stdio.h>
#ifdef USE_06_05

#define NUM 1000000
#define TRUE 0
#define FALSE 1	//注意,这里的0,1与约定的不同

void set_bits(char bit_array[], unsigned bit_number);
int test_bits(char bit_array[], unsigned bit_number);

int
Eratosthenes(int num) {
	int count = 0;
	int byte=num/8+(num%8==0?0:1);	//利用位储存数据

	/*
	**	建立和初始化数组
	*/
	char numbers[NUM] = { 0 };
	int index,assign;
	for (index = 0; index < byte; index++)
		numbers[index] = 0;
	/*
	**	开始筛选
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
	**	打印结果
	*/
	for (index = 2; index < num; index++)
		if (test_bits(numbers, index) == TRUE) {
			//printf("%d is a prime\n", index);
			count++;
		}

	return count;
}
#endif // USE_06_05