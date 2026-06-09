#include <stdio.h>	

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
	int max_element = arr[0]; 
	for(int i = 1; i < n; ++i){
        if(max_element < arr[i]){
			max_element = arr[i];
		}
    }
	printf("Max element is %d\n", max_element);
	return 0;
}
