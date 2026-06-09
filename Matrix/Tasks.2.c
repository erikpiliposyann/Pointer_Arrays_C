#include <stdio.h>

int sum_of_auxiliary_diagonal(int n, int matrix[][n]){
	int sum = 0;
	for (int i = 0; i < n; i++) {
 			sum += matrix[i][n-i-1];
	}
	return sum;
}

int main(){
	int n = 3;

    int matrix[n][n];
	for (int col = 0; col < n; col++) {
        for (int row = 0; row < n; row++){
			scanf("%d", &matrix[col][row]);
		}				
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
         }
         printf("\n");
    }
	printf("Auxiliary Diagonal sum is %i", sum_of_auxiliary_diagonal(n,matrix));

	return 0;
}
