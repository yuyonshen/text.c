#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//猜数字游戏
#include<stdlib.h>
#include<time.h>
void menu(){
	printf("##############\n");
	printf("####1.play####\n");
	printf("####2.exit####\n");
	printf("##############\n");
}
void game(){
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1){
		printf("请输入你猜数字：");
		scanf("%d", &input);
		if (input > random_num){
			printf("你猜大了");
		}
		else if (input < random_num){
			printf("你猜小了：");
		}

		else{
			printf("恭喜你猜对了:");
			break;
		}
	}
}
int main(){
	int input = 0;
	srand((unsigned)time(NULL));
	do{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择:");
			break;
		}
	} 
	while (input);
	return 0;
}

