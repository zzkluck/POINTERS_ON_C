//paired_braces.c -- 检验所有的大括号是否配对
#include"USE.h"
#ifdef USE_02_02

#include<stdio.h>

int 
main(void) {
	char ch;
	int brace=0;
	
	while ((ch = getchar())!='\n') 
	{
		if (ch =='{') {
			brace++;
		}
		if (ch == '}') {
			if (brace == 0) {
				puts("There is a right brace that isn't paired with a left brace.");
				exit(1);
			}
			else
				brace--;
		}
	}
	if (brace > 0) {
		printf("There is %d left brace that isn't paired with a right brace.", brace);
		exit(2);
	}
	else if (brace == 0) {
		puts("All the braces are paired!");
		return 0;
	}
	else {														
		puts("There's something wrong with the program.");
		exit(3);											//其实并没有什么鬼用的一个else
	}

}
#endif	//USE_02_02