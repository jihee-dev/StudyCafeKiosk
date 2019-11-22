#include<iostream>
#include<string>
#include<fstream>
#include"Admin.h"
#include"Drink.h"
#include"User.h"
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

void Admin::calInc() { // ���Ž� ���� ���� ����
	today_people += 1;
	cumul_people += 1;
	today_sales += User::getInstance()->getTotalPay();
	cumul_sales += User::getInstance()->getTotalPay();

	ofstream fileOut("calculate.txt");
	if (fileOut.is_open()) {
		fileOut << "���� ����� ��: " << cumul_people << endl;
		fileOut << "���� ���� �ݾ�: " << cumul_sales << endl;
	}
}

void Admin::stock_mng(int ame, int latte, int tea) {
	this->getDrinks()[0].addStock(ame);
	this->getDrinks()[1].addStock(latte);
	this->getDrinks()[2].addStock(tea);
}

Admin* Admin::instance = nullptr;

Admin* Admin::getInstance() {
	if (instance == nullptr) {
		instance = new Admin();
	}

	return instance;
}

