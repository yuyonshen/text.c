#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>//递归法打印一个整数的每一位
void Integer(int n){
	if (n > 9){
		Integer(n / 10);
	}
		printf("%d ", n % 10);	
}
int main(){
	int num;
	printf("input num:");
	scanf("%d", &num);
	Integer(num);
	system("pause");
	return 0;
}