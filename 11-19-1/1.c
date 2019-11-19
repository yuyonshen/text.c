#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int prime(int num){
	for (int i = 2; i < num; i++){
		if (num%i == 0){
			printf("不是素数；");
			break;
		}
		else{
			printf("是素数：");
		}		
	}
	return 0;
}
	int main(){
	int	Num;
	printf("请输入一个数:");
	scanf("%d\n", &Num);
	 prime( Num);
		system("pause");
return 0;
}