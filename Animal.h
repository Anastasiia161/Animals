#pragma once
#include<iostream>
using namespace std;


class Animal {

public:
	virtual void say() {
		cout << "AAAAAAAAAA" << endl;
	}
};
class Cat :public Animal {


public:
	void say() override {
		cout << "Muau Muau " << endl;
	}
};
class Dog :public Animal {


public:
	void say() {
		cout << "Gav Gav " << endl;
	}
};

void do_say(Animal& animals) {
	animals.say();
}