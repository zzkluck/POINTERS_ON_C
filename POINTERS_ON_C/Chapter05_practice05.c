//store_bit_field.c -- ��һ��������ֵ�浽һ�������е�ָ����λ
#include"USE.h"
#if USE_05_05

#include<stdio.h>

int store_bit_field(int original_value,
	int value_to_store,
	unsigned int starting_bit, unsigned ending_bit) {
	
	//����һ,��������
	unsigned int i = starting_bit - ending_bit+1;
	unsigned int mask = 0;
	for (int count = 0; count < i; count++) {
		mask <<= 1;
		mask |= 1;
	}
	mask <<= ending_bit;
	//�����,�����뷴ֵ����,����ԭֵ����λΪ0
	original_value&=~mask;
	//������,������ֵ
	value_to_store <<= ending_bit;
	//������,������ֵ
	value_to_store &= mask;
	//������,����
	original_value |= value_to_store;
	return original_value;
}

#endif // USE_05_05