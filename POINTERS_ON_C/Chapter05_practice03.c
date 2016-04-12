//reverse_bits.c -- ��תһ��unsigned int�Ķ�����λ
#include"USE.h"
#ifdef USE_05_03

#include<stdio.h>

unsigned int reverse_bits(unsigned int value)
{
	unsigned int answer = 0;
	int i;

	for (i = 1; i != 0; i <<= 1) {
		answer <<= 1;
		if (value % 2 != 0) {
			answer |= 1;
		}
		value >>= 1;
	}

	return answer;
}
#endif