#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	double a, b, c;
	printf("����������λС��������");
	scanf("%lf%lf%lf", &a, &b, &c);
	double d;
	d = (a + b + c) / 3;
	printf("d=%lf\n", d);
system("pause");
return 0;
}