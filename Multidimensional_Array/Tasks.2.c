#include <stdio.h>
#define SIZE 100

void transpose(int arr[][SIZE], int n){
	for(int i = 0; i < n; ++i){
		for(int j = i + 1; j < n; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}


int main(){
	int n = 3;
    int a[100][100] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
        	printf("%d ", a[i][j]);
        }
    	printf("\n");
    }
    transpose(a, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

	return 0;
}
