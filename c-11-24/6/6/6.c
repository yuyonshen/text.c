#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[] = "good morning";
	char str2[] = "good afternoon";
	if (strcmp(str1, str2) == 0){
		printf("str1=str2\n");
	}
	else if (strcmp(str1, str2) < 0){
		printf("str1>str2\n");
	}
	else
		printf("str1<str2\n");
system("pause");
return 0;
}