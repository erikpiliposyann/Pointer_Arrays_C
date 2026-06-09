#include <stdio.h>

void print_rev_digits(int n){
	if(n == 0){
		return;	
	}
	int digit = n % 10;
	n = n / 10;
	printf("%d ", digit);
	print_rev_digits(n);
}

int main(){
	int n;
	scanf("%i", &n);

	print_rev_digits(n);
	return 0;
}
