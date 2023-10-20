#include <stdio.h>
#include <math.h>

int main ()
{
	char*dit = "luas,keliling";
	char*dik = "Diketahui";
	int alas,tinggi,a,b,c,luas,keliling;
	
	alas = 6;
	tinggi = 10;
	a = 3;
	b = 5;
	c = 4;
	luas = 0.5 * alas * tinggi;
	keliling = a + b + c;
	
	printf("%s", dik);
	printf("\nAlas = %i", alas);
	printf("\nTinggi = %i", tinggi);
	printf("\nSisiA = %i", a);
	printf("\nSisiB = %i", b);
	printf("\nSisiC = %i", c);
	printf("\nDitanya = %s", dit);
	printf("\nRumus,L = 1/2 x a x t");
	printf("\nLuas = %i cm", luas);
	printf("\nRumus,k = sisi a+b+c");
	printf("\nKeliling = %icm", keliling);
	
	return 0;
}