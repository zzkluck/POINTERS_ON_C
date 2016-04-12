//array_offset.c -- α����Ӧ�ú���
#ifdef USE_08_06

#include<stdarg.h>
#define MAX 11
int array_offset(int arrayinfo[], ...) {
	int dms = *arrayinfo;
	if (dms > 10 || dms < 1)
		return -1;		//����ά����Ч���

	va_list var;
	int s[MAX];
	va_start(var, arrayinfo);
	for(int *i=s+1;i<s+dms+1;i++)
		*i=va_arg(var, int);
	va_end(var);		//��ȡ�±�ֵ

	int lo[MAX];
	int hi[MAX];
	for (int i = 0; i < dms; i++) {
		lo[i+1] = arrayinfo[1 + 2 * i];
		hi[i+1] = arrayinfo[2 + 2 * i];
	}		//��ȡ������

	for (int i = 1; i < dms + 1; i++) {
		if (s[i] < lo[i] || s[i]>hi[i] || lo[i] > hi[i])
			return -1;		//����±�ֵ�Ƿ�����������,�����Ƿ��������
	}

	int loc=0;
	for (int i = 1; i <= *arrayinfo; i++) {
		loc = loc*(hi[i] - lo[i] + 1) + s[i] - lo[i];
	}
	return loc;		//����ƫ����
}
#endif // USE_08_06