#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void change(int x[], int n, int i, int j){
	int temp;
	if (n > i&&n > j){
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
		printf("x[%d]=%d,x[%d]=%d\n,i,x[i],x[j]");
	}
	else
		printf("数组元数下标i或者j越界");
}
int main(){
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i; int j;
	printf("input i,j(0-9):");
	scanf("%d%d",&i,&j);
	printf("%d,%d\n",i,j);
	change(a, 10, i, j);
	printf("a[%d]=%d,a[%d]=%d\n,i,a[i],j,a[j]");
	system("pause");
	return 0;
}