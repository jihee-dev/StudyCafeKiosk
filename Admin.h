#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include"Drink.h"
using namespace std;

class Admin {
private:
	string pw;
	int today_people; // �Ϸ� ����� ��
	int today_sales; // �Ϸ� �����
	int cumul_people; // ���� ����� ��
	int cumul_sales; // ���� �����
	Drink drinks[3] = { Drink("�Ƹ޸�ī��", 2000), Drink("ī���", 2500), Drink("��", 3000) };

	Admin() {
		this->pw = "0000";
		this->today_people = 0;
		this->today_sales = 0;
		this->cumul_people = 0;
		this->cumul_sales = 0;
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
	Drink* getDrinks0();
	Drink* getDrinks1();
	Drink* getDrinks2();

	// �α��� ����
	bool logIn(string input_pw); // �α��� ���� ����
	void setPw(string pw); //��й�ȣ ����

	// �Ǹŷ� ����
	void setCalzero(); // ���� ������ �ʱ�ȭ
	void calInc(Drink* d); // ����� ���� 1�� ������Ű�� ������ price ����ŭ ����

	// ��� ����
	void stock_mng(Drink d[]); // ���� ��� ����
};
