#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main(){
int a, b, c;
printf("请输入三个数子：");
scanf("%d%d%d", &a,&b,&c);
printf("a=%d,b=%d,c=%d\n", a, b, c);
int n;  int m;  int t;
n = a;   m = b; t = c;
a = b;   b = c;	c = a;
b = n;   c = m; a = t;
printf("a=%d,b=%d,c=%d", a, b, c);
system("pause");
return 0;
}