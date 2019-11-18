#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i = 0;
	for (int i = 0; i < 3; i++){
		printf("ÇëÊäÈëÃÜÂë£º");
		char passwd[1024] = { 0 };
		scanf("%s", passwd);
		if (strcmp(passwd, "888888") == 0){
			printf("µÇÂ¼³É¹¦£»\n");
			break;
		}
		else{
			printf("µÇÂ½Ê§°Ü£»\n");
		}
		if (i == 3){
			printf("µÇÂ½Ê§°Ü£»\n");
		}
	
	
	}
system("pause");
return 0;
}