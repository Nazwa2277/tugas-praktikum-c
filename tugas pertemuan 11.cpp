#include <stdio.h>

int main() {
	int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
	int B[12], C[12];
	float rata = 0.0;
	int total = 0, jumlahB = 0, jumlahC = 0;
	
	// Menghitung total nilai 
	for (int i = 0; i < 12; i++) {
		total += A[i];
	}
	
	// Menghitung rata-rata
	rata = (float) total / 12.0;
	
	// Memindahkan nilai ke array B atau C berdasarkan perbandingan dengan rata-rata
	for (int i = 0; i < 12; i++) { 
		if (A[i] > rata) {
			B[jumlahB] = A[i];
			jumlahB++;
		} else if (A[i] < rata) {
			C[jumlahC] = A[i];
			jumlahC++;
		}
	} 
	
	// Meenampilkan isi array A
	printf("\n\nIsi array A:\n");
	for (int i = 0; i < 12; i++) {
		printf("%d ", A[i]);
	}
	
	// Menampilkan isi array B
	printf("\n\nIsi array B:\n");
	for (int i = 0; i < jumlahB; i++) {
		printf("%d ", B[i]);
	}
	
	// Menampilkan  isi array C 
	printf("\n\nIsi array C:\n");
	for (int i = 0; i < jumlahC; i++) {
		printf("%d ", C[i]);
	}
	
	return 0;
}