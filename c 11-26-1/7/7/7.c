#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
long fac(int n){
	if (n < 0){
		printf("n<0,date error!");
		return 0;
	}
	else if (n == 0 || n == 1)
		return 1;
	else
		return(fac(n - 1)*n);
}
int main(){
	int n;
	long y;
	printf("n=");
	scanf("%d", &n);
	y = fac(n);
	printf("\n,%d!=%ld", n, y);
system("pause");
return 0;
}