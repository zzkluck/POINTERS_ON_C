//store_bit_field.c -- 把一个给定的值存到一个整数中的指定几位
#include"USE.h"
#if USE_05_05

#include<stdio.h>

int store_bit_field(int original_value,
	int value_to_store,
	unsigned int starting_bit, unsigned ending_bit) {
	
	//步骤一,创建掩码
	unsigned int i = starting_bit - ending_bit+1;
	unsigned int mask = 0;
	for (int count = 0; count < i; count++) {
		mask <<= 1;
		mask |= 1;
	}
	mask <<= ending_bit;
	//步骤二,对掩码反值操作,设置原值所需位为0
	original_value&=~mask;
	//步骤三,左移新值
	value_to_store <<= ending_bit;
	//步骤四,处理新值
	value_to_store &= mask;
	//步骤五,储存
	original_value |= value_to_store;
	return original_value;
}

#endif // USE_05_05