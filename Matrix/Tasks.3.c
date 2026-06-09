#include <stdio.h>

int main(){
	int n = 3;

    int a[n][n];
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

	int sum = 0;
	for (int i = 0; i < n; i++) {
 		for (int j = i; j < n; j++){
			sum += a[i][j];
		}	
	}
	printf("%d\n", sum);
	return 0;
}
