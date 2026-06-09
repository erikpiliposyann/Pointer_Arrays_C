#include <stdio.h>

int main(){
	int n = 10;
	int arr[n - 1];
	printf("Input %d int elements without one:\n", n - 1);
    for(int i = 0; i < n - 1; ++i){
        scanf("%d", &arr[i]);
    }
	int sum = 0;
	for(int i = 0; i < n - 1; ++i){
		sum += arr[i];
	}

	int real_sum = n * (n + 1) / 2;
	printf("Missing number: %d\n", real_sum - sum);
	return 0;
}
