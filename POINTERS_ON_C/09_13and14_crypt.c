#include<string.h>
#include<ctype.h>

void encrypt(char*data,char const *key){
	int upper;
	do {
		if (isalpha(*data) == 0)
			continue;									//跳过非字母字符
		upper = isupper(*data) == 0 ? 0 : 1;			//记录字符的大小写状态
		*data = *(key + toupper(*data) - 'A');			//加密字符
		*data = upper == 1 ? *data : tolower(*data);	//重新确定大小写
	} while (*data++ != '\0');
}

void decrypt(char *data, char const *key) {
	int upper;
	do {
		if (isalpha(*data) == 0)
			continue;										//跳过非字母字符
		upper = isupper(*data) == 0 ? 0 : 1;				//记录字符的大小写状态
		*data = 'A' + (strchr(key,toupper(*data)) - key);	//解密字符
		*data = upper == 1 ? *data : tolower(*data);		//重新确定大小写
	} while (*data++ != '\0');
}