#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//传递方式传递数据
#include<stdlib.h>
void change(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("x=%d,y=%d\n", x, y);
}
void main(){
	int a, b;
	printf("input a,b");
	scanf("%d%d", &a, &b);
	change(a, b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}