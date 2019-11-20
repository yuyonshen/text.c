#include<stdio.h>//小写字母变大写
#include<stdlib.h>
void main(){
	char*p,c;
	p = &c;
	while (*p){
		printf("请输入一个小写字母:");
		*p = getchar();
		*p = *p - 32;
		printf("%c\n", *p);
	}
system("pause");
return 0;
}