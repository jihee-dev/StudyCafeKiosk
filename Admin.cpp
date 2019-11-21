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

void Admin::setCalzero() { // �Ϸ� ���� �ʱ�ȭ
	today_people = 0;
	today_sales = 0;
}

void Admin::calInc(Drink* d) { // ���Ž� ���� ���� ����
	today_people += 1;
	cumul_people += 1;
	today_sales += d->getPrice();
	cumul_sales += d->getPrice();

	ofstream fileOut("calculate.txt");
	if (fileOut.is_open()) {
		fileOut << "���� ����� ��: " << cumul_people << endl;
		fileOut << "���� ���� �ݾ�: " << cumul_sales << endl;
	}
}

void Admin::stock_mng(Drink drinks[]) {
	// ��� ���� Ȯ��
	int change;   // ���� �Է� ����
	int stock_select, stock_amount;  // ��� ������ ���� ��ȣ, ����
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

