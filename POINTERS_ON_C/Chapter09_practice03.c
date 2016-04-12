//my_strcpy.c -- 一个自制的strcpy
#ifdef USE_09_03

#include<stdio.h>

char *my_strcpy(char *const dst, char const *src,int length) {
	int i;
	char *dst_cpy = dst;
	for (i = 0; i+1 < length; i++) {
		if (*src == '\0')
			break;
		*dst_cpy++ = *src++;
	}
	*dst_cpy = '\0';
	return dst;
}
#endif // USE_09_03