//limits.c -- ���������ͷ�Χ��̽��
#include"USE.h"
#ifdef USE_03_01

#include<stdio.h>
#include<limits.h>

int main(void) {
	//�Ѵ����ŷŵ���һ�е�ȫ��а��!
	printf("Char���͵���Сֵ%d,\n���ֵ��%d.\nUnsigned char���͵����ֵ��%d.\n\n",
		SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);	//8λ
	printf("Short int����Сֵ%d,\n���ֵ��%d.\nUnsigned short int���͵����ֵ��%d.\n\n",
		SHRT_MIN, SHRT_MAX, USHRT_MAX);		//16λ
	printf("Int���͵���Сֵ%d,\n���ֵ��%d.\nUnsigned int���͵����ֵ��%u.\n\n",
		INT_MIN,INT_MAX,UINT_MAX);		//32λ
	printf("Long Int���͵���Сֵ%ld,\n���ֵ��%d.\nUnsigned long int���͵����ֵ��%uld.\n\n",
		LONG_MIN, LONG_MAX, ULONG_MAX);		//32λ

	unsigned long long int a=0;
	printf("���ü���long�ᷢ��ʲô��?:%I64u\n", a - 1);		//��ʵ֤��,I64U�����漣.

	getchar();
}

#endif
