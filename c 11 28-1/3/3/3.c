#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//循环求n的阶乘
int Fact(int n){
	int i;
	int num=1;
	for (i = 1; i <= n; i++)
		num = num*i;
	return num;	
}
int main(){
	int n;
	printf("input n:" );
	scanf("%d", &n);
	Fact(n);
	printf("%d",Fact(n));
system("pause");
return 0;
}
int Fact(int n){//递归法求n的阶乘
	if (n == 1)
		return 1;
	else
		return Fact(n - 1)*n;
}
int main(){
	int n;
	printf("input n:");
	scanf("%d", &n);
	Fact(n);
	printf("%d", Fact(n));
	system("pause");
	return 0;
}