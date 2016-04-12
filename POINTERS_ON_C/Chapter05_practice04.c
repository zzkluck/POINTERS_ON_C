//bit_array.c -- 位数组的处理
#include"USE.h"
#include<stdio.h>
#ifdef USE_05_04

void set_bits(char bit_array[], unsigned bit_number);
void clear_bits(char bit_array[], unsigned bit_number);
void assign_bits(char bit_array[], unsigned bit_number,int value);
int test_bits(char bit_array[], unsigned bit_number);

void set_bits(char bit_array[], unsigned bit_number)
{
	unsigned int byte_number = bit_number / 8;
	int byte_bit = bit_number % 8;

	int mark = 1 << byte_bit;
	bit_array[byte_number] |= mark;
}

void clear_bits(char bit_array[], unsigned bit_number)
{
	unsigned int byte_number = bit_number / 8;
	int byte_bit = bit_number % 8;

	int mark = 1 << byte_bit;
	bit_array[byte_number] &= ~mark;
}

void assign_bits(char bit_array[], unsigned bit_number, int value)
{
	unsigned int byte_number = bit_number / 8;
	int byte_bit = bit_number % 8;

	int mark = 1 << byte_bit;
	if(value==1)
		bit_array[byte_number] |= mark;
	else
		bit_array[byte_number] &= ~mark;
}

int test_bits(char bit_array[], unsigned bit_number)
{
	unsigned int byte_number = bit_number / 8;
	int byte_bit = bit_number % 8;
	int mark = 1 << byte_bit;
	if ((bit_array[byte_number] & mark) != 0)
		return 1;
	else
		return 0;
}

#endif // USE_05_04