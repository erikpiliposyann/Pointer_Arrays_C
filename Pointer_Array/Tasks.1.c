#include <stdio.h>

int main(){
	int x = 1;
	char * ch =(char*) &x;
	if(*ch){
		printf("Little edian.");
	}
	else{
		printf("Big edian.");
	}
	return 0;
}
