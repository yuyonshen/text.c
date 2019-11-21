#include<stdio.h>
#include<stdlib.h>
int main(){
	int num=0;
	int i = 0;
/*	for (i = 0; i <= 100; i++){
		num += i;
	}*/
	while (i <= 100){
		num += i;
		i++;
	}
printf("%d\n", num);
	system("pause");
	return 0;
}