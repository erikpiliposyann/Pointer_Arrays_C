#include <stdio.h>

int main(){
	int n = 3;
	int m = 4;
	int arr[n];
    int a[n][m];
	for (int col = 0; col < n; col++) {
        for (int row = 0; row < m; row++){
			scanf("%d", &a[col][row]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
         }
         printf("\n");
    }
	for (int col = 0; col < n; col++) {
		int max = a[col][0];
		for (int row = 0; row < m; row++){
			if(a[col][row] > max){
				max = a[col][row];
			} 
		}
		arr[col] = max;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}	
