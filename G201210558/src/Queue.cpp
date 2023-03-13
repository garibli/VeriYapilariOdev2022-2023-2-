/**
* @file Queue.cpp
* @description H�cre nesneleriyle i�lem yapan kuyruk s�n�f�
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Queue.hpp"

void Queue::reserve(int newCapacity) {
	Hucre** temp = new Hucre * [newCapacity];
	for (int i = front, j = 0; j < length; j++) {
		temp[j] = items[i];
		i = (i + 1) % capacity;
	}
	capacity = newCapacity;
	delete[] items;
	items = temp;
	front = 0;
	back = length - 1;
}
Queue::Queue() {
	capacity = 1;
	front = 0;
	back = -1;
	length = 0;
	items = new Hucre * [capacity];
}
void Queue::clear() {
	front = 0;
	back = -1;
	length = 0;
}
int Queue::count() const {
	return length;
}
bool Queue::isEmpty() const {
	if (length == 0) return true;
	return false;
}
Hucre* Queue::peek() {
	if (isEmpty()) throw "Empty List";
	return items[front];
}
void Queue::enqueue(Hucre* item) {
	if (length == capacity) reserve(2 * capacity);
	back = (back + 1) % capacity;
	items[back] = item;
	length++;
}
void Queue::dequeue() {
	if (isEmpty()) throw "Empty List";
	front = (front + 1) % capacity;
	length--;
}
Queue::~Queue() {
	delete[] items;
}