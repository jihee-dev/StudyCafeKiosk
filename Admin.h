#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Admin {
private:
	string pw = "1234";
	int today_people;
	int today_sales;
	int cumul_people;
	int cumul_sales;
	int drink_stock[3];

	Admin() {};
	~Admin() {};
	static Admin* instance;

public:
	void setCalzero(); //���� ������ �ʱ�ȭ
	void calInc(int price); //����� ���� 1�� ������Ű�� ������ price ����ŭ ����
	bool logIn(string input_pw); //pw�Է¹޾Ƽ� pw��ġ�ϸ� admin_mode ȣ��, Ʋ���� �����޽���
	void setPw(string pw); //��й�ȣ ����
	void setStock(int ame, int latte, int tea); //���� ��� ����
												//today�� cout����ϰ� ������ ����IO�� ����
												//���� ���---->��������� �ؽ�Ʈ�� �����ϴ°ɷ�
	void cal_print();
	void stock_print(); //��� ���
	void admin_mode(); //�����ڸ��: ���� �Ǵ� ����� print ȣ��

	static Admin* getInstance();
};
