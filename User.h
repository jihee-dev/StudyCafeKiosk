#pragma once
#ifndef USER_H
#define USER_H
#include "Seat.h"
#include "Drink.h"

class User
{
private:
	int seat_num; // �¼� ��ȣ(�¼� ��ư�� �ε��� ��ȣ X)
	int time;     // �Է��� �ð�
	int my_drink[3] = {};    // ������ ���� ����(0:�Ƹ�,1:��,2:��)
	// bool order_complete;

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
	// 3. ���� ����
	void buy_drink(int n[]);
	
	int pay(int sum, int input);
	//getter setter
	int getter_seat_num();
	void setter_seat_num(int n);
	int getter_time();
	void setter_time(int n);
	int* getter_my_drink();
	void setter_my_drink(int n[]);
};
#endif