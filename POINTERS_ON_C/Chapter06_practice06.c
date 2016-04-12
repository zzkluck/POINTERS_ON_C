//小质数要比大质数多么?
//需要05_04和06_05.
#include"USE.h"
#ifdef USE_06_06

#include<stdio.h>

int Eratosthenes(int);

int main(void) {
	int a, b, c, d;
	b = 0;
	d = 0;
	for (a = 100000; a < 8800000; a += 100000) {
		c = Eratosthenes(a);
		printf("%d~%d:%d\n", b, a, c - d);
		b = a;
		d = c;
	}

	getchar();
}
#endif // USE_06_06