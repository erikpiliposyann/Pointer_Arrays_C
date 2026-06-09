#include <stdio.h>

int main(){
	int n = 3;

	int arr_int[n];
	float arr_float[n];
	char arr_char[n];
	double arr_double[n];

	printf("Input %i integer numbers.\n", n);
	for(int i = 0; i < n; ++i){
		scanf("%i", &arr_int[i]);
	}
	printf("Input %i floating numbers.\n", n);
 	    for(int i = 0; i < n; ++i){
        scanf("%f", &arr_float[i]);
    }
	printf("Input %i double numbers.\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%lf", &arr_double[i]);
    }
	printf("Input %i character numbers.\n", n);
    for(int i = 0; i < n; ++i){
        scanf(" %c", &arr_char[i]);
    }
	

	printf("\nInt array:\n");
    for(int i = 0; i < n; ++i){
        printf("%d ", arr_int[i]);
    }

    printf("\nFloat array:\n");
    for(int i = 0; i < n; ++i){
        printf("%.2f ", arr_float[i]);
    }

    printf("\nDouble array:\n");
    for(int i = 0; i < n; ++i){
        printf("%.2lf ", arr_double[i]);
    }

    printf("\nChar array:\n");
    for(int i = 0; i < n; ++i){
        printf("%c ", arr_char[i]);
    }
	return 0;
}
