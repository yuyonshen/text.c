#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key;
	int mid = 0;
	printf("请输入一个小于十的数:");
	scanf("%d", &key);
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] > key){
			right = mid - 1;
		}
		else if (arr[mid] < key){
			left = mid + 1;
		}
		else{
			printf("%d\n", mid);
			break;
		}
	}
system("pause");
return 0;
}