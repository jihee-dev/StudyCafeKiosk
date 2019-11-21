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

void seat::get_str_quit_time() // 끝날 시간 출력 함수
{
//   struct tm* time;
//time= localtime(&quit_time);
//cout<<"종료 시각 "<<time->tm_hour <<" 시 "<<time->tm_min<<" 분"<<endl;

cout << quit_time << endl;
unsigned int hour = (unsigned int)quit_time / 60;
unsigned int min = (unsigned int)quit_time - hour * 60;
cout << "종료 시각 " << hour << " 시 " << min << " 분" << endl;

}*/