//ctype.c -- 读取字符串的类型
#ifdef USE_09_01

#include<stdio.h>
#include<ctype.h>
int main(void) {
	char ch;
	int control, space, digit, lowwer, upper, punctuation, imprint;
	control = space = digit = lowwer = upper = punctuation = imprint = 0;

	while ((ch = getchar())!='\n') {
		if (!isprint(ch))
			imprint += 1;
		else if (iscntrl(ch))
			control += 1;
		else if (isdigit(ch))
			digit += 1;
		else if (islower(ch))
			lowwer += 1;
		else if (isupper(ch))
			upper += 1;
		else if (ispunct(ch))
			punctuation += 1;
		else if (isspace(ch))
			space += 1;
	}

	printf("这段文字中,\n");
	printf("控制字符:%d\n", control);
	printf("数字:%d\n", digit);
	printf("小写字母:%d\n", lowwer);
	printf("大写字母:%d\n", upper);
	printf("标点:%d\n", punctuation);
	printf("空白字符:%d\n", space);
	printf("不可打印的字符:%d\n", imprint);

	system("pause");
}

#endif // USE_09_01
