#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//��������Ϸ
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
		printf("������������֣�");
		scanf("%d", &input);
		if (input > random_num){
			printf("��´���");
		}
		else if (input < random_num){
			printf("���С�ˣ�");
		}

		else{
			printf("��ϲ��¶���:");
			break;
		}
	}
}
int main(){
	int input = 0;
	srand((unsigned)time(NULL));
	do{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��:");
			break;
		}
	} 
	while (input);
	return 0;
}

