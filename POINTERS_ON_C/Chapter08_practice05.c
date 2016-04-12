//matrix_multiply.c -- æÿ’Û≥À∑®
#ifdef USE_08_05

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z) {
	int row, list, k;
	for (row = 1; row <= x; row++)
		for (list = 1; list <= z; list++) {
			*r = 0;
			for (k = 1; k <= y; k++) {
				*r += *(m1 + (row - 1)*y + k - 1) * *(m2 + (k - 1)*z + list - 1);
			}
			r++;
		}
}

//driver.c
#include<stdio.h>
void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z);
int main(void) {
	int m1[3][2] = {
		{ 2,-6 },
		{ 3, 5 },
		{ 1,-1 }
	};
	int m2[2][4] = {
		{ 4,-2,-4,-5 },
		{ -7,-3, 6, 7 }
	};
	int r[3][4];
	int *rp = r;
	matrix_multiply(m1, m2, r, 3, 2, 4);
	for (int row = 0; row < 3; row++) {
		for (int list = 0; list < 4; list++)
			printf("%4d ", *rp++);
		putchar('\n');
	}

	getchar();

}
#endif // USE_08_05