#pragma once
#ifndef USER_H
#define USER_H
#include "Seat.h"
#include "Drink.h"

class User
{
private:
	int seat_num; // 좌석 번호(좌석 버튼의 인덱스 번호 X)
	int time;     // 입력한 시간
	int my_drink[3] = {};    // 구매한 음료 수량(0:아메,1:라떼,2:차)
	// bool order_complete;

	User();
	static User* instance;

public:
	// 싱글턴 패턴
	static User* getInstance();

	// 1. 좌석선택
	int select_seat(int n);
	// bool seat_check(Seat seats[]);   // 좌석 검사 (사용중인지 아닌지)
									 // 2. 시간제 선택
	void select_time(int n);
	// 3. 음료 선택
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