//What will happen if we transform a "long" to "short".c -- Ϲ��������
//�ļ�����ô����ĺ�ô��(���� ��)��
#include"USE.h"
#ifdef USE_03_04

#include<stdio.h>
#include<limits.h>

int main(void) {
	/*
	**			����һ
	*/
	
	long int long1=LONG_MAX;
	short int short1=long1;

	printf("����short1��ֵ:%d,����SHRT_MAX���ô?:%d\n",
		short1,short1==SHRT_MAX);	//�ǵ�,����SHRT_MAX�����.
	
	/*
	**			��һ������
	*/

	long int long2 = 0x12345678;
	short int short2 = long2;

	printf("Long2��16��������µĺ���λ(�������µĺ�16λ)��5678,"
		"��Short2��ֵ��%x", short2);		
	
	//����:��longת��Ϊshortʱ��ֱ��ض���ǰ16λ������


	getchar();
}
#endif