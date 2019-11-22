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
cout << "�¼� ��ȣ : " << seat_num << endl;
cout << "���� �ð� : " << time << "�ð� ("<< sum << "��)" << endl;
// cout << "���� �ð� : "
// cout << "���� �ð� : "
if (my_drink[0] > 0){
cout << "�Ƹ޸�ī�� : " << my_drink[0] << "�� (" << my_drink[0]*2000 << "��)"  << endl;
sum += 2000 * my_drink[0];
}
if (my_drink[1] > 0) {
cout << "ī��� : " << my_drink[1] << "�� (" << my_drink[1] * 2500 << "��)" << endl;
sum += 2500 * my_drink[1];
}
if (my_drink[2] > 0) {
cout << "�� : " << my_drink[2] << "�� (" << my_drink[2]*1500 << "��)"  << endl;
sum += 1500 * my_drink[2];
}
cout << "�� �ݾ� : " << sum << "��" << endl;
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