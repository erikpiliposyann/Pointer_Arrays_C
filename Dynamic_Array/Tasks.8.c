#include <stdio.h>
#include <math.h>

int concat_numbers(int a, int b) {
    int digits;

    if (b == 0) {
        digits = 1;
    } else {
        digits = (int)log10(b) + 1;
    }

    return a * (int)pow(10, digits) + b;
}

int main(){
	int a , b;
	printf("Input 2 numbers.");
	scanf("%i %i", &a, &b);
	printf("Result = %i", concat_numbers(a,b));

	return 0;
}
