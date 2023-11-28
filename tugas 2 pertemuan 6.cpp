#include <stdio.h>

int main() {
	
	int deret[10];
	int i, nilai = 100;
	
	for (i = 0; i < 10; i++) {
		deret[i] = nilai;
		nilai -= 5;
	}
	
	for (i = 0; i < 10; i++) {
		printf("%d ", deret[i]);
	}
	
	return 0;
}