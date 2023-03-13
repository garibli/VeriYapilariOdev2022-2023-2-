/**
* @file Radix.hpp
* @description Verilen doku sýnýfýnýn içindeki hücreleri verilerine göre radix sort algoritmasýyla kýyaslayan sýnýf
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef RADIX_HPP
#define RADIX_HPP

#include"Queue.hpp"

class Radix {
private:
	int* numbers;
	int length;
	Queue** queues;
	int maxStep;
	int MaxStepNumber();
	int power(int);
	int StepCount(int);
	int* QueueCurrentLengths();
public:
	Radix(Doku*, int);
	Doku* Sort();
	~Radix();
};

#endif