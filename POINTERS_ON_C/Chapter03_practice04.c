//What will happen if we transform a "long" to "short".c -- 瞎折腾数据
//文件名这么长真的好么┑(￣Д ￣)┍
#include"USE.h"
#ifdef USE_03_04

#include<stdio.h>
#include<limits.h>

int main(void) {
	/*
	**			测试一
	*/
	
	long int long1=LONG_MAX;
	short int short1=long1;

	printf("这是short1的值:%d,它跟SHRT_MAX相等么?:%d\n",
		short1,short1==SHRT_MAX);	//是的,它跟SHRT_MAX不相等.
	
	/*
	**			另一个测试
	*/

	long int long2 = 0x12345678;
	short int short2 = long2;

	printf("Long2在16进制情况下的后四位(二进制下的后16位)是5678,"
		"而Short2的值是%x", short2);		
	
	//结论:当long转化为short时会粗暴地丢弃前16位的数据


	getchar();
}
#endif