#include<stdio.h>
#include<stdlib.h>//把分钟变成小时和分钟
int main(){
	int i = 560;
		int j = 60;
		int m;
		int n;
		m = i / j;
		n = i%j;
		printf("m=%dn=%d", m,n);
system("pause");
return 0;
}