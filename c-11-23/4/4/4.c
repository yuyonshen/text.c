#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5], i, j, tmp;
	printf("请输入五个数字\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
		for (i = 1; i < 5; i++)
			for (j = 0; j <5-i; j++)
			if (a[j] >a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
					printf("The result is:\n");
for (i = 0; i < 5; i++)
	printf("%d\t", a[i]);
system("pause");
return 0;
}