#include <stdio.h>

int main() {
    int n;
	printf("Input sizs: ");
    scanf("%d", &n);

    int a[100][100];  
    int current = 1;

    for (int col = 0; col < n; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < n; row++) {
                a[row][col] = current++;
            }
        } else {
            for (int row = n - 1; row >= 0; row--) {
                a[row][col] = current++;
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }

    return 0;
}
