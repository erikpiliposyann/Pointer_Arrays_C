#include <stdio.h>	

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
	int min_element = arr[0];
	int index = 0;
	for(int i = 1; i < n; ++i){
        if(min_element > arr[i]){
			min_element = arr[i];
			index = i;
		}
    }
	printf("Min element index  is %d\n", index);
	return 0;
}
