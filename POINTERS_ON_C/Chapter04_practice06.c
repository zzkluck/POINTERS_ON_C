//将字符串src从start开始的len位复制到dst
#include"USE.h"
#ifdef USE_04_06

#include<stdio.h>
#include<string.h>
#define MAX 100

int substr(char dst[], char src[], int start, int len);

int main(void) {
	char src[MAX]="zzkluck is a great name!";
	char dst[MAX];

	int start,len;
	int num;
	
	scanf_s("%d %d", &start,&len);
	
	num=substr(dst, src, start, len);
	
	printf("src is %s.\ndst is %s.\n", src, dst);
	printf("There is %d characters in dst.", num);
	system("pause");

	return 0;


}

int substr(char dst[], char src[], int start, int len)
{
	int i;
	int a = 0;

	if (start > strlen(src) || start < 0 || len < 0)
		dst[0] = '\0';
	else {
		if ((start + len) > MAX) {
			len = MAX - start;
			a = 1;
		}
		for (i = 0; i < len; i++) {
			dst[i] = src[start + i];
			if (dst[i] == '\0')
				break;
		}
		if (1 == a) {
			dst[MAX - 1] = '\0';
		}
	}
	return strlen(dst);
}
#endif // USE_04_06