#include<stdio.h>
#include<stdlib.h>
void main(){
	int n=0;
	printf("input a string:\n");
	for (; getchar()!= '\n'; n++);
	printf("你共输入了%d个字符\n", n);

}