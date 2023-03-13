/**
* @file Queue.hpp
* @description Hücre nesneleriyle iþlem yapan kuyruk sýnýfý
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef	QUEUE_HPP
#define	QUEUE_HPP

#include"Doku.hpp"
#include<cmath>

class Queue {
private:
	int front;
	int back;
	int capacity;
	int length;
	Hucre** items;
	void reserve(int);
public:
	Queue();
	void clear();
	int count() const;
	bool isEmpty() const;
	Hucre* peek();
	void enqueue(Hucre*);
	void dequeue();
	~Queue();
};

#endif