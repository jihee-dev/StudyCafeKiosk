#pragma once
#include"Admin.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// CalView에 대한 요약입니다.
	/// </summary>
	public ref class CalView : public System::Windows::Forms::Form
	{
	public:
		CalView(void)
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
		~CalView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  textToday1;
	protected:
	private: System::Windows::Forms::Label^  textToday2;
	private: System::Windows::Forms::Label^  textTotal1;
	private: System::Windows::Forms::Label^  textTotal2;
	private: System::Windows::Forms::Label^  today_people_text;
	private: System::Windows::Forms::Label^  today_sales_text;
	private: System::Windows::Forms::Label^  total_people_text;
	private: System::Windows::Forms::Label^  total_sales_text;

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
			this->textToday1 = (gcnew System::Windows::Forms::Label());
			this->textToday2 = (gcnew System::Windows::Forms::Label());
			this->textTotal1 = (gcnew System::Windows::Forms::Label());
			this->textTotal2 = (gcnew System::Windows::Forms::Label());
			this->today_people_text = (gcnew System::Windows::Forms::Label());
			this->today_sales_text = (gcnew System::Windows::Forms::Label());
			this->total_people_text = (gcnew System::Windows::Forms::Label());
			this->total_sales_text = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textToday1
			// 
			this->textToday1->AutoSize = true;
			this->textToday1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->textToday1->Location = System::Drawing::Point(313, 122);
			this->textToday1->Name = L"textToday1";
			this->textToday1->Size = System::Drawing::Size(111, 23);
			this->textToday1->TabIndex = 0;
			this->textToday1->Text = L"하루 사용자";
			// 
			// textToday2
			// 
			this->textToday2->AutoSize = true;
			this->textToday2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->textToday2->Location = System::Drawing::Point(313, 202);
			this->textToday2->Name = L"textToday2";
			this->textToday2->Size = System::Drawing::Size(92, 23);
			this->textToday2->TabIndex = 1;
			this->textToday2->Text = L"하루 매출";
			// 
			// textTotal1
			// 
			this->textTotal1->AutoSize = true;
			this->textTotal1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->textTotal1->Location = System::Drawing::Point(313, 282);
			this->textTotal1->Name = L"textTotal1";
			this->textTotal1->Size = System::Drawing::Size(111, 23);
			this->textTotal1->TabIndex = 2;
			this->textTotal1->Text = L"누적 사용자";
			// 
			// textTotal2
			// 
			this->textTotal2->AutoSize = true;
			this->textTotal2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->textTotal2->Location = System::Drawing::Point(313, 362);
			this->textTotal2->Name = L"textTotal2";
			this->textTotal2->Size = System::Drawing::Size(92, 23);
			this->textTotal2->TabIndex = 3;
			this->textTotal2->Text = L"누적 매출";
			// 
			// today_people_text
			// 
			this->today_people_text->AutoSize = true;
			this->today_people_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->today_people_text->Location = System::Drawing::Point(458, 122);
			this->today_people_text->Name = L"today_people_text";
			this->today_people_text->Size = System::Drawing::Size(223, 21);
			this->today_people_text->TabIndex = 4;
			this->today_people_text->Text = "today_people";
			// 
			// today_sales_text
			// 
			this->today_sales_text->AutoSize = true;
			this->today_sales_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->today_sales_text->Location = System::Drawing::Point(458, 202);
			this->today_sales_text->Name = L"today_sales_text";
			this->today_sales_text->Size = System::Drawing::Size(209, 21);
			this->today_sales_text->TabIndex = 5;
			this->today_sales_text->Text = "today_sales";
			// 
			// total_people_text
			// 
			this->total_people_text->AutoSize = true;
			this->total_people_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->total_people_text->Location = System::Drawing::Point(458, 282);
			this->total_people_text->Name = L"total_people_text";
			this->total_people_text->Size = System::Drawing::Size(215, 21);
			this->total_people_text->TabIndex = 6;
			this->total_people_text->Text = "total_people";
			// 
			// total_sales_text
			// 
			this->total_sales_text->AutoSize = true;
			this->total_sales_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->total_sales_text->Location = System::Drawing::Point(458, 362);
			this->total_sales_text->Name = L"total_sales_text";
			this->total_sales_text->Size = System::Drawing::Size(201, 21);
			this->total_sales_text->TabIndex = 7;
			this->total_sales_text->Text = "total_sales";
			// 
			// CalView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->total_sales_text);
			this->Controls->Add(this->total_people_text);
			this->Controls->Add(this->today_sales_text);
			this->Controls->Add(this->today_people_text);
			this->Controls->Add(this->textTotal2);
			this->Controls->Add(this->textTotal1);
			this->Controls->Add(this->textToday2);
			this->Controls->Add(this->textToday1);
			this->Name = L"CalView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"정산 출력";
			this->Load += gcnew System::EventHandler(this, &CalView::CalView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void CalView_Load(System::Object^  sender, System::EventArgs^  e) {
			this->today_people_text->Text = (Admin::getInstance()->getToday_people()).ToString();
			this->today_sales_text->Text = (Admin::getInstance()->getToday_sales()).ToString();
			this->total_people_text->Text = (Admin::getInstance()->getCumul_people()).ToString();
			this->total_sales_text->Text = (Admin::getInstance()->getCumul_sales()).ToString();
		}
};
}
