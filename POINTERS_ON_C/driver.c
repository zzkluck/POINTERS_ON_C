#include<stdio.h>
#include<string.h>

#define MAX 27

int prepare_key(char *key);
void encrypt(char*data, char const *key);

int main(void) {
	FILE *fp;
	char sercet_key[MAX];
	char password[MAX];
	fopen_s(&fp, "password.txt", "w");
	puts("��������Ҫʹ�õ���Կ");
	gets_s(sercet_key, MAX);
	puts("��������Ҫ���ܵ�����");
	gets_s(password, MAX);
	prepare_key(sercet_key);
	encrypt(password, sercet_key);
	fputs(password, fp);
	puts("���ܺ�������ѱ���");

}