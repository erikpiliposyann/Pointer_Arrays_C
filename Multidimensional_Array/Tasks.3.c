#include <stdio.h>

int main(){
	int n;
	printf("Input sizs: ");
    scanf("%d", &n);

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
    for (int col = 0; col < n; col++) {
		for (int row = 0; row < n; row++){
			if(col * n + row < n*n/2){
				int temp = a[col][row];
				a[col][row] = a[n-1-col][n-1-row];
				a[n-1-col][n-1-row] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
	return 0;
}
