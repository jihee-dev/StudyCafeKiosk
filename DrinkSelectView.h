#pragma once
#include"User.h"
#include"OrderCheckView.h"
#include"Admin.h"
#include<msclr/marshal_cppstd.h>
#include<string>

using namespace std;

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// DrinkSelectView에 대한 요약입니다.
	/// </summary>
	public ref class DrinkSelectView : public System::Windows::Forms::Form {
	public:
		DrinkSelectView(void)
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
		~DrinkSelectView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  order_tea;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  order_latte;
	private: System::Windows::Forms::TextBox^  order_ame;
	private: System::Windows::Forms::Button^  order_btn;
	private: System::Windows::Forms::Label^  listText3;
	private: System::Windows::Forms::Label^  listText2;
	private: System::Windows::Forms::Label^  listText1;
	private: System::Windows::Forms::Label^  label2;


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
			this->order_tea = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->order_latte = (gcnew System::Windows::Forms::TextBox());
			this->order_ame = (gcnew System::Windows::Forms::TextBox());
			this->order_btn = (gcnew System::Windows::Forms::Button());
			this->listText3 = (gcnew System::Windows::Forms::Label());
			this->listText2 = (gcnew System::Windows::Forms::Label());
			this->listText1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// order_tea
			// 
			this->order_tea->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->order_tea->Location = System::Drawing::Point(464, 284);
			this->order_tea->Name = L"order_tea";
			this->order_tea->Size = System::Drawing::Size(202, 27);
			this->order_tea->TabIndex = 20;
			this->order_tea->Text = L"0";
			this->order_tea->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->label1->Location = System::Drawing::Point(315, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 23);
			this->label1->TabIndex = 21;
			this->label1->Text = L"주문할 메뉴의 수량을 입력해 주세요";
			// 
			// order_latte
			// 
			this->order_latte->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->order_latte->Location = System::Drawing::Point(464, 204);
			this->order_latte->Name = L"order_latte";
			this->order_latte->Size = System::Drawing::Size(202, 27);
			this->order_latte->TabIndex = 19;
			this->order_latte->Text = L"0";
			this->order_latte->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// order_ame
			// 
			this->order_ame->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->order_ame->Location = System::Drawing::Point(464, 124);
			this->order_ame->Name = L"order_ame";
			this->order_ame->Size = System::Drawing::Size(202, 27);
			this->order_ame->TabIndex = 18;
			this->order_ame->Text = L"0";
			this->order_ame->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// order_btn
			// 
			this->order_btn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->order_btn->Location = System::Drawing::Point(319, 366);
			this->order_btn->Name = L"order_btn";
			this->order_btn->Size = System::Drawing::Size(347, 45);
			this->order_btn->TabIndex = 22;
			this->order_btn->Text = L"주문 확인";
			this->order_btn->UseVisualStyleBackColor = true;
			this->order_btn->Click += gcnew System::EventHandler(this, &DrinkSelectView::order_btn_Click);
			// 
			// listText3
			// 
			this->listText3->AutoSize = true;
			this->listText3->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText3->Location = System::Drawing::Point(315, 288);
			this->listText3->Name = L"listText3";
			this->listText3->Size = System::Drawing::Size(43, 23);
			this->listText3->TabIndex = 17;
			this->listText3->Text = L"Tea";
			// 
			// listText2
			// 
			this->listText2->AutoSize = true;
			this->listText2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText2->Location = System::Drawing::Point(315, 208);
			this->listText2->Name = L"listText2";
			this->listText2->Size = System::Drawing::Size(56, 23);
			this->listText2->TabIndex = 16;
			this->listText2->Text = L"Latte";
			// 
			// listText1
			// 
			this->listText1->AutoSize = true;
			this->listText1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText1->Location = System::Drawing::Point(315, 128);
			this->listText1->Name = L"listText1";
			this->listText1->Size = System::Drawing::Size(111, 23);
			this->listText1->TabIndex = 15;
			this->listText1->Text = L"Americano";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 10));
			this->label2->Location = System::Drawing::Point(331, 423);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(303, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"현재 재고: 아메리카노 0개 / 카페라떼 0개 / 차 0개";
			// 
			// DrinkSelectView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->order_tea);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->order_latte);
			this->Controls->Add(this->order_ame);
			this->Controls->Add(this->order_btn);
			this->Controls->Add(this->listText3);
			this->Controls->Add(this->listText2);
			this->Controls->Add(this->listText1);
			this->Name = L"DrinkSelectView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DrinkSelectView";
			this->Load += gcnew System::EventHandler(this, &DrinkSelectView::DrinkSelectView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private:
		System::Void DrinkSelectView_Load(System::Object^  sender, System::EventArgs^  e) {
			
			string ame = std::to_string(Admin::getInstance()->getDrinks()[0].getStock());
			string latte = std::to_string(Admin::getInstance()->getDrinks()[1].getStock());
			string tea = std::to_string(Admin::getInstance()->getDrinks()[2].getStock());
			
			System::String^ tempAme = gcnew System::String(ame.c_str());
			System::String^ tempLatte = gcnew System::String(latte.c_str());
			System::String^ tempTea = gcnew System::String(tea.c_str());

			System::String^ result = "현재 재고 : 아메리카노 " + tempAme + "개 / 카페라떼 " + tempLatte + "개 / 차 " + tempTea + "개";

			this->label2->Text = result;
		}

		System::Void order_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context context;
			int ame = stoi(context.marshal_as<std::string>(this->order_ame->Text->ToString()));
			int latte = stoi(context.marshal_as<std::string>(this->order_latte->Text->ToString()));
			int tea = stoi(context.marshal_as<std::string>(this->order_tea->Text->ToString()));

			bool canAme = Admin::getInstance()->getDrinks()[0].canBuy(ame);
			bool canLatte = Admin::getInstance()->getDrinks()[1].canBuy(latte);
			bool canTea = Admin::getInstance()->getDrinks()[2].canBuy(tea);

			if (!(canAme && canLatte && canTea)) { // 주문 불가
				this->label1->Text = "재고가 부족합니다 다시 입력해 주세요";
				this->label1->ForeColor = System::Drawing::Color::Firebrick;
			}
			
			else {
				int d[3] = { ame, latte, tea };
				// Admin::getInstance()->stock_mng(ame, latte, tea);
				User::getInstance()->setter_my_drink(d);

				this->Visible = false;
				KioskProj::OrderCheckView check;
				check.ShowDialog();
			}
		}
	};
}
