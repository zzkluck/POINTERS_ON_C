//common_measure.c -- 求最大公约数
#ifdef USE_07_02

#include<stdio.h>

int gcd(int m, int n)
{
	if (m <= 0 || n <= 0)
		return 0;
	int r = m%n;
	if (r != 0)
		gcd(n, r);
	else
		return n;
}
#endif // USE_07_02