#define   _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main(){
	int age = 0;
	printf("������������䣺");
	scanf("%d", &age);
	if (age < 18){
		printf("δ���꣺");
	}
	else if (18 <= age < 32){
		printf("����");
	}
		else if(32 <= age < 52){
	 	printf("����");
		}  
		else if (52 <= age < 100){
			printf("����");
		}
		else
			printf("�������");
		system("pause");
		return 0;
	}