/**
* @file Radix.cpp
* @description Verilen doku sýnýfýnýn içindeki hücreleri verilerine göre radix sort algoritmasýyla kýyaslayan sýnýf
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Radix.hpp"

int Radix::MaxStepNumber() {
	int max = 0;
	for (int i = 0; i < length; i++) {
		if (StepCount(numbers[i]) > max) max = StepCount(numbers[i]);
	}
	return max;
}
int Radix::power(int e) {
	int result = 1;
	for (int i = 0; i < e; i++) result *= 10;
	return result;
}
int Radix::StepCount(int number) {
	number = abs(number);
	int basamak = 0;
	while (number > 0) {
		basamak++;
		number /= 10;
	}
	return basamak;
}
int* Radix::QueueCurrentLengths() {
	int* lengths = new int[10];
	for (int i = 0; i < 10; i++) {
		lengths[i] = queues[i]->count();
	}
	return lengths;
}
Radix::Radix(Doku* doku, int length) {
	Hucre** hucreler = doku->getHucreler();
	this->numbers = new int[length];
	this->length = length;
	for (int i = 0; i < length; i++) { this->numbers[i] = hucreler[i]->getVeri(); }
	queues = new Queue * [10];
	for (int j = 0; j < 10; j++) { queues[j] = new Queue(); }
	maxStep = MaxStepNumber();
}
Doku* Radix::Sort() {
	int numberIndex = 0;
	// read from array once and add to queues
	for (; numberIndex < length; numberIndex++) {
		int stepValue = numbers[numberIndex] % 10;
		int num = numbers[numberIndex];
		Hucre* hucre = new Hucre(num);
		queues[stepValue]->enqueue(hucre);
	}

	//i starting from 1 because of first digit processed
	for (int i = 1; i < maxStep; i++) {
		//get the current length in all queues
		int* qlengths = QueueCurrentLengths();
		for (int index = 0; index < 10; index++) {
			int len = qlengths[index];
			for (; len > 0; len--) {
				int number = queues[index]->peek()->getVeri();
				queues[index]->dequeue();
				int stepValue = (number / power(i)) % 10;
				Hucre* hucre = new Hucre(number);
				queues[stepValue]->enqueue(hucre);
			}
		}
		delete[] qlengths;
	}
	Doku* ordered = new Doku(length);
	numberIndex = 0;
	for (int index = 0; index < 10; index++) {
		while (!queues[index]->isEmpty()) {
			Hucre* hucre = queues[index]->peek();
			ordered->hucreEkle(hucre);
			queues[index]->dequeue();
		}
	}

	return ordered;
}
Radix::~Radix() {
	delete[] numbers;
	for (int i = 0; i < 10; i++) delete queues[i];
	delete[] queues;
}