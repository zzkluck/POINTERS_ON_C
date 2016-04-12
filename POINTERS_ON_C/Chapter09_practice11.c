//在字符串中查找单词
#ifdef USE_09_11

#include<string.h>

#define MAX 20
int find_aim(char *string, char *aim) {
	char *current;
	int count = 0;
	
	if (*aim == '\0')
		return 0;

	char aim_spc[MAX];
	strcpy_s(aim_spc, MAX, aim);
	strcat_s(aim_spc, MAX, " ");			//设置目标字符串为"aim ",用于查询首单词

	current = strstr(string, aim_spc);		//查询首单词

	char spc_aim_spc[MAX] = " ";
	strcat_s(spc_aim_spc, MAX, aim_spc);	//设置目标字符串为" aim ",用于查询文中的单词

	while (current != NULL) {
		count++;
		current = strstr(current + 1, spc_aim_spc);
	}

	return count;
}
#endif // USE_09_11