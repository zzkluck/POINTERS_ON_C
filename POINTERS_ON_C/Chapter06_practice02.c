//del_substr.c -- 删除目标字符串中的指定字符串
#include"USE.h"
#ifdef USE_06_02

#include<stdio.h>

int 
del_substr(char *str, char const *substr) {
/*
**	这部分用来寻找str中substr的位置
*/

	char *str_cpy = NULL, *substr_cpy = NULL;
	int equal = 0;	

	for (; *str != '\0';str++) {
		if (*str == *substr)	//当在str找到与substr首字符相等的字符时 
		{
			equal = 1;
			str_cpy = str;
			substr_cpy = substr;	//用copy变量代替原变量进行字符串相同与否的确认

			while (*substr_cpy != '\0'&&equal == 1) 
			{
				if (*substr_cpy++ != *str_cpy++)
					equal = 0;
			}	//逐个比较字符,直到在substr中出现空字符.如有不相等,则再次将equal设为0
			
			if (equal)
				break;	//如果已经找到要找的字符串,跳出循环
		}
	}
	if (!equal)
		return 0;	//如果最终仍未找到所求字符串,结束函数,返回0.
	
	/*
	**	如果到此处程序未结束的话,str则指向目标位置,下面开始删除目标字符串
	*/

	int length = substr_cpy - substr;	/*此时substr_copy恰好指向substr字符串最后的空字符
										  利用这一点获得substr字符串的长度*/

	do{
		*str = *(str + length);
	} while (*(str + length) != '\0'&&str++);	//删除目标字符串(注意空字符的添加)

	return 1;
}
#endif // USE_06_02