#define  _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
/*void main(){
	int i, *p, a[10];
	p = a;
	for (i = 0; i < 10; i++)
		scanf("%d", p++);
	printf("\n");
	p = a;
	for (i = 0; i < 10; i++)
		printf("a[%d]=%d\n", i, *p++);
	system("pauuse");
	return 0;
}*/
void main(){
	int i, *p, a[5];
	p = a;
	for (i = 0; i < 5; i++)
		a[i] = i + 10;
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("a[%d]=%d\t", i, a[i]);
		printf("\t*(p+%d)=%d\t", i, *(p + i));
		printf("tp[%d]=%d\t", i, p[i]);
		printf("\t*(a+%d)=%d\n", i, *(a + i));
	}
	system("pause");
	return 0;
}

