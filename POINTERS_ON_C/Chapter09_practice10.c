//palindrome.c -- еп╤о╩ьнд
#ifdef USE_09_10

#include<ctype.h>
#define TRUE 1
#define FALSE 0

int palindrome(char*string) {
	char *string_end = string;
	while (*string_end != '\0')
		string_end += 1;
	string_end -= 1;

	while (string < string_end) {
		while (isalpha(*string) == 0)
			string++;
		while (isalpha(*string_end) == 0)
			string_end--;
		if (tolower(*string++) != tolower(*string_end--))
			return FALSE;
	}
	return TRUE;
}
#endif // USE_09_10