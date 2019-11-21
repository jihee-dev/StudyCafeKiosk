#pragma once
#ifndef DRINK_H
#define DRINK_H
#include <iostream>
#include<string>

using namespace std;

class Drink
{
	string name;		// �̸�
	int price;			// ����
	int all_count;		// ���� �Ǹ� ����
	int today_count;	// �Ϸ� �Ǹ� ����
	int stock;		    // ���

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
	void reset();  // �Ϸ� ������ ����

	bool canBuy(int n);
};
#endif // !DRINK_H