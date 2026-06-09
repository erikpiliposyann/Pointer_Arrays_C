#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr,int n){
	if(n == 0){
		return;	
	}
	n--;
	printf("%d ", *arr);
	print_arr(arr+1,n);
}

int main(){
	int n;
	printf("Input number ");
	scanf("%i", &n);

	int *arr = (int*) malloc(n * sizeof(int));

	printf("Input arr elements.\n");
	for(int i = 0; i < n; ++i){
		scanf("%i", &arr[i]);
	}
	print_arr(arr,n);
	return 0;
}
