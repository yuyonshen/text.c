#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int year=0;
	printf("%d", year);
	scanf("%d", &year);
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		printf("%d", 1);
	}
	else
		printf("%d", 0);

system("pause");
return 0;
}