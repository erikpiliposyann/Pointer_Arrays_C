#include <stdio.h>

void min_index(int n, int m, int matrix[n][m]){
	int min = matrix[0][0];
	int row = 0;
	int col = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(matrix[i][j] < min){
				min = matrix[i][j];
				row = i;
				col = j;
			}
		}
	}
	printf("Row is %d,Col is %d\n", row,col);
}
int main(){
	int n = 3;
	int m = 4;
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
	min_index(n,m,a);
	return 0;
}
