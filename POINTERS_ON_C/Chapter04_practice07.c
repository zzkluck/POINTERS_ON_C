//ȥ���ַ����ж���Ŀո�
//ע��,�Ʊ�����ǿո�!
#include"USE.h"
#ifdef USE_04_07

#include<stdio.h>
#define MAX 100

void deblank_A(char src[],char de_blank[]);

int main(void) {
	char src[MAX];
	char de_blank[MAX];
	
	while (gets_s(src, MAX)) {
		deblank_A(src, de_blank);
		printf("Src is %s,\nAnd deblank is %s.\n", src, de_blank);
	}
	return 0;

}

void deblank_A(char src[], char de_blank[])
{
	int i_s, i_d;	//i_s������ԭ�ַ����ж�ȡ,i_d�������.

	{
		for (i_s = 0, i_d = 0; (src[i_s + 1] != '/0') && i_s < MAX; i_s++) {
			if (src[i_s] == src[i_s + 1] && src[i_s] == ' ') {
				continue;
			}
			de_blank[i_d] = src[i_s];
			i_d++;
		}
	}
}

#endif // USE_04_07