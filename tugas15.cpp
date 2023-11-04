#include <stdio.h>
int main()
{
	int masuk, keluar, lama, biaya;
	printf("Menghitung Biaya Parkir");
	printf("\nJam Masuk: ");
	scanf("%i",&masuk);
	
	printf("\nJam Keluar: ");
	scanf("%i",&keluar);
	if (keluar>=masuk)
	    lama=keluar-masuk;
	else
	    lama=(12-masuk)+keluar;
	if (lama>2)
	    biaya=2000+((lama-2)*500);
	else
	    biaya=2000;
	printf("\n Biaya parkir adalah: Rp &d\n" ,biaya);
return 0;
}