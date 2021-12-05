#ifndef _RANDOMINTEGERGENERATOR_H_
#define _RANDOMINTEGERGENERATOR_H_
#include<iostream>
#include<time.h>
class RandomIntegerGenerator {
public:
	RandomIntegerGenerator() {
		srand(time(NULL));
	}

	int next();
	int next(int ceiling); // [0, ceiling)
	int next(int left, int right); // [left, right] => rand() % (right - left + 1) + left
};
#endif // !_RANDOMINTERGERGENERATOR_H_
