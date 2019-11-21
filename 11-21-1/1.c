#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0;
	int num = 888;
	int j;
	for (i = 0; i < 3; i++){
		printf("ÇëÊäÈëÃÜÂë£º\n");
		scanf("%d", &j);
		if (j == num){
			printf("ÃÜÂëÊäÈëÕýÈ·");
			break;
		}
		else
			printf("ÃÜÂëÊäÈë´íÎó£º");
		if (i == 3){
			printf("µÇÂ½Ê§°Ü");
		}	
	}
system("pause");
return 0;
}