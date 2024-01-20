#include <stdio.h>

int main() {
	char A[11] = {'A', 'J', 'O', ' G', 'J', 'A', 'K', 'A', 'R', 'T', '\0'};
	int kemunculan[26] = {0}; // Inisiali array untuk menghitung huruf
	int maxKemunculan = 0;
	char hurufTerbanyak;
	
	// Menghitung kemunculan setia huruf dalam array A 
	for (int i = 0; i < 10; i++) {
		int index = A[i] - 'A'; // Menghitung indeks huruf dalam array (A=0, B=1, dst)
		kemunculan[index]++;
		if (kemunculan[index] > maxKemunculan) {
			maxKemunculan = kemunculan[index];
			hurufTerbanyak = A[i];
		}	
	}
	
	// Mencetak jumlah huruf yang paling banyak dan hurufnya
	printf("Huruf yang paling banyak: %c\n", hurufTerbanyak);
	printf("Jumlah kemunculan: %d\n", maxKemunculan);
	
	return 0;
}