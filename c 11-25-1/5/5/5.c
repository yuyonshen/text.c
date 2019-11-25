#include<stdio.h>
#include<stdlib.h>
void main()/*{
int i, j, a[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
for (i = 1; i < 3;i++)
for (j = i; j < 3; j++)
printf("%d", a[i][j]);
printf("\n");
system("pause");
return 0;
}*/
/*{
int a[] = { 1, 2, 3, 4, 5, 6 };
int *k[3], i = 0;
while (i < 3){
k[i] = &a[2 * i];
printf("%d", *k[i]);
i++;
}
system("pause");
return 0;
}*/
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		int b[3] = { 0 }, i;
	for (i = 0; i < 3; i++)
		b[i] = a[i][2] + a[2][i];
	for (i = 0; i < 3; i++)
		printf("%d", b[i]);
	printf("\n");
	system("pause");
	return 0;
}