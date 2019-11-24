#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main(){
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º");
	char str[11];
	scanf("%s",str);
	for (int i = 0; i < 11;i++)
		printf("%s", str[i]);
/*void main(){
	char c[10] = { "china" };
	printf("%s", c);
*/
system("pause");
return 0;
}