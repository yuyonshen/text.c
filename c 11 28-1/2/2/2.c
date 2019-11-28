#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//求n的k次方，普通循环方法
#include<stdlib.h>
int main(){
	int n;
	int k;
	printf("input n and k:");
	scanf("%d%d", &n,&k);
	if (k == 0){
		printf("1");
	}
	else
	{
		int i = 1;
		int z = 1;
		for (i = 1; i <= k; i++)
			z = z*n;
		printf("z=%d", z);
	}
	
system("pause");
return 0;
}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//递归法求
int Power(int n, int k){
	if (k == 0)
		return 1;
	if (k == 1)
		return n;
	else
		return (n*Power(n,k -1));
}
int main(){
	int n;
	int k;
	printf("input n and k:");
	scanf("%d%d", &n, &k);
	Power(n, k);
	printf("%d",n*Power(n,k - 1));
	system("pause");
	return 0;
}