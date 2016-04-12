#include"USE.h"
#ifdef USE_03_05

#include<stdio.h>
int main() {
	/*
	**			测试一
	*/
	
	double dou1=1e64;
	float f1=dou1;

	printf("我们可怜的float变成了:%lf", f1);		//inf.....

	/*
	**			让我们换个姿势
	*/


	getchar();
}
#endif // USE_03_05
