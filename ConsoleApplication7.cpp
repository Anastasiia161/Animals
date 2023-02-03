#include <iostream>
#include "Animal.h"
#include"MyQueue.h"


int main()
{
    MyQueue <Animal*> *r;

    r->push(new Dog());
    r->push(new Cat());
    r.pop()->say();

    
}

