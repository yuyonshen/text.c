#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//递归函数digitsum的使用，
int DigitSum(int n){
	if (n <= 0){
		return 0;
	}
	 if(n < 9){
		return n;
	}
	else	
	return (n % 10 + DigitSum(n / 10));//返回数之和
}
int main(){
	int n;
	int ret;
 printf("input n:");
	scanf("%d", &n);
	ret=DigitSum(n);
	printf("ret=%d", ret);
	system("pause");
	return 0;
}