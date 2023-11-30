#include <iostream>
using namespace std;

int main() {
	int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
	int N;
	
    cout << "Masukkan bilangan integer: ";
	cin >> N;
	
	bool ada = false;
	cout << "Array: ";
	for (int i = 0; i < 11; ++i) {
		cout << A[i] << " ";
	}
	
	cout << "\n";
	
	cout << "Mencari nilai " << N << " di dalam array...\n";
	
	cout << "Hasil pencarian:\n";
	
	for (int i = 0; i < 11; ++i) {
		if (A[i] == N) {
			ada = true;
			cout << "ADA\nLokasi bilangan yang sama: ";
			
			while(A[i] == N) {
				cout << i << " ";
				++i;
			}
			
			cout << "\n";
		}
	}
	
	if (!ada) {
		cout << "TIDAK ADA\n";
	}
	
	return 0;
}