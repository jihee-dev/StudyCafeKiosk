#include<iostream>
#include<string>
#include<fstream>
#include"Admin.h"
#include"Drink.h"
using namespace std;

int Admin::getToday_people() {
	return today_people;
}

int Admin::getToday_sales() {
	return today_sales;
}

int Admin::getCumul_people() {
	return cumul_people;
}

int Admin::getCumul_sales() {
	return cumul_sales;
}

Drink* Admin::getDrinks0() {
	return this->drinks;
}

Drink* Admin::getDrinks1() {
	return drinks + 1;
}

Drink* Admin::getDrinks2() {
	return drinks + 2;
}

bool Admin::logIn(string input_pw) {
	return input_pw == this->pw;
}

void Admin::setPw(string pw) {
	this->pw = pw;
}

void Admin::setCalzero() { // 하루 정산 초기화
	today_people = 0;
	today_sales = 0;
}

void Admin::calInc(Drink* d) { // 구매시 정산 내역 수정
	today_people += 1;
	cumul_people += 1;
	today_sales += d->getPrice();
	cumul_sales += d->getPrice();

	ofstream fileOut("calculate.txt");
	if (fileOut.is_open()) {
		fileOut << "누적 사용자 수: " << cumul_people << endl;
		fileOut << "누적 매출 금액: " << cumul_sales << endl;
	}
}

void Admin::stock_mng(Drink drinks[]) {
	// 재고 수정 확인
	int change;   // 변경 입력 저장
	int stock_select, stock_amount;  // 재고 변경할 음료 번호, 수량
	int more_input = 1;

	for (int i = 0; i < 3; i++) {
		drinks[i].addStock(3);
	}
}

Admin* Admin::instance = nullptr;

Admin* Admin::getInstance() {
	if (instance == nullptr) {
		instance = new Admin();
	}

	return instance;
}

