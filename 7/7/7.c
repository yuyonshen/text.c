#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a;
int i;
int prime(int x){
	for (i = 2; i<x; i++){
		if (x%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	scanf("%d", &a);
	if (prime(a) == 1)
		printf("��������\n");
	else
		printf("������\n");
	system("pause");
	return 0;
}

