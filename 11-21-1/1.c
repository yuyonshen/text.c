#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0;
	int num = 888;
	int j;
	for (i = 0; i < 3; i++){
		printf("���������룺\n");
		scanf("%d", &j);
		if (j == num){
			printf("����������ȷ");
			break;
		}
		else
			printf("�����������");
		if (i == 3){
			printf("��½ʧ��");
		}	
	}
system("pause");
return 0;
}