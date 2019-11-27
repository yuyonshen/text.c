#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//传递地址方式传递数据
void change(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("x=%d,y=%d\n", *x, *y);
}
void main(){
	int a, b,*m,*n;
	printf("input a,b :");
	scanf("%d%d", &a,&b);
	printf("a=%d,b=%d\n", a, b);
	m = &a;
	n = &b;
	change(m, n);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
}