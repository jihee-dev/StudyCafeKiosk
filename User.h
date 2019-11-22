#pragma once
#ifndef USER_H
#define USER_H
#include "Seat.h"
#include "Drink.h"
#include"Admin.h"

class User
{
private:
	int seat_num; // �¼� ��ȣ(�¼� ��ư�� �ε��� ��ȣ X)
	int time;     // �Է��� �ð�
	int my_drink[3] = {};    // ������ ���� ����(0:�Ƹ�,1:��,2:��)
	// bool order_complete;
	int total_pay;
	int change;

	User();
	static User* instance;

public:
	// �̱��� ����
	static User* getInstance();

	// 1. �¼�����
	int select_seat(int n);
	// bool seat_check(Seat seats[]);   // �¼� �˻� (��������� �ƴ���)
									 // 2. �ð��� ����
	void select_time(int n);
	
	int pay(int input);

	//getter setter
	int getter_seat_num();
	void setter_seat_num(int n);
	int getter_time();
	void setter_time(int n);
	int* getter_my_drink();
	void setter_my_drink(int n[]);

	int getTotalPay() {
		return this->total_pay;
	}

	void setTotalPay(int t) {
		this->total_pay = t;
	}

	int calPrice() {
		this->total_pay = (this->time * 2000)
						+ (this->my_drink[0] * Admin::getInstance()->getDrinks()[0].getPrice())
						+ (this->my_drink[1] * Admin::getInstance()->getDrinks()[1].getPrice())
						+ (this->my_drink[2] * Admin::getInstance()->getDrinks()[2].getPrice());
		return this->total_pay;
	}

	int getChange() {
		return this->change;
	}

	void setChange(int change) {
		this->change = change;
	}
};
#endif