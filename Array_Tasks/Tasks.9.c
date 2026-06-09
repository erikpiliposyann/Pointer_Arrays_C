#include <stdio.h>	

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
 	}
	int count = 0;
	for(int i = 0; i < n; ++i){
		if(arr[i] % 2 != 1){
			count++;
		}
	}
	printf("Count of numbers is: %d\n", count);
	return 0;
}
