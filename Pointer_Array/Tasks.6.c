#include <stdio.h>

int main(){
	int n = 10;
	int arr[n];
	int target;

	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
    	scanf("%d", &arr[i]);
	}
	printf("Input number:");
	scanf("%i", &target);
	for(int i = 0; i < n; ++i){
		if(arr[i] == target){
			printf("Number index is %d", i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
