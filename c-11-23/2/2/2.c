#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10], b[10], i;
	for (i = 0; i < 10; i++){
		a[i] = i + 1;
		printf("%d", a[i]);
	}
	for (i = 0; i < 10; i++){
		b[i] = a[i];
		printf("%d", b[i]);
	}
	system("pause");
	return 0;
}