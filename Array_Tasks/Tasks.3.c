#include <stdio.h>

int main(){
	int n = 5;
	int sum = 0;
	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
	for(int i = 0; i < n; ++i){
		sum += arr[i];	
	}
	printf("Sum of numbers: %d", sum);
	return 0;
}
