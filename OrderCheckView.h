#pragma once
#include"Admin.h"
#include"User.h"
#include"FinalView.h"
#include<string>
#include<msclr/marshal_cppstd.h>

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// OrderCheckView에 대한 요약입니다.
	/// </summary>
	public ref class OrderCheckView : public System::Windows::Forms::Form
	{
	public:
		OrderCheckView(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~OrderCheckView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  seat_text;
	private: System::Windows::Forms::Label^  time_text;
	private: System::Windows::Forms::Label^  ame_text;
	private: System::Windows::Forms::Label^  latte_text;
	private: System::Windows::Forms::Label^  tea_text;
	private: System::Windows::Forms::Label^  time_money;
	private: System::Windows::Forms::Label^  ame_money;
	private: System::Windows::Forms::Label^  latte_money;
	private: System::Windows::Forms::Label^  tea_money;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  total_text;
	private: System::Windows::Forms::TextBox^  input_text;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->seat_text = (gcnew System::Windows::Forms::Label());
			this->time_text = (gcnew System::Windows::Forms::Label());
			this->ame_text = (gcnew System::Windows::Forms::Label());
			this->latte_text = (gcnew System::Windows::Forms::Label());
			this->tea_text = (gcnew System::Windows::Forms::Label());
			this->time_money = (gcnew System::Windows::Forms::Label());
			this->ame_money = (gcnew System::Windows::Forms::Label());
			this->latte_money = (gcnew System::Windows::Forms::Label());
			this->tea_money = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->total_text = (gcnew System::Windows::Forms::Label());
			this->input_text = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 17, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(301, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(400, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"주문 확인 후 결제 금액을 입력해 주세요";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->label2->Location = System::Drawing::Point(325, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"이용 시간:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->label3->Location = System::Drawing::Point(325, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"좌석 번호:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->label4->Location = System::Drawing::Point(325, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"주문 음료:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"나눔고딕", 11));
			this->label5->Location = System::Drawing::Point(350, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"아메리카노";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"나눔고딕", 11));
			this->label6->Location = System::Drawing::Point(350, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"카페라떼";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"나눔고딕", 11));
			this->label7->Location = System::Drawing::Point(350, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"차";
			// 
			// seat_text
			// 
			this->seat_text->AutoSize = true;
			this->seat_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->seat_text->Location = System::Drawing::Point(459, 116);
			this->seat_text->Name = L"seat_text";
			this->seat_text->Size = System::Drawing::Size(60, 21);
			this->seat_text->TabIndex = 7;
			this->seat_text->Text = L"seat_text";
			// 
			// time_text
			// 
			this->time_text->AutoSize = true;
			this->time_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->time_text->Location = System::Drawing::Point(459, 161);
			this->time_text->Name = L"time_text";
			this->time_text->Size = System::Drawing::Size(60, 21);
			this->time_text->TabIndex = 8;
			this->time_text->Text = L"time_text";
			// 
			// ame_text
			// 
			this->ame_text->AutoSize = true;
			this->ame_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 11));
			this->ame_text->Location = System::Drawing::Point(460, 259);
			this->ame_text->Name = L"ame_text";
			this->ame_text->Size = System::Drawing::Size(59, 17);
			this->ame_text->TabIndex = 9;
			this->ame_text->Text = L"ame_text";
			// 
			// latte_text
			// 
			this->latte_text->AutoSize = true;
			this->latte_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 11));
			this->latte_text->Location = System::Drawing::Point(460, 289);
			this->latte_text->Name = L"latte_text";
			this->latte_text->Size = System::Drawing::Size(59, 17);
			this->latte_text->TabIndex = 10;
			this->latte_text->Text = L"latte_text";
			// 
			// tea_text
			// 
			this->tea_text->AutoSize = true;
			this->tea_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 11));
			this->tea_text->Location = System::Drawing::Point(460, 319);
			this->tea_text->Name = L"tea_text";
			this->tea_text->Size = System::Drawing::Size(59, 17);
			this->tea_text->TabIndex = 11;
			this->tea_text->Text = L"tea_text";
			// 
			// time_money
			// 
			this->time_money->AutoSize = true;
			this->time_money->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9));
			this->time_money->Location = System::Drawing::Point(596, 166);
			this->time_money->Name = L"time_money";
			this->time_money->Size = System::Drawing::Size(48, 14);
			this->time_money->TabIndex = 12;
			this->time_money->Text = L"time_money";
			this->time_money->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// ame_money
			// 
			this->ame_money->AutoSize = true;
			this->ame_money->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9));
			this->ame_money->Location = System::Drawing::Point(596, 262);
			this->ame_money->Name = L"ame_money";
			this->ame_money->Size = System::Drawing::Size(48, 14);
			this->ame_money->TabIndex = 13;
			this->ame_money->Text = L"ame_money";
			this->ame_money->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// latte_money
			// 
			this->latte_money->AutoSize = true;
			this->latte_money->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9));
			this->latte_money->Location = System::Drawing::Point(596, 292);
			this->latte_money->Name = L"latte_money";
			this->latte_money->Size = System::Drawing::Size(48, 14);
			this->latte_money->TabIndex = 14;
			this->latte_money->Text = L"latte_money";
			this->latte_money->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// tea_money
			// 
			this->tea_money->AutoSize = true;
			this->tea_money->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9));
			this->tea_money->Location = System::Drawing::Point(596, 322);
			this->tea_money->Name = L"tea_money";
			this->tea_money->Size = System::Drawing::Size(48, 14);
			this->tea_money->TabIndex = 15;
			this->tea_money->Text = L"tea_money";
			this->tea_money->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"나눔고딕", 14));
			this->label17->Location = System::Drawing::Point(302, 380);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(128, 21);
			this->label17->TabIndex = 16;
			this->label17->Text = L"최종 결제 금액";
			// 
			// total_text
			// 
			this->total_text->AutoSize = true;
			this->total_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 14));
			this->total_text->Location = System::Drawing::Point(459, 380);
			this->total_text->Name = L"total_text";
			this->total_text->Size = System::Drawing::Size(76, 21);
			this->total_text->TabIndex = 17;
			this->total_text->Text = L"total_text";
			// 
			// input_text
			// 
			this->input_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->input_text->Location = System::Drawing::Point(306, 427);
			this->input_text->Name = L"input_text";
			this->input_text->Size = System::Drawing::Size(229, 27);
			this->input_text->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 10));
			this->button1->Location = System::Drawing::Point(560, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 27);
			this->button1->TabIndex = 19;
			this->button1->Text = L"결제 확인";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OrderCheckView::button1_Click);
			// 
			// OrderCheckView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->input_text);
			this->Controls->Add(this->total_text);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->tea_money);
			this->Controls->Add(this->latte_money);
			this->Controls->Add(this->ame_money);
			this->Controls->Add(this->time_money);
			this->Controls->Add(this->tea_text);
			this->Controls->Add(this->latte_text);
			this->Controls->Add(this->ame_text);
			this->Controls->Add(this->time_text);
			this->Controls->Add(this->seat_text);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OrderCheckView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"주문 확인";
			this->Load += gcnew System::EventHandler(this, &OrderCheckView::OrderCheckView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void OrderCheckView_Load(System::Object^  sender, System::EventArgs^  e) {
			int seat = User::getInstance()->getter_seat_num();
			int time = User::getInstance()->getter_time();
			int ame = User::getInstance()->getter_my_drink()[0];
			int latte = User::getInstance()->getter_my_drink()[1];
			int tea = User::getInstance()->getter_my_drink()[2];

			this->seat_text->Text = gcnew System::String(to_string(seat).c_str());
			this->time_text->Text = gcnew System::String(to_string(time).c_str());
			this->ame_text->Text = gcnew System::String(to_string(ame).c_str());
			this->latte_text->Text = gcnew System::String(to_string(latte).c_str());
			this->tea_text->Text = gcnew System::String(to_string(tea).c_str());

			this->time_money->Text = gcnew System::String(to_string(time * 2000).c_str());
			this->ame_money->Text = gcnew System::String(to_string(ame * Admin::getInstance()->getDrinks()[0].getPrice()).c_str());
			this->latte_money->Text = gcnew System::String(to_string(latte *Admin::getInstance()->getDrinks()[1].getPrice()).c_str());
			this->tea_money->Text = gcnew System::String(to_string(tea * Admin::getInstance()->getDrinks()[2].getPrice()).c_str());

			this->total_text->Text = User::getInstance()->calPrice().ToString();
			

			// this->ame_stock_text->Text = Admin::getInstance()->getDrinks()[0].getStock().ToString();
		}

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context context;
			int input = stoi(context.marshal_as<std::string>(this->input_text->Text->ToString()));
			
			if(User::getInstance()->pay(input) >= 0) {
				this->Visible = false;
				KioskProj::FinalView final;
				final.ShowDialog();
			}

			else {
				this->label1->ForeColor = System::Drawing::Color::Firebrick;
				this->label1->Text = "잔액 부족: 결제 금액을 다시 입력해 주세요";
			}
		}
	};
}
