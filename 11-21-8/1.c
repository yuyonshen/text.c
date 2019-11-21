#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int y0, m0, d0;
	printf("请输入你的出生年月日：\n");
	scanf("%d%d%d", &y0, &m0, &d0);
	printf("这个人的生日是%d年%d月%d日\n", y0, m0, d0);
	int y1, m1, d1;
	printf("请输入现在的日期:");
	scanf("%d%d%d", &y1, &m1, &d1);
	int age;
	age = y1 - y0;
	if (m1 - m0> 6){
		age = age + 1;
	}
	printf("这个人的年龄是%d", age);
system("pause");
return 0;
}