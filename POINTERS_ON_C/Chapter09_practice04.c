//my_strcat.c -- ×ÔÖÆµÄstrcat
#ifdef USE_09_04

char *my_strcat(char *dest, char *src, int dest_len) {
	char *dest_start = dest;
	while(*dest != '\0')
		dest++;
	while (dest < dest_start + dest_len - 1 && *src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return dest_start;
}
#endif // USE_09_04