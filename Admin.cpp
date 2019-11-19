#include <iostream>
#include <string>
#include <fstream>
#include "Admin.h"
using namespace std;

void Admin::setCalzero() {
	today_people = 0;
	today_sales = 0;
	cumul_people = 0;
	cumul_sales = 0;
}

void Admin::calInc(int price) {
	today_people += 1;
	cumul_people += 1;
	today_sales += price;
	cumul_sales += price;

	ofstream fileOut("calculate.txt");
	if (fileOut.is_open()) {
		fileOut << "���� ����� ��: " << cumul_people << endl;
		fileOut << "���� ���� �ݾ�: " << cumul_sales << endl;
	}
}

bool Admin::logIn(string input_pw) {
	return input_pw == this->pw;
}

void Admin::setPw(string pw) {
	this->pw = pw;
}

void Admin::setStock(int ame, int latte, int tea) {
	drink_stock[0] = ame;
	drink_stock[1] = latte;
	drink_stock[2] = tea;
}

void Admin::cal_print() {
	ifstream fileIn("calculate.txt");

	/* cout << "\n--------------���� ���------------------" << endl;
	cout << "�Ϸ� ����� ��: " << today_people << endl;
	cout << "�Ϸ� ����: " << today_sales << endl;

	char buf[50];
	while (fileIn) {
		fileIn.getline(buf, 50);
		cout << buf << endl;
	}


	//cout << "���� ����� ��: " << cumul_people << endl;
	//cout << "���� ����: " << cumul_sales << endl;
	cout << "----------------------------------------" << endl; */

}

void Admin::stock_print() {
	/*
	cout << "\n-------------���� ��� ���---------------" << endl;
	cout << "Americano: " << drink_stock[0] << endl;
	cout << "Latte: " << drink_stock[1] << endl;
	cout << "Tea: " << drink_stock[2] << endl;
	cout << "------------------------------------------" << endl; */
}

Admin* Admin::instance = nullptr;

Admin* Admin::getInstance() {
	if (instance == nullptr) {
		instance = new Admin();
	}

	return instance;
}