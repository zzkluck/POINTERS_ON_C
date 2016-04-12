//Output and print line number
#include"USE.h"
#ifdef USE_01_03
#include<stdio.h>

int main(void) {
	int ch;
	int at_beginning=1;
	int line = 0;

	while ((ch = getchar()) != EOF) {
		if (1==at_beginning){
			at_beginning = 0;
			line += 1;
			printf("%d: ", line);
		}
		putchar(ch);
		if ('\n'==ch){
			at_beginning = 1;
		}
	}
	return 0;

}
#endif // USE_03
