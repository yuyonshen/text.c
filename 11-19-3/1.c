
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int add(int x, int y){
	return x + y;
}
int sub(int x, int y){
	return x - y;
}
int nul(int x, int y){
	return x*y;
}
int drv(int x, int y){
	return x / y;
}
int main(){
	int x, y;
	int input = 1;
	int ret = 0;
	while (input){
		printf("*********************\n");
		printf("1:add     2:sub     \ n");
		printf("3:nul     4:drv      \n");
		printf("*********************\n");
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input){
		case 1:{
			printf("���������֣�");
			scanf_s("%d%d", &x, &y);
			ret = add(x, y);
		}break;
		case 2:{
			printf("���������֣�");
			scanf_s("%d%d", &x, &y);
			ret = sub(x, y);
		}break;
		case 3:{
			printf("���������֣�");
			scanf_s("%d%d", &x, &y);
			ret = nul(x, y);
		}break;
		case 4:{
			printf("���������֣�");
			scanf_s("%d%d", &x, &y);
			ret = drv(x,y);
		}break;
		default:
			printf("�����������������!\n");
		}
		printf("%d\n", ret);
	}
	system("pause");
	return 0;

}