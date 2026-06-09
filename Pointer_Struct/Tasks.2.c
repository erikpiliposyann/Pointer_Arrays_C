#include <stdio.h>
#include <stdlib.h>

double** init_mtx(double**  mtx, int row , int col){
	mtx = (double**) malloc(row * sizeof(double*));

	for(int i = 0; i < row; ++i){
		mtx[i] = (double*) malloc(col * sizeof(double));		
	}
	return mtx;
}
void enter_elems(double **mtx, int row, int col) {
	for (int i = 0; i < row ; ++i) {
		for(int j = 0; j < col; ++j) {	
			scanf("%lf", &mtx[i][j]);
		}
	}
	return;
}

void print_mtx(double ** mtx, int row , int col){
	for(int i = 0; i < row; ++i){
    	for(int j = 0; j < col; ++j){
 			printf("%.2lf ", mtx[i][j]);
		}
		printf("\n");	
	}	
	return;
}

int is_sign_changed(double *arr, int size){
	for(int i = 0; i < size; ++i){
		if((((i & 1) == 0) && arr[i] < 0) || (((i & 1) == 1) && arr[i] > 0)){
			return 0;
		}
	}
	return 1;
}

double **remove_rows(double **arr, int col, int *row){
	for(int i = 0; i < *row; ++i){
		if(is_sign_changed(arr[i],col)){
			free(arr[i]);
			for(int j = i; j < *row - 1; ++j){
				arr[j] = arr[j+1];
			}
			i--;
			(*row)--;
			arr = realloc(arr, (*row) * sizeof(double*));
		}
	}
	return arr;
	
}

int main(){
	int n , m;
	printf("Input row and col ");
	scanf("%i %i",&n,&m);

	double** mtx;
	mtx = init_mtx(mtx,n,m);
	enter_elems(mtx,n,m);
	print_mtx(mtx,n,m);
	mtx = remove_rows(mtx,m,&n);
	print_mtx(mtx,n,m);
	return 0;
}
