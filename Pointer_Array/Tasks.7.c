#include <stdio.h>

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
	for(int i = 0; i < n - 1; ++i){
		if(arr[i] < arr[i + 1]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}
