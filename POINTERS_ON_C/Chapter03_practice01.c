//limits.c -- 对数据类型范围的探索
#include"USE.h"
#ifdef USE_03_01

#include<stdio.h>
#include<limits.h>

int main(void) {
	//把大括号放到这一行的全是邪道!
	printf("Char类型的最小值%d,\n最大值是%d.\nUnsigned char类型的最大值是%d.\n\n",
		SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);	//8位
	printf("Short int的最小值%d,\n最大值是%d.\nUnsigned short int类型的最大值是%d.\n\n",
		SHRT_MIN, SHRT_MAX, USHRT_MAX);		//16位
	printf("Int类型的最小值%d,\n最大值是%d.\nUnsigned int类型的最大值是%u.\n\n",
		INT_MIN,INT_MAX,UINT_MAX);		//32位
	printf("Long Int类型的最小值%ld,\n最大值是%d.\nUnsigned long int类型的最大值是%uld.\n\n",
		LONG_MIN, LONG_MAX, ULONG_MAX);		//32位

	unsigned long long int a=0;
	printf("多用几个long会发生什么呢?:%I64u\n", a - 1);		//事实证明,I64U创造奇迹.

	getchar();
}

#endif
