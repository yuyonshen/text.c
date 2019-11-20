#include<stdio.h>
#include<stdlib.h>
int main(){
	char arr1[] = "welcome to bit!";
	char arr2[] = "###############";
		int left = 0;
		int right = strlen(arr1) - 1;
		printf("%s\n", arr1);
		while (left <= right){
			arr1[left] = arr2[left];
			arr1[right] = arr2[right];
			left++;
			right--;
			printf("%s\n", arr1);
		}
system("pause");
return 0;
}