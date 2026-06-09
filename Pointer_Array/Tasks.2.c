#include <stdio.h>

int main(){
	char c1;
	char c2;
	short sh;
	scanf(" %c %c %hd",&c1, &c2, &sh);
	int n = 0;
	char *ch =(char *) &n;
	*ch = c1;
	*(ch + 1) = c2;
	short *sho = (short *) &n;
	*(sho + 1) = sh;

	printf("%c,%c,%hd", *ch, *(ch + 1), *(sho + 1));
	return 0;
}
