#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Leapyear(int year){
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		printf("������\n");
		return 1;
	}
	else
		printf("��������\n");
	return 0;
}
int main(){
	int num;
	printf("������һ����ݣ�");
	scanf("%d", &num);
	Leapyear(num);
	system("pause");
	return 0;
}

