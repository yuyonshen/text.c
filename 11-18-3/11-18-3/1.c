#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int m, sum = 0;
	int a, b ;
	int n = 5;
	printf("«Î ‰»Îaµƒ÷µ£∫\n");
	scanf("%d", &a);
	b = a;
	for (m = 1; m <= n; m++){
		sum += a;
		a = a * 10 + b;
	}
		printf("sum=%d", sum);
	
	system("pause");
	return 0;
}