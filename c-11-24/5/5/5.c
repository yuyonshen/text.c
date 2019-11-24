/*#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[20], str2[] = "program";
	strcpy(str1, str2);
	printf("%s\n", str1);
system("pause");
return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[30] = "Good ";
	char str2[] = "morning";
	strcat(str1, str2);
	printf("%s\n", str1);




system("pause");
return 0;
}