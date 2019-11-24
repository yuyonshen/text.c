#include<stdio.h>
#include<stdlib.h>
int main(){
	char c[10] = { 'T', ' ', 'a', 'm', ' ', 'h', 'a', 'p', 'p', 'y' };
	int i;
	for (i = 0; i < 10; i++){
		printf("%c", c[i]);
	}
system("pause");
return 0;
}