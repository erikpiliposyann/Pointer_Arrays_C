#include <stdio.h>

int main(){
	int n = 5;

	int arr[n];
	printf("Input %d int elements:\n", n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
	int left = 0;
	int right = n - 1;
	while(left <= right){
		if(arr[left] % 2 == 0){
			left++;
		}
		else if(arr[left] % 2 == 1 && arr[right] % 2 == 0){
			int temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
			right--;
			left++;
		}
		else{
			right--;
		}
	}
	 for(int i = 0; i < n; ++i){
		printf("%d ", arr[i]);
	 }
	 printf("\n");
}
