#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include"Drink.h"
#include"Seat.h"
using namespace std;

class Admin {
private:
	string pw;
	int today_people; // �Ϸ� ����� ��
	int today_sales; // �Ϸ� �����
	int cumul_people; // ���� ����� ��
	int cumul_sales; // ���� �����
	Drink drinks[3] = { Drink("�Ƹ޸�ī��", 2000), Drink("ī���", 2500), Drink("��", 3000) };
	Seat seats[30];

	Admin() {
		this->pw = "0000";
		this->today_people = 0;
		this->today_sales = 0;
		this->cumul_people = 0;
		this->cumul_sales = 0;

		for (int i = 0; i < 30; i++) {
			this->seats[i] = Seat(i);
		}
	};

	~Admin() {};
	static Admin* instance;

public:
	// �̱��� ����
	static Admin* getInstance();

	// getter & setter
	int getToday_people();
	int getToday_sales();
	int getCumul_people();
	int getCumul_sales();

	Drink* getDrinks() {
		return this->drinks;
	}

	Seat* getSeats() {
		return this->seats;
	}

	// �α��� ����
	bool logIn(string input_pw); // �α��� ���� ����
	void setPw(string pw); //��й�ȣ ����

	// �Ǹŷ� ����
	void setCalzero(); // ���� ������ �ʱ�ȭ
	void calInc(); // ����� ���� 1�� ������Ű�� ������ price ����ŭ ����

	// ��� ����
	void stock_mng(int ame, int latte, int tea); // ���� ��� ����
};
