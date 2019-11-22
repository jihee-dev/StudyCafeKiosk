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
	int today_people; // 하루 사용자 수
	int today_sales; // 하루 매출액
	int cumul_people; // 누적 사용자 수
	int cumul_sales; // 누적 매출액
	Drink drinks[3] = { Drink("아메리카노", 2000), Drink("카페라떼", 2500), Drink("차", 3000) };
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
	// 싱글턴 패턴
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

	// 로그인 관련
	bool logIn(string input_pw); // 로그인 성공 유무
	void setPw(string pw); //비밀번호 변경

	// 판매량 관련
	void setCalzero(); // 정산 변수들 초기화
	void calInc(); // 사용자 수는 1씩 증가시키고 매출은 price 값만큼 증가

	// 재고 관련
	void stock_mng(int ame, int latte, int tea); // 음료 재고 설정
};
