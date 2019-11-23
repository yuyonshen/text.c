#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5];
	int i, j, t;
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	printf("\n");
	for (j = 0; j < 5 - 1;j++)
	for (i = j + 1; i < 5;i++)
	if (a[j]>a[i]){
		t = a[j];
		a[j] = a[i];
		a[i] = t;
	}
	printf("The sorted numbers:\n");
	for (i = 0; i < 5; i++)
		printf("%d\t", a[i]);
system("pause");
return 0;
}