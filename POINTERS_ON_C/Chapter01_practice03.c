//checksum.c
#include"USE.h"
#ifdef USE_01_04

#include<stdio.h>

int main(void) {
	signed char checksum=-1;
	char ch;

	while ((ch= getchar())!='\n') {
		checksum += ch;
		putchar(ch);
	}
	checksum += '\n';
	printf("\n%d\n", checksum);

	system("pause");
}
#endif // USE_04