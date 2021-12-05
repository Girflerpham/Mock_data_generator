#include"RandomIntegerGenerator.h"
int RandomIntegerGenerator::next() {
	return rand();
}
int RandomIntegerGenerator::next(int ceiling) {
	return rand() % ceiling + 1;
}
int RandomIntegerGenerator::next(int min, int max) {
	return min + rand() % (max - min + 1);
}