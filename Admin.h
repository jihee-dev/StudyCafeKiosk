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
	void setCalzero(); //정산 변수들 초기화
	void calInc(int price); //사용자 수는 1씩 증가시키고 매출은 price 값만큼 증가
	bool logIn(string input_pw); //pw입력받아서 pw일치하면 admin_mode 호출, 틀리면 오류메시지
	void setPw(string pw); //비밀번호 설정
	void setStock(int ame, int latte, int tea); //음료 재고 설정
												//today만 cout출력하고 누적은 파일IO로 저장
												//정산 출력---->파일입출력 텍스트에 저장하는걸로
	void cal_print();
	void stock_print(); //재고 출력
	void admin_mode(); //관리자모드: 정산 또는 재고의 print 호출

	static Admin* getInstance();
};
