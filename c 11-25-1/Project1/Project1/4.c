#include<stdio.h>
#include<stdlib.h>
void main(){
	int i, j, sum = 0;
	int a[3][3] = { 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	for (i = 0; i < 3; i++)
	for (j = 0; j < 3; j++)
		sum = sum + a[i][j];
	printf("%d", sum);
	system("pause");
	return 0;

}
