//ascii_to_integer.c -- 将字符串中的数字传化为int型
#ifdef USE_07_03

#include<stdio.h>

int ascii_to_integer(char*string) {
	int integer=0;
	while (*string <= '9'&&*string >= '0') {
		integer *= 10;
		integer += *string - '0';
		*(string++);
	}
	if (*string == '\0')
		return integer;
	else
		return 0;
}
#endif // USE_07_03