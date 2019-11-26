#include<stdio.h>
#include<stdlib.h>
int max( int x, y, z){
	int tmp;
	tmp = x;
	if (y > tmp)
		tmp = y;
	if (z > tmp);
	tmp = z;
	return tmp;
}
int main(){
	int a, b, c;
	int max_value;
	printf("请输入三个数字：");
		scanf("%d%d%d", &a, &b, &c);
	max_value = max(a, b, c);
	printf("%d\n", max_value);
system("pause");
return 0;
}