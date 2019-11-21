#include "Drink.h"

Drink::Drink(string name, int price) {
	this->name = name;
	this->price = price;
	this->stock = 30;
	this->all_count = 0;
	this->today_count = 0;
}

bool Drink::canBuy(int n) {
	return ((this->stock - n) >= 0);
}

void Drink::addStock(int c) {
	this->stock += c;
}

void Drink::reset() {
	stock = 0;
	today_count = 0;
}