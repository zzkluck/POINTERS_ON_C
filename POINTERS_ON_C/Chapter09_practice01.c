//ctype.c -- ��ȡ�ַ���������
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

	printf("���������,\n");
	printf("�����ַ�:%d\n", control);
	printf("����:%d\n", digit);
	printf("Сд��ĸ:%d\n", lowwer);
	printf("��д��ĸ:%d\n", upper);
	printf("���:%d\n", punctuation);
	printf("�հ��ַ�:%d\n", space);
	printf("���ɴ�ӡ���ַ�:%d\n", imprint);

	system("pause");
}

#endif // USE_09_01
