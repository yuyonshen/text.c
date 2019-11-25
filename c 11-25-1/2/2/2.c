#include<stdlib.h>
#include<stdio.h>
/*void main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 0, 2, 1, 3, 0 };
	int i, j;
	int s = 0;
	for (i = 0; i < 5; i++)
		s = s + a[b[i]];
	printf("%d", s);
	system("pause");
	return 0;
}*/
/*void main(){
	int b[3][3] = { 0, 1, 2, 0, 1, 2, 0, 1, 2 };
	int i, j, t = 1;
	for (i = 0; i < 3;i++)
	for (j = i; j <= i; j++)
		t += b[i][b[j][i]];
	printf("%d\n", t);
	system("pause");
	return 0;

}*/
#include<string.h>
void main(){
	char a[10] = "abcd";
	printf("%d,%d\n", strlen(a), sizeof(a));
	system("pause");
	return 0;

}