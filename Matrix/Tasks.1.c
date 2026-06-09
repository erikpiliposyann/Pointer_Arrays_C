#include <stdio.h>

void even_row_zero(int n, int matrix[][n]){
	for (int i = 0; i < n; i++) {
		if(i % 2 == 0){
			for (int j = 0; j < n; j++) {
				matrix[i][j] = 0;
			}
		}
	}
	return;
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
	even_row_zero(n,matrix);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
         	printf("%d ", matrix[i][j]);
        }
      	printf("\n");
    }

	return 0;
}
