#pragma once
#include<iostream>
using namespace std;
template <typename T>
class MyQueue
{
protected:
	int maxcounter = 0;
	int counter = 0;
	T* queue = nullptr;
public:
	explicit MyQueue(int maxcounter) :maxcounter{ maxcounter } {
		queue = new T[maxcounter];
	}
	void push(T& val) {
		if (counter < maxcounter)
			queue[counter++] = val;
		else
			cout << "Error! Queue overflow\n";
	}
	void push(T&& val) {
		if (counter < maxcounter)
			queue[counter++] = val;
		else
			cout << "Error! Queue overflow\n";
	}
	T& top() const {
		if (counter) return queue[0];
	}
	void pop() {
		if (counter) {
			for (int i = 0; i < counter - 1; ++i)
				swap(queue[i], queue[i + 1]);
			--counter;
		}
	}
	bool isEmpty() const {
		return !counter;
	}
};
