#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Fact(int a){
	int y;
	for (y = 1; a > 0; a--)
		y = y*a;
	return y;
}
int require(int n, int m){
	int z;
	z=Fact(n)/(Fact(m)*Fact(n - m));
	return z;
}
int main(){
	int x=10, y=6;
	int result; 
	result =  require(x, y);
	printf("\nresult=%d", result);
	system("pause");
}