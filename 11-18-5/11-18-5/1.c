#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//��д����ģ�������������볡��
#include<stdlib.h>
int main(){
	int i = 1;
	int num = 888;
	int j;
	for (i = 1; i <= 3; i++){
		printf("���������룺");
		scanf("%d", &j);
		
		if (j == num){
			printf("��¼�ɹ���");
			break;
		}
		else {
			printf("�������:");
		}
	}
		if (i == 4){
			printf("��½ʧ��:");
		}
	
		system("pause");
        return 0;
}