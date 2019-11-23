#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5], max, min, i, j, k;
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	max = min = a[0];
	j = k = 0;
	for (i = 0; i < 5; i++)
	if (a[i] < min){
		min = a[i];
		j = i;
	}
	else if (a[i]>max){
		max = a[i];
		k = i;
	}
	a[j] = max;
	a[k] = min;
	for (i = 0; i < 5; i++)
		printf("%5d", a[i]);
	printf("\n");
system("pause");
return 0;
}