#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//编写代码模拟三次输入密码场景
#include<stdlib.h>
int main(){
	int i = 1;
	int num = 888;
	int j;
	for (i = 1; i <= 3; i++){
		printf("请输入密码：");
		scanf("%d", &j);
		
		if (j == num){
			printf("登录成功：");
			break;
		}
		else {
			printf("密码错误:");
		}
	}
		if (i == 4){
			printf("登陆失败:");
		}
	
		system("pause");
        return 0;
}