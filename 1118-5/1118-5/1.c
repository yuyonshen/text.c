#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int leapyear(int year){
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		printf("��");
	}
	else
		printf("��");
}
int main(){
	int Year = 0;
	printf("��������:");
	scanf("%d", &Year);
	leapyear(Year);
system("pause");
return 0;
}