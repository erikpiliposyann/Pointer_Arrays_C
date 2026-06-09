#include <stdio.h>

int main(){
	int n  = 3;

    int a[100][100];
	for (int col = 0; col < n; col++) {
        for (int row = 0; row < n; row++){
			scanf("%d", &a[col][row]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
         }
         printf("\n");
    }
	for (int i = 0; i < n; i++) {
		int temp = a[i][i];
		a[i][i] = a[i][n-i-1];
		a[i][n-i-1] = temp;
	}
	 for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
              printf("%d ", a[i][j]);
           }
           printf("\n");
      }

	return 0;
}
