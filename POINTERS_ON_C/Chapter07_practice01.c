//hermits.c -- 厄密多项式
//变量三为0使用迭代法,其他值使用递归

#ifdef USE_07_01

#include<stdio.h>

int hermits(int n, int x, int *zzk) {
	int count = 0;
	if (0 == zzk) {
		int a, b, c;
		if (n <= 0)
			return 1;
		else if (n == 1)
			return 2 * x;
		else
		{
			a = 1;
			b = 2 * x;
			for (int i = 2; i <= n; i++) {
				c = 2 * x*b - 2 * (i - 1)*a;
				a = b;
				b = c;
			}
			return c;
		}

	}
	else
	{
		if (n <= 0)
			return 1;
		else if (n == 1)
			return 2 * x;
		else
			return 2 * x*hermits(n - 1, x,1) - 2 * (n - 1)*hermits(n - 2, x,1);
	}
}

#endif // USE_07_01