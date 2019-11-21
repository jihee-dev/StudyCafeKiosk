#pragma once
#ifndef USER_H
#define USER_H
#include "Seat.h"
#include "Drink.h"

class User
{
	int seat_num; // �Է��� �¼� ��ȣ
	int time;     // �Է��� �ð�
	int my_drink[3] = {};    // ������ ���� ����(0:�Ƹ�,1:��,2:��)

public:
	User();
	// 1. �¼�����
	int select_seat(int n);
	// bool seat_check(Seat seats[]);   // �¼� �˻� (��������� �ƴ���)
									 // 2. �ð��� ����
	void select_time(int n);
	// 3. ���� ����
	void buy_drink(int n[]);
	bool check_stock(Drink d[], int a, int b);   // drink ��ü�� ����Ǿ��ִ� ��� Ȯ��
												 // 4. ������ ���
												 //int print_receipt();
												 // 5. ����
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