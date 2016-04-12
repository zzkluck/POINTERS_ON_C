//del_substr.c -- ɾ��Ŀ���ַ����е�ָ���ַ���
#include"USE.h"
#ifdef USE_06_02

#include<stdio.h>

int 
del_substr(char *str, char const *substr) {
/*
**	�ⲿ������Ѱ��str��substr��λ��
*/

	char *str_cpy = NULL, *substr_cpy = NULL;
	int equal = 0;	

	for (; *str != '\0';str++) {
		if (*str == *substr)	//����str�ҵ���substr���ַ���ȵ��ַ�ʱ 
		{
			equal = 1;
			str_cpy = str;
			substr_cpy = substr;	//��copy��������ԭ���������ַ�����ͬ����ȷ��

			while (*substr_cpy != '\0'&&equal == 1) 
			{
				if (*substr_cpy++ != *str_cpy++)
					equal = 0;
			}	//����Ƚ��ַ�,ֱ����substr�г��ֿ��ַ�.���в����,���ٴν�equal��Ϊ0
			
			if (equal)
				break;	//����Ѿ��ҵ�Ҫ�ҵ��ַ���,����ѭ��
		}
	}
	if (!equal)
		return 0;	//���������δ�ҵ������ַ���,��������,����0.
	
	/*
	**	������˴�����δ�����Ļ�,str��ָ��Ŀ��λ��,���濪ʼɾ��Ŀ���ַ���
	*/

	int length = substr_cpy - substr;	/*��ʱsubstr_copyǡ��ָ��substr�ַ������Ŀ��ַ�
										  ������һ����substr�ַ����ĳ���*/

	do{
		*str = *(str + length);
	} while (*(str + length) != '\0'&&str++);	//ɾ��Ŀ���ַ���(ע����ַ������)

	return 1;
}
#endif // USE_06_02