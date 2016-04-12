//reverse_string.c -- 反转一个字符串
#include"USE.h"
#ifdef USE_06_03

#include<stdio.h>

void reverse_string(char *string) {
	char *end=string;
	for (; *end != '\0'; end++)
		continue;
	end--;
	for (; end > string; end--, string++) {
		char temp;
		temp = *end;
		*end = *string;
		*string = temp;
	}
}
#endif // USE_06_03