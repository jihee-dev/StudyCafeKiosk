#include "Seat.h"
#include <iostream>

using namespace std;

Seat::Seat() {

}

Seat::Seat(int n)
{
	num = n;
	this->isAvailable = true;
}

void Seat::reset()
{
	isAvailable = true;
	use_time = 0;
	//reg_time = 0;
	//quit_time = 0;
}

/*void seat::set_cur_time()
{
time_t systemtime = 0;

reg_time = time(&systemtime);
}

void seat::set_quit_time()
{
quit_time = reg_time + use_time;
}

void seat::get_str_quit_time() // ���� �ð� ��� �Լ�
{
//   struct tm* time;
//time= localtime(&quit_time);
//cout<<"���� �ð� "<<time->tm_hour <<" �� "<<time->tm_min<<" ��"<<endl;

cout << quit_time << endl;
unsigned int hour = (unsigned int)quit_time / 60;
unsigned int min = (unsigned int)quit_time - hour * 60;
cout << "���� �ð� " << hour << " �� " << min << " ��" << endl;

}*/