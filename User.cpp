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

void User::buy_drink(int n[])
{
	for (int i = 0; i<3; i++)
	{
		my_drink[i] = n[i];
	}
}

// user ���� ��� Ȯ��
/*
bool User::check_stock(Drink drinks[], int drink_sel, int drink_count)
{
	if (drinks[drink_sel - 1].amount >= drink_count)
	{
		drinks[drink_sel - 1].amount -= drink_count; // �̺κ��� ��� �����Դϴ�!!
		return true;
	}
	else
	{
		cout << "��� �����մϴ�." << endl;
		return false;
	}
}

*/

/*int User::print_receipt()
{

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

int User::pay(int sum, int input)
{
	if (sum > input)
		return sum - input;
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