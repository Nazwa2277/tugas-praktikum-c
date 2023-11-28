#include <stdio.h>

int main() {
	int nilai_mahasiswa[10];
	int i, jumlah_lulus = 0;
	
	printf("Masukkan 10 nilai mahasiswa: ");
	
	for(i =0; i < 10; i++) {
		scanf("d%", &nilai_mahasiswa[i]);
	}
	
	printf("\nDaftar nilai mahasiswa yang lulus: ");
	
	for(i = 0; i < 10; i++) {
		if(nilai_mahasiswa[i] >= 60) {
			printf("\n%d. %d", i+1, nilai_mahasiswa[i]);
			jumlah_lulus++;
		}
	}
	
	printf("\n\nJumlah mahasiswa yang lulus: %d", jumlah_lulus);
	
	return 0;
}