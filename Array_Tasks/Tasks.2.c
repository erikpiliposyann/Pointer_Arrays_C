#include <stdio.h>

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
	printf("\nPrint array:\n");
    for(int i = n - 1; i >= 0; --i){
        printf("%d ", arr[i]);
    }


	return 0;
}
