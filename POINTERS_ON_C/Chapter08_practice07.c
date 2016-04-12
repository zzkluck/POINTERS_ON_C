//以列为主序的伪数组
#ifdef USE_08_07

#include<stdarg.h>
#define MAX 11
int array_offset(int arrayinfo[], ...) {
	int dms = *arrayinfo;
	if (dms > 10 || dms < 1)
		return -1;		//进行维数有效检查

	va_list var;
	int s[MAX];
	va_start(var, arrayinfo);
	for (int *i = s + 1; i<s + dms + 1; i++)
		*i = va_arg(var, int);
	va_end(var);		//读取下标值

	int lo[MAX];
	int hi[MAX];
	for (int i = 0; i < dms; i++) {
		lo[i + 1] = arrayinfo[1 + 2 * i];
		hi[i + 1] = arrayinfo[2 + 2 * i];
	}		//读取上下限

	for (int i = 1; i < dms + 1; i++) {
		if (s[i] < lo[i] || s[i]>hi[i] || lo[i] > hi[i])
			return -1;		//检查下标值是否在上下限内,上限是否大于下限
	}
	//注意,以上三部分(读取下标,上下限,检查)可以放在一个循环内进行

	int loc = 0;
	for (int i = *arrayinfo; i >1 ; i--) {
		loc = (loc + s[i] - lo[i])*
			(hi[i - 1] - lo[i - 1] + 1);
	}
	loc += s[1] - lo[1];

	return loc;		//计算偏移量
}
#endif // USE_08_07