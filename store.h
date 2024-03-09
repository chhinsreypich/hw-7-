// store.h
#pragma once
#include <iostream>
#include <string>	
#include "fruit.h"
using namespace std;
class store {
public:
	// constructor
	store() {
		apple = fruit(3, 300, "apple");
		pear = fruit(5, 400, "pear");
		peach = fruit(7, 1000, "peach");
		mango = fruit("mango", 6, 350 );
		strawberry = fruit("strawberry", 10, 1200 );
		banana = fruit("banana", 3, 600 );
	};
	// member data
	fruit apple, pear, peach, mango, strawberry, banana;
	// member function
	void sub_total(fruit a, fruit b, fruit c);
	void tax(fruit a, fruit b, fruit c);
	void total_price(fruit a, fruit b, fruit c, double shipping = 0 );
};