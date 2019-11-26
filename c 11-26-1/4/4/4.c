#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
float suv(float x, float y){
	printf("%f%f", x, y);
	return(x - y);
}
int main(){
	float suv(float, float);
	float x1, x2, x3;
	printf("input x1,x2:");
	scanf("%f%f", &x1, &x2);
	x3 = suv(x1, x2);
	printf("\nsuv=%6.2f", x3);
system("pause");
return 0;
}