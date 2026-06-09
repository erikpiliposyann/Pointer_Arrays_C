#include <stdio.h>

int main(){
	int n = 5;

	int arr[n];
	int isTrue ;
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
	for(int i = 0; i < n; ++i){
		isTrue = 1;
		for(int j = 0; j < n; ++j){
			if(i != j && arr[i] == arr[j]){
				isTrue = 0;
				break;		
			}
		}
		if(isTrue){
			printf("Unique element: %d\n", arr[i]);
            return 0;
		}
	}
	printf("No unique element\n");
	return 0;
}
