#include <stdio.h>

int main() {
	char A[8] = {'A', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};
	int adaSama = 0;
	
	// Memeriksa apakah ada huruf yang sama
	for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 8; j++) {
			if (A[i] == A[j]) {
				adaSama = 1;
				printf("ADA\nHuruf yang sama: %c\n", A[i]);
				break;
			}
		}
		if (adaSama) {
			break;
		}
	}
	
	if (!adaSama) {
		printf("TIDAK ADA\n");
	}
	
	return 0;
}