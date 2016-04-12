//...终于写出来了...被莫名其妙的BUG困扰好久..
#include<ctype.h>
#include<string.h>

#define MAX 26

char* prepare_key(char *key) {
	char*key_start = key;
	char keys[MAX+1];
	char letter[MAX + 1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int index,i,index2;
	int exsit = 0;
	keys[MAX] = '\0';

	for (index = 0; index < MAX; index++) {
		keys[index] = toupper(*key);
	}
	key += 1;

	i = 1;
	while (*key != '\0') {
		for (index = 0; index < i; index++) {
			if (*key == keys[index]) {
				exsit = 1;
			}
		}
		if (exsit == 0) {
			keys[i] = toupper(*key);
			i += 1;
		}
		exsit = 0;
		key += 1;
		if (*key == '\0')
			break;
	}

	
	for (index=0;letter[index]!='\0';index++)
	{
		exsit = 0;
		for (index2=0; index2 <i;index2++)
			if (letter[index] == keys[index2]) {
				exsit = 1;
				break;
			}		
		if (exsit == 1)
			continue;		//历遍keys数组已有的值,如果发现letter与某一已有key重复,跳过此letter

		keys[i] = letter[index];
		i += 1;
	}
	key = key_start;
	strcpy_s(key, MAX + 1, keys);
}