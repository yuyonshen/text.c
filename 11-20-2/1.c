#define   _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main(){
	int age = 0;
	printf("请输入你的年龄：");
	scanf("%d", &age);
	if (age < 18){
		printf("未成年：");
	}
	else if (18 <= age < 32){
		printf("青年");
	}
		else if(32 <= age < 52){
	 	printf("中年");
		}  
		else if (52 <= age < 100){
			printf("老年");
		}
		else
			printf("输入错误");
		system("pause");
		return 0;
	}