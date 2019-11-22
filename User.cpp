#include "User.h"
#include <iostream>
#include"Admin.h"

using namespace std;

User::User()
{
	seat_num = 0;
	time = 0;
	my_drink[0] = 0;
	my_drink[1] = 0;
	my_drink[2] = 0;
	total_pay = 0;
	// order_complete = false;
}

User* User::instance = nullptr;

User* User::getInstance() {
	if (instance == nullptr) {
		instance = new User();
	}

	return instance;
}

int User::select_seat(int n)
{
	seat_num = n;
	return n;
}

/* bool User::seat_check(int num) {
	// return Admin::getInstance()->get.set;
} */

void User::select_time(int n)
{
	time = n;
}

/*int User::print_receipt(){

int sum = time * 2000;
cout << endl << "***************************" << endl;
cout << "**********receipt**********" << endl;
cout << "좌석 번호 : " << seat_num << endl;
cout << "구매 시간 : " << time << "시간 ("<< sum << "원)" << endl;
// cout << "현재 시간 : "
// cout << "종료 시간 : "
if (my_drink[0] > 0){
cout << "아메리카노 : " << my_drink[0] << "개 (" << my_drink[0]*2000 << "원)"  << endl;
sum += 2000 * my_drink[0];
}
if (my_drink[1] > 0) {
cout << "카페라떼 : " << my_drink[1] << "개 (" << my_drink[1] * 2500 << "원)" << endl;
sum += 2500 * my_drink[1];
}
if (my_drink[2] > 0) {
cout << "차 : " << my_drink[2] << "개 (" << my_drink[2]*1500 << "원)"  << endl;
sum += 1500 * my_drink[2];
}
cout << "총 금액 : " << sum << "원" << endl;
cout << "***************************" << endl;
cout << "***************************" << endl;

return sum;
}*/

int User::pay(int p) {
	if (total_pay <= p) {
		this->change = p - total_pay;
		return this->change;
	}
		
	else
		return -1;
}

int User::getter_seat_num()
{
	return seat_num;
}

void User::setter_seat_num(int n)
{
	seat_num = n;
}

int User::getter_time()
{
	return time;
}

void User::setter_time(int n)
{
	time = n;
}

int* User::getter_my_drink()
{
	return my_drink;
}

void User::setter_my_drink(int n[])
{
	for (int i = 0; i < 3; i++)
	{
		my_drink[i] = n[i];
	}
}