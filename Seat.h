#pragma once
//#include "user.h"
#include <time.h>
#ifndef SEAT_H
#define SEAT_H
class Seat
{
	int num;  // 좌석 번호
			  //time_t reg_time;  // 시작시간
			  //time_t quit_time; // 종료시간
			  // 시작시간
			  // 종료시간
	bool isAvailable;

public:
	Seat();
	Seat(int n);
	int use_time;// 이용시간

	void print_seat(); // 현재 자리 구성 출력
	void reset();      // 좌석 정보 초기화(결제 전에 나갔을때)
					   //void set_cur_time();
					   //void set_quit_time();
					   //void get_str_quit_time();

	void setIsAvailable(bool isAvailable) {
		this->isAvailable = isAvailable;
	}

	bool getIsAvailable() {
		return this->isAvailable;
	}
};
#endif

