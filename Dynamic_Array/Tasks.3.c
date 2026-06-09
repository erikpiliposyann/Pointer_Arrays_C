#include <stdio.h>
#include <stdlib.h>
		
void change_elem(int *arr, int n){
	for(int i = 0; i < n; ++i){
		arr[i] = i * arr[i];
	}
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
	change_elem(arr,n);
	printf("Arr changes elements.\n");
   	for(int i = 0; i < n; ++i){
     	printf("%i, ", arr[i]);
   	}
	printf("\n");
 	free(arr);
	return 0;
}
