//copy_n.c -- �����ַ���
#include"USE.h"
#ifdef USE_04_04

#include<stdio.h>
#define MAX 31

void copy_n(char dst[], char src[], int n);

int main(void) {
	char src[MAX]="zzkluck is a great name!";
	char dst[MAX];

	
	int n;
	scanf_s("%d", &n);

	copy_n(dst, src, n);

	printf("src is %s.\ndst is %s.\n", src, dst);
	system("pause");

}

void copy_n(char dst[], char src[], int n)
{
	int i;

	for (i = 0; i < n&&src[i] != '\0'; i++) {
		dst[i] = src[i];
	}
	for (; i > n; i++) {
		dst[i] = '\0';
	}
	//if (n < MAX)
	//	dst[n] = '\0';   ���̵Ľ������
}
#endif // USE_04_04