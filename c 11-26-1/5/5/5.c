#define  _CRT_SECURE_NO_WARNINGS//����׳�
#include<stdio.h>
#include<stdlib.h>
int Factorial(int a){
	int i ;	int y = 1;
	for (y = 1; a> 0;a--)
		y= y*a;
	return y;
}
int main(){
	int b;
	int result;
	printf("������һ�����֣�");
		scanf("%d", &b);
	int Factorial(int b);
	result = Factorial( b);
	printf("%d\n", result);
	system("pause");
return 0;
}
