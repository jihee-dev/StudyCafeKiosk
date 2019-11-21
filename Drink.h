#pragma once
#ifndef DRINK_H
#define DRINK_H
#include <iostream>
#include<string>

using namespace std;

class Drink
{
	string name;		// 이름
	int price;			// 가격
	int all_count;		// 누적 판매 개수
	int today_count;	// 하루 판매 개수
	int stock;		    // 재고

public:
	void setAllCount(int c) {
		this->all_count = c;
	}

	int getAllCount() {
		return this->all_count;
	}

	void setTodayCount(int c) {
		this->today_count = c;
	}

	int getTodayCount() {
		return this->today_count;
	}

	void setStock(int stock) {
		this->stock = stock;
	}

	int getStock() {
		return this->stock;
	}

	int getPrice() {
		return this->price;
	}
	
	Drink(string name, int price);
	void addStock(int n);
	void reset();  // 하루 지나면 리셋

	bool canBuy(int n);
};
#endif // !DRINK_H