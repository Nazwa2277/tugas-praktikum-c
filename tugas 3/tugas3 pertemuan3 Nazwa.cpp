#include <stdio.h>

int main()
{
	int sisialas, sisitinggi, sisimiringa, sisimiring;
	
	sisialas = 12;
	sisitinggi = 6;
	sisimiringa = (sisialas * sisialas) + (sisitinggi * sisitinggi);
	sisimiring = sisimiringa / 2;
	
	printf("SisiAlas = %icm", sisialas);
	printf("\nSisiTinggi = %icm", sisitinggi);
	printf("\nSisiMiring2 = SA x SA + ST x ST");
	printf("\nSisiMiring2 = %icm", sisimiringa);
	printf("\nSisiMiring = %icm", sisimiring);
	return 0;
}