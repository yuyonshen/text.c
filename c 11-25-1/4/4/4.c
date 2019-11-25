#include<stdio.h>
#include<stdlib.h>
/*void main(){
	char s[] = "after";
	char c;
	int i, j = 0;
	for (i = 0; i <= 4;i++)
	if (s[j] > s[i])
		j = i;
	c = s[j];
	s[j] = s[4];
	s[4] = c;
	printf("%s\n", s);
	system("pause");
	return 0;
}*/
void main(){
	int a[] = { 1,2, 3, 4, 5, 6 };
	int *p;
	p = a;
	*(p + 3) += 2;
	printf("%d,%d\n", *p, *(p + 3));
	system("pause");
	return 0;
}