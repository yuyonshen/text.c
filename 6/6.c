#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i = 0;
	for (int i = 0; i < 3; i++){
		printf("���������룺");
		char passwd[1024] = { 0 };
		scanf("%s", passwd);
		if (strcmp(passwd, "888888") == 0){
			printf("��¼�ɹ���\n");
			break;
		}
		else{
			printf("��½ʧ�ܣ�\n");
		}
		if (i == 3){
			printf("��½ʧ�ܣ�\n");
		}
	
	
	}
system("pause");
return 0;
}