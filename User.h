#pragma once
#ifndef USER_H
#define USER_H
#include "Seat.h"
#include "Drink.h"

class User
{
	int seat_num; // 입력한 좌석 번호
	int time;     // 입력한 시간
	int my_drink[3] = {};    // 구매한 음료 수량(0:아메,1:라떼,2:차)

public:
	User();
	// 1. 좌석선택
	int select_seat(int n);
	// bool seat_check(Seat seats[]);   // 좌석 검사 (사용중인지 아닌지)
									 // 2. 시간제 선택
	void select_time(int n);
	// 3. 음료 선택
	void buy_drink(int n[]);
	bool check_stock(Drink d[], int a, int b);   // drink 객체에 저장되어있는 재고 확인
												 // 4. 영수증 출력
												 //int print_receipt();
												 // 5. 결제
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