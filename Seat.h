#pragma once
//#include "user.h"
#include <time.h>
#ifndef SEAT_H
#define SEAT_H
class Seat
{
	int num;  // �¼� ��ȣ
			  //time_t reg_time;  // ���۽ð�
			  //time_t quit_time; // ����ð�
			  // ���۽ð�
			  // ����ð�
	bool isAvailable;

public:
	Seat();
	Seat(int n);
	int use_time;// �̿�ð�

	void print_seat(); // ���� �ڸ� ���� ���
	void reset();      // �¼� ���� �ʱ�ȭ(���� ���� ��������)
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

