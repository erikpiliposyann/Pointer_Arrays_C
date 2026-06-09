#include <stdio.h>
#define SIZE 100

int factorial(int n){
	static int arr[SIZE] = {1,1};
	if(n == 0 || n == 1){
		return 1;
	}
	if(arr[n] != 0){
		return arr[n];
	}
	arr[n] = n * factorial(n-1);
	return arr[n];
}

int main(){
	int n;
    printf("Input number: ");
    scanf("%d", &n);
	printf("%i", factorial(n));
	return 0;
}
