#include<stdio.h>//Сд��ĸ���д
#include<stdlib.h>
void main(){
	char*p,c;
	p = &c;
	while (*p){
		printf("������һ��Сд��ĸ:");
		*p = getchar();
		*p = *p - 32;
		printf("%c\n", *p);
	}
system("pause");
return 0;
}