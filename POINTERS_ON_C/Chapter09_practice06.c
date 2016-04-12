//my_strcpy_end_s.c -- ·µ»Ø×Ö·û´®Ä©Î²µÄstrcpy
#ifdef USE_09_06
char *my_strcpy_end_s(char *dst, int length, char *src) {
	char *dst_end = dst+length-1;

	while (dst < dst_end && *src != '\0')
		*dst++ = *src++;
	*dst = '/0';

	return dst;
}
#endif // USE_09_06