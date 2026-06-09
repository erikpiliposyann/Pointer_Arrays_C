#include <stdio.h>

int main(){
	int n = 5;
	int arr1[n];
	int arr2[n];

	printf("Input first  %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr1[i]);
	}	
	printf("Input second  %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr2[i]);
    }
	int isTrue = 1;
	for(int i = 0; i < n; ++i){
		if(arr1[i] != arr2[i]){
			isTrue = 0;
			break;
		}
	}
	if(isTrue){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}
