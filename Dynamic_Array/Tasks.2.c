#include <stdio.h>
#include <stdlib.h>

int max_elem(int *arr,int n){
	int max = arr[0];
	for(int i = 0; i < n; ++i){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max; 
}

int main(){
	int n;
	printf("Input array size.");
	scanf("%i", &n);
	int *arr = malloc(n * sizeof(int));

	printf("Input array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
	printf("Maximum element is %d", max_elem(arr,n));

	return 0;
}
