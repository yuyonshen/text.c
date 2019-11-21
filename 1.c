#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Leapyear(int year){
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		printf("是闰年\n");
		return 1;
	}
	else
		printf("不是闰年\n");
	return 0;
}
int main(){
	int num;
	printf("请输入一个年份：");
	scanf("%d", &num);
	Leapyear(num);
	system("pause");
	return 0;
}

