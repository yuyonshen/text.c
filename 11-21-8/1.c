#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int y0, m0, d0;
	printf("��������ĳ��������գ�\n");
	scanf("%d%d%d", &y0, &m0, &d0);
	printf("����˵�������%d��%d��%d��\n", y0, m0, d0);
	int y1, m1, d1;
	printf("���������ڵ�����:");
	scanf("%d%d%d", &y1, &m1, &d1);
	int age;
	age = y1 - y0;
	if (m1 - m0> 6){
		age = age + 1;
	}
	printf("����˵�������%d", age);
system("pause");
return 0;
}