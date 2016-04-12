//find_char.c -- ²éÕÒ×Ö·û´®
#include"USE.h"
#ifdef USE_06_01

#include<stdio.h>

char*
find_char(char const *source, char const *chars) {
	char *source_copy = source;

	if (source != NULL&&chars != NULL) {
		for (; *chars != '\0'; chars++) {
			for (; *source != '\0'; source++) {
				if (*chars == *source) {
					return source;
				}
			}
			source = source_copy;
		}
	}
	return NULL;
}

#endif	//USE_06_01