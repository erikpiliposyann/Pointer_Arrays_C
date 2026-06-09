#include <stdio.h>

int my_pow(int num, int pow){
	if(pow == 0){
		return 1;
	}
	pow--;
	return num * my_pow(num,pow);
}

int main(){
	int result = my_pow(5,3);
	printf("Result is %d", result);
	return 0;
}
