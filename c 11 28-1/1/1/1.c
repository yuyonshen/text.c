#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//求n的斐波那契数
int Fibonacci(int n){//递归法
	if (n == 1 || n == 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main(){
	int n;
	scanf("%d", &n);
	Fibonacci(n);
	printf("%d", Fibonacci(n));
system("pause");
return 0;
}