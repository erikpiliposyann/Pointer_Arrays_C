#include <stdio.h>

int sum_of_digit(int n){
	int sum = 0;
	while(n != 0){
		int digit = n % 10;
		n = n / 10;
		sum += digit;
	}
	return sum;
}

int main(){
	int n;
	printf("Input number: ");
	scanf("%i", &n);
	printf("Sum of digit %d", sum_of_digit(n));
	return 0;
}
