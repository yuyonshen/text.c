#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i ++){
		if (i % 10 == 9){
			count++;
		}
		if (i / 10== 9){
			count++;
		}
	}
	printf("%d\n", count);



system("pause");
return 0;
}