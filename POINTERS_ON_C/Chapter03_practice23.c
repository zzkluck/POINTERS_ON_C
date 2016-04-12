#include"USE.h"
#ifdef USE_03_23

#include<stdio.h>
static char b = 2;

void x(void);
void y(void);


int main(void) {
	//邪道!
	x();
	y();
	getchar();

}

void x() {

	static float d = 4;
	int c = 3;

	printf("%d,%d,%d,%f\n",a, b, c, d);		//x()无法直接访问a变量.

}

extern int a = 1;

void y() {
	printf("%d,%d", a, b);
}

#endif // USE_03_23