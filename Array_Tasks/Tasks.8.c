#include <stdio.h>	

int main(){
	int n = 5;
	int num;
	int isTrue = 0;
	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
 	}
	printf("Input your number.");
	scanf("%i", &num);
	for(int i = 0; i < n; ++i){
		if(num == arr[i]){
			isTrue = 1;
			break;
		}
	}
	if(isTrue){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}
