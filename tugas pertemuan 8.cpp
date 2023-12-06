#include <stdio.h>

int main() {
	int A[11];
	int B[11];
	int C[11];
	int D[11];
	int E[11];
	
	int data;
	int idxA = 0, idxB = 0, idxC = 0, idxD = 0, idxE = 0;
	
	printf("Data dalam dokumen:\n");
	printf("12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999\n");
	printf("(999 sebagai End of Data)\n");
	
	printf("\nMemproses data...\n");
	while (1) {
		scanf("%d", &data);
		if (data == 999) {
			break;
		}
		
		if (data > 9) {
			A[idxA++] = data;
		}
		
		if (data > 9) {
			if (idxB < 11) {
				B[idxB++] = data;
			}
	   }
	   
		if (data > 9) {
			if (idxC == 0 || (idxC > 0 && C[idxC - 1] != data)) {
				C[idxC++] = data;
			}
		}
		
		if (data % 2 != 0 && data != 999) {
			D[idxD++] = data;
		}
		
		if (data % 2 != 0 && data != 999) {
			if (idxE < 11) {
				E[idxE++] = data;
			}
		}
	}
	
	printf("\na. Isi array A:\n");
	for (int i = 0; i < idxA; ++i) {
		printf("%d ", B[i]);
	}
	
	printf("\nb. Isi array B:\n");
	for (int i = 0; i < idxB; ++i) {
		printf("%d ", B[i]);
	}
	
	printf("\nc. Isi array C:\n");
	for (int i = 0; i < idxC; ++i) {
		printf("%d ", C[i]);
	}
	
	printf("\nd. Isi array D (nilai ganjil):\n");
	for (int i = 0; i < idxD; ++i) {
		printf("%d ", D[i]);
	}
	
	printf("\ne. Isi array E (nilai ganjil sesuai tat letak):\n");
	for (int i = 0; i < idxE; ++i) {
		printf("%d ", E[i]);
	}
	
	return 0;
}