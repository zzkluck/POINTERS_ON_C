#include<stdio.h>
#include<string.h>
int find_aim(char *string, char *aim);

int main(void) {
	char string[]="zzkluck is great name!";
	printf("%d\n", find_aim(string,"the"));
	system("pause");
}