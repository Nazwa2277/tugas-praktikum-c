#include <stdio.h>

int main() {
	int A[5] = {12, 8, 17, 5, 15};
	int B[7] = {5, 11, 7, 25, 9, 12, 14};
	int C[12];
	int indexC = 0;
	
	//  Salin nilai lebih besar dari 10 dari array A ke array C
	for (int i = 0; i < 5; ++i) {
		if (A[i] > 10) {
			C[indexC] = A[i];
			++indexC;
		}
	}
	
	// Salin nilai lebih besar dari 10 dari array B ke array C
	for (int i = 0; i < 7; ++i) {
		if (B[i] > 10) {
			C[indexC] = B[i];
			++indexC;
		}
	} 
	
	// Tampilkan isi array C
	printf("C\n");
	for (int i = 0; i < 12; ++i) {
		printf("%d\n", C[i]);
	}
	
	return 0;
}