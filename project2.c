#include <stdio.h>

int main(void){
	int arr1[101][101] = { 0 }; 
	int arr2[101][101] = { 0 };

	int height;
	scanf_s("%d", &height);
	
	int i,j; // i가 행, j가 열
	for (i = 1; i <= height; i++) {
		for (j = 1; j <= i; j++) {
			arr1[i][j] = 1;
		}
	}

	for (i = 1; i <= height; i++) {
		for (j = height; j >= height-(i-1); j--) {
			arr2[i][j] = 1;
		}
	}

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= height; j++) {
			printf("%d ", arr2[i][j]);
		}
		for (j = 1; j <= height; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}