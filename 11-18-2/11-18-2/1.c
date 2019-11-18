#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	int j =0 ;
	int k = 0;
	int n = 0;
	for (n = 100; n < 1000; n++){
		i = n / 100;
		j = (n - i* 100) / 10;
		k = n - i * 100 - j * 10;
		if (n == i*i*i + j*j*j + k*k*k){
			printf("Ë®»¨ÏÉÊý£º%d\n", n);
		}
	}
system("pause");
return 0;
}