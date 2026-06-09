#include <stdio.h>

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
 	}
	int sum = 0;
	for(int i = 0; i < n; ++i){
		sum += arr[i];
	}
	double average =(double)sum / n;
	printf("Average is: %.2f\n", average);
	return 0;
}
