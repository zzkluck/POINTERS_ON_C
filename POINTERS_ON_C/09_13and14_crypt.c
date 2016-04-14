#include<string.h>
#include<ctype.h>

void encrypt(char*data,char const *key){
	int upper;
	do {
		if (isalpha(*data) == 0)
			continue;									//��������ĸ�ַ�
		upper = isupper(*data) == 0 ? 0 : 1;			//��¼�ַ��Ĵ�Сд״̬
		*data = *(key + toupper(*data) - 'A');			//�����ַ�
		*data = upper == 1 ? *data : tolower(*data);	//����ȷ����Сд
	} while (*data++ != '\0');
}

void decrypt(char *data, char const *key) {
	int upper;
	do {
		if (isalpha(*data) == 0)
			continue;										//��������ĸ�ַ�
		upper = isupper(*data) == 0 ? 0 : 1;				//��¼�ַ��Ĵ�Сд״̬
		*data = 'A' + (strchr(key,toupper(*data)) - key);	//�����ַ�
		*data = upper == 1 ? *data : tolower(*data);		//����ȷ����Сд
	} while (*data++ != '\0');
}