//���ַ����в��ҵ���
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
	strcat_s(aim_spc, MAX, " ");			//����Ŀ���ַ���Ϊ"aim ",���ڲ�ѯ�׵���

	current = strstr(string, aim_spc);		//��ѯ�׵���

	char spc_aim_spc[MAX] = " ";
	strcat_s(spc_aim_spc, MAX, aim_spc);	//����Ŀ���ַ���Ϊ" aim ",���ڲ�ѯ���еĵ���

	while (current != NULL) {
		count++;
		current = strstr(current + 1, spc_aim_spc);
	}

	return count;
}
#endif // USE_09_11