#include "USE.h"
#ifdef USE_09_12_02

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 27

int prepare_key(char *key) {
	if (*key == '\0')
		return 0;
	
	char *keystart = key;
	char keycpy[MAX];
	int i, index;

	for (index = 0; index < MAX - 1; index++)
		keycpy[index] = toupper(*key);
	keycpy[MAX-1] = '\0';

	i = 1;
	while (*++key != '\0') {
		if (isalpha(*key) == 0)
			return 0;
		if (strchr(keycpy, toupper(*key)) == NULL) {
			keycpy[i] = toupper(*key);
			i += 1;
		}
	}

	for (char ch = 'A'; ch <= 'Z'; ch++) {
		if (strchr(keycpy, ch) == NULL) {
			keycpy[i] = ch;
			i += 1;
		}
	}
	key = keystart;
	strncpy_s(key, MAX, keycpy,MAX);
	return 1;
}

#endif // USE_09_12_02