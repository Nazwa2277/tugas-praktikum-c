#include <stdio.h>

int main()
{
	int imasuk, ikeluar, ilama;
	
	printf("Menentukan lama bekerja\n");
	printf(" Jam Masuk : ");
	scanf("%d",&imasuk);
	
	printf(" \nJam Keluar : ");
	scanf("%d",&ikeluar);
	
	if (ikeluar >= imasuk)
	ilama = ilama - imasuk;
	else 
	ilama = (12-imasuk) + ikeluar;
	
	printf("\n Lama bekerja adalah : %d Jam\n", ilama);
	
	return 0;
	
}