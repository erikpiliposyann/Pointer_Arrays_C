#include <stdio.h>	

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
 	}
	int j = 0;
	for(int i = 0; i < n; ++i){
		j = arr[i] / n;
		arr[i] = j;
	}
	for(int i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
	return 0;
}
