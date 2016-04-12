#ifdef USE_07_05

#include<stdio.h>
#include<stdarg.h>

void simple_printf(char *string,...) {
	va_list print;
	char ch;
	char *str;

	va_start(print, *string);
	for (; *string != '/0'; string++) {
		if (*string == '%') {
			switch (*++string ) {
			/*case 'd':
				print_integer(va_arg(print, int));
				break;
			case 'f':
				print_integer(va_arg(print, float));
				break;*/
			case 's':
				str = va_arg(print, char*);
				while(*str!='\0')
					putchar(*str++);
				break;
			case 'c':
				putchar(va_arg(print, int));
				break;
			}
		}
		else
			putchar(*string);
	}
}
#endif // USE_07_05