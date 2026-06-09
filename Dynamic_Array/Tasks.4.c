#include <stdio.h>
#include <stdlib.h>

int even(int a){
	if(a % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}

void remove_even_elem(int **arr, int *n){
	int i = 0; 
	while(i < *n){
		if(even((*arr)[i])){
			for(int j = i; j < *n - 1; j++){
				(*arr)[j] = (*arr)[j + 1];
			}	
			(*n)--;
			int *temp = (int*) realloc(*arr, (*n) * sizeof(int));
		
			if(temp == NULL && *n != 0){
             	printf("Realloc failed\n");
                return;
            }
			*arr = temp;
		}
		else{
			i++;
		}
	 }
}

int main(){
	int n;
	printf("Input number ");
	scanf("%i", &n);

	int *arr = (int*) malloc(n * sizeof(int));

	printf("Input arr elements.\n");
	for(int i = 0; i < n; ++i){
		scanf("%i", &arr[i]);
	}
	remove_even_elem(&arr,&n);
	printf("Array elements.\n");
   	for(int i = 0; i < n; ++i){
     	printf("%i, ", arr[i]);
   	}
	free(arr);
	return 0;
}
