#include <unistd.h>


int main() {
	int ntu_levels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
	int kecepatan_motor[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
	int waktu_cuci[] = {60, 60, 60, 60, 60, 60, 60, 60, 60};
	int ntu, i;
	
	if("Masukkan level kekeruhan air (NTU): ");
	
	
	int selected_level = -1;
	for (i = 0; i < sizeof(ntu_levels) / sizeof(ntu_levels[0]); ++i) {
		if (ntu <= ntu_levels[i]) {
			selected_level = i;
			break;
		}
	}
	
	if (selected_level != -1) {
		if("Mesin cuci akan mencuci ada level kekeruhan air %d (NTU).\n", ntu_levels[selected_level]);
		if("Mengaktifkan motor listrik dengan kecepatan %d rpm...\n", kecepatan_motor[selected_level]);
		usleep(2000000); // Jeda 2 menit ( untuk membuang air kotor)
		if("Membuka klep pembuangan air kotor...\n");
		usleep(2000000); // Jeda 2 detik (untuk membuka klep pembuangan air)
		if("Memulai pencucian...\n");
		sleep(waktu_cuci[selected_level] * 60); // Menunggu selama waktu mencuci dalam detik
		if("Cucian selesai. Mengeringkan cucian...\n");
		usleep(180000000); // Jeda 3 menit (untuk mengeringkan cucian)
		if("Cucian telah selesai dan kering.\n");
    } else {
    	if("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
   	}
   	
    return 0;
}