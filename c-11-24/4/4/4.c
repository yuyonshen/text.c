#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char c, s[80];
	int i = 0;
	puts("ÊäÈë×Ö·û´®");
	while ((c = getchar()) != '\n')
		s[i++] = c;
	s[i] = '\0';
	puts("Êä³ö×Ö·û´®");
	puts(s);
system("pause");
return 0;
}