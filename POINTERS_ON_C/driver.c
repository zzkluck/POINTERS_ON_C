#include<stdio.h>
#include<string.h>
int prepare_key(char *key);

int main(void) {
	char key[27] = "TRAILBLAZERS";
	prepare_key(key);
	puts(key);
	system("pause");
}