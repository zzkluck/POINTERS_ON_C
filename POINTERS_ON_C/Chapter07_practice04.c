//max_list.c -- 找一列数中的最大值,可变参数
#ifdef USE_07_04

#include<stdio.h>
#include<stdarg.h>

int max_list(char start, ...) {
	va_list var_max;
	int max = 0;
	int a;
	va_start(var_max, start);

	while ((a = va_arg(var_max, int)) >= 0) 
		max = max > a ? max : a;

	va_end(var_max);

	return max;
}
#endif // USE_07_04