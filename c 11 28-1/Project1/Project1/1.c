#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 1;
	int n;
	printf("请输入一个数");
		scanf("%d", &n);
		if (n == 1 || n == 2)
			printf("1");
		else{
			int f1 = 1; int f2 = 1;
			int f(i);
			for (i = 3; i <= n; i++)
				f(i) = f(i - 1) + f(i - 2);
		}
		printf("%d\n", f(n));
system("pause");
return 0;
}