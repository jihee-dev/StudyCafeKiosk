#pragma once
#include"Admin.h"
#include<string>
#include<msclr/marshal_cppstd.h>

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// EditStockView에 대한 요약입니다.
	/// </summary>
	public ref class EditStockView : public System::Windows::Forms::Form
	{
	public:
		EditStockView(void)
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
		~EditStockView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  edit_stock_btn;
	protected:



	private: System::Windows::Forms::Label^  listText3;
	private: System::Windows::Forms::Label^  listText2;
	private: System::Windows::Forms::Label^  listText1;
	private: System::Windows::Forms::Label^  latte_stock_text;

	private: System::Windows::Forms::TextBox^  edit_ame;
	private: System::Windows::Forms::TextBox^  edit_latte;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  edit_tea;

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
			this->edit_stock_btn = (gcnew System::Windows::Forms::Button());
			this->listText3 = (gcnew System::Windows::Forms::Label());
			this->listText2 = (gcnew System::Windows::Forms::Label());
			this->listText1 = (gcnew System::Windows::Forms::Label());
			this->latte_stock_text = (gcnew System::Windows::Forms::Label());
			this->edit_ame = (gcnew System::Windows::Forms::TextBox());
			this->edit_latte = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->edit_tea = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// edit_stock_btn
			// 
			this->edit_stock_btn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->edit_stock_btn->Location = System::Drawing::Point(332, 416);
			this->edit_stock_btn->Name = L"edit_stock_btn";
			this->edit_stock_btn->Size = System::Drawing::Size(347, 45);
			this->edit_stock_btn->TabIndex = 14;
			this->edit_stock_btn->Text = L"재고 수정";
			this->edit_stock_btn->UseVisualStyleBackColor = true;
			this->edit_stock_btn->Click += gcnew System::EventHandler(this, &EditStockView::edit_stock_btn_Click);
			// 
			// listText3
			// 
			this->listText3->AutoSize = true;
			this->listText3->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText3->Location = System::Drawing::Point(328, 338);
			this->listText3->Name = L"listText3";
			this->listText3->Size = System::Drawing::Size(43, 23);
			this->listText3->TabIndex = 10;
			this->listText3->Text = L"Tea";
			// 
			// listText2
			// 
			this->listText2->AutoSize = true;
			this->listText2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText2->Location = System::Drawing::Point(328, 258);
			this->listText2->Name = L"listText2";
			this->listText2->Size = System::Drawing::Size(56, 23);
			this->listText2->TabIndex = 9;
			this->listText2->Text = L"Latte";
			// 
			// listText1
			// 
			this->listText1->AutoSize = true;
			this->listText1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText1->Location = System::Drawing::Point(328, 178);
			this->listText1->Name = L"listText1";
			this->listText1->Size = System::Drawing::Size(111, 23);
			this->listText1->TabIndex = 8;
			this->listText1->Text = L"Americano";
			// 
			// latte_stock_text
			// 
			this->latte_stock_text->Location = System::Drawing::Point(0, 0);
			this->latte_stock_text->Name = L"latte_stock_text";
			this->latte_stock_text->Size = System::Drawing::Size(100, 23);
			this->latte_stock_text->TabIndex = 15;
			// 
			// edit_ame
			// 
			this->edit_ame->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->edit_ame->Location = System::Drawing::Point(477, 174);
			this->edit_ame->Name = L"edit_ame";
			this->edit_ame->Size = System::Drawing::Size(202, 27);
			this->edit_ame->TabIndex = 11;
			this->edit_ame->Text = L"0";
			this->edit_ame->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// edit_latte
			// 
			this->edit_latte->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->edit_latte->Location = System::Drawing::Point(477, 254);
			this->edit_latte->Name = L"edit_latte";
			this->edit_latte->Size = System::Drawing::Size(202, 27);
			this->edit_latte->TabIndex = 12;
			this->edit_latte->Text = L"0";
			this->edit_latte->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->label1->Location = System::Drawing::Point(328, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 23);
			this->label1->TabIndex = 14;
			this->label1->Text = L"추가할 재고의 수를 입력해 주세요";
			// 
			// edit_tea
			// 
			this->edit_tea->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->edit_tea->Location = System::Drawing::Point(477, 334);
			this->edit_tea->Name = L"edit_tea";
			this->edit_tea->Size = System::Drawing::Size(202, 27);
			this->edit_tea->TabIndex = 13;
			this->edit_tea->Text = L"0";
			this->edit_tea->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// EditStockView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->edit_tea);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->edit_latte);
			this->Controls->Add(this->edit_ame);
			this->Controls->Add(this->edit_stock_btn);
			this->Controls->Add(this->latte_stock_text);
			this->Controls->Add(this->listText3);
			this->Controls->Add(this->listText2);
			this->Controls->Add(this->listText1);
			this->Name = L"EditStockView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"재고 수정";
			this->Load += gcnew System::EventHandler(this, &EditStockView::EditStockView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void EditStockView_Load(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void edit_stock_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context context;
			int ame = stoi( context.marshal_as<std::string>(this->edit_ame->Text->ToString()));
			int latte = stoi(context.marshal_as<std::string>(this->edit_latte->Text->ToString()));
			int tea = stoi(context.marshal_as<std::string>(this->edit_tea->Text->ToString()));

			Admin::getInstance()->stock_mng(ame, latte, tea);

			this->Visible = false;
		}
};
}
