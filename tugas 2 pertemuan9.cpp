#include <stdio.h>

int main() {
	char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
	char C;
	int count = 0;
	int found = 0;
	
	printf("Masukkan karakter = ");
	scanf(" %c", &C);
	
	printf("Array saat ini:\n");
	for (int i = 0; i < 10; ++i) {
		printf("%c ", A[i]);
	}
	printf("\n");
	
	printf("Hasil pencarian:\n");
	for (int i = 0; i < 10; ++i) {
		if (A[i] == C) {
			found = 1;
			count++;
		}
	}
	
	if (found) {
		printf("ADA\nJumlah karakter yang sama: %d\n", count);
    } else {
    	printf("TIDAK ADA\n");
	}
	
	return 0;	
}