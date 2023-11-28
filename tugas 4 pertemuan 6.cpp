#include <stdio.h>

double calculate_distance(double speed, double time) {
	double distance = speed * time ;
	return distance;
}

int main() {
	double speed = 2; // in meters per second
	double time = 100; // in second
	
	double distance = calculate_distance(speed, time);
	printf("Sepeda motoris telah tempuh %.2f meter.\n", distance);
	
	return 0;
}