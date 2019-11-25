#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10] = { 6, 7, 2, 9, 1, 10, 5, 8, 4, 3 } ,*p = a, i;
	for (i = 0; i < 10; i++){
		if (i = 5)
			*a= *p;
		printf("%d\n", *a);
	}
	/*char s1[] = "book";
	char s2[] = "float";
	int i;
	for (i = 0; i < 4;i++)
	if (s1[i] == s2[i])
		printf("%S", i,s1[i]);
	system("pause");
	return 0;*/
/*	static char ss[4][3] = { 'A','a', 'f', 'c', 'B', 'd', 'e', 'b', 'C', 'g', 'f', 'D' };
	int x, y, z;
	for (x = 0; x < 4;x++)
	for (y = 0; y < 3; y++){
		z = x + y;
		if (z == 3)
			printf("%c\n", ss[x][y]);
	}*/
	system("pause");
	return 0;




}