//leap_year_or_not.c -- 是闰年么~
#include"USE.h"
#ifdef USE_04_12

#include<stdio.h>

int leap_year_or_not(int year);

int main(void) {
	int year;

	while (scanf_s("%d", &year) == 1) {
		switch (leap_year_or_not(year)) {
		case 1:
			printf("The year %d is a leap year!\n", year);
			break;
		case 0:
			printf("The year %d isn't a leap year.\n", year);
			break;
		default:
			puts("Something wrong in the program.");
		}
		
		
	}
}

int leap_year_or_not(int year)
{
	(year > 0) ? 1:( year = -year);
	int leap_year = 0;

	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 != 0)
			;
		else
			leap_year=1;
		}
	
	//参考资料的解法
	//if (year % 400 == 0)
	//	leap_year = 1;
	//else if (year % 100 == 0)
	//	leap_year == 0;
	//else if (year % 4 == 0)
	//	leap_year == 1;
	//else
	//	leap_year == 0;


	return leap_year;
}

#endif // USE_04_12