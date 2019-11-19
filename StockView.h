#pragma once

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// StockView에 대한 요약입니다.
	/// </summary>
	public ref class StockView : public System::Windows::Forms::Form
	{
	public:
		StockView(void)
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
		~StockView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  listText1;
	protected:
	private: System::Windows::Forms::Label^  listText2;
	private: System::Windows::Forms::Label^  listText3;
	private: System::Windows::Forms::Label^  ame_stock_text;
	private: System::Windows::Forms::Label^  latte_stock_text;
	private: System::Windows::Forms::Label^  tea_stock_text;

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
			this->listText1 = (gcnew System::Windows::Forms::Label());
			this->listText2 = (gcnew System::Windows::Forms::Label());
			this->listText3 = (gcnew System::Windows::Forms::Label());
			this->ame_stock_text = (gcnew System::Windows::Forms::Label());
			this->latte_stock_text = (gcnew System::Windows::Forms::Label());
			this->tea_stock_text = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listText1
			// 
			this->listText1->AutoSize = true;
			this->listText1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText1->Location = System::Drawing::Point(313, 174);
			this->listText1->Name = L"listText1";
			this->listText1->Size = System::Drawing::Size(111, 23);
			this->listText1->TabIndex = 0;
			this->listText1->Text = L"Americano";
			// 
			// listText2
			// 
			this->listText2->AutoSize = true;
			this->listText2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText2->Location = System::Drawing::Point(313, 254);
			this->listText2->Name = L"listText2";
			this->listText2->Size = System::Drawing::Size(56, 23);
			this->listText2->TabIndex = 1;
			this->listText2->Text = L"Latte";
			// 
			// listText3
			// 
			this->listText3->AutoSize = true;
			this->listText3->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->listText3->Location = System::Drawing::Point(313, 334);
			this->listText3->Name = L"listText3";
			this->listText3->Size = System::Drawing::Size(43, 23);
			this->listText3->TabIndex = 2;
			this->listText3->Text = L"Tea";
			// 
			// ame_stock_text
			// 
			this->ame_stock_text->AutoSize = true;
			this->ame_stock_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->ame_stock_text->Location = System::Drawing::Point(458, 174);
			this->ame_stock_text->Name = L"ame_stock_text";
			this->ame_stock_text->Size = System::Drawing::Size(202, 21);
			this->ame_stock_text->TabIndex = 4;
			this->ame_stock_text->Text = L"Admin::getStockAme()";
			// 
			// latte_stock_text
			// 
			this->latte_stock_text->AutoSize = true;
			this->latte_stock_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->latte_stock_text->Location = System::Drawing::Point(458, 254);
			this->latte_stock_text->Name = L"latte_stock_text";
			this->latte_stock_text->Size = System::Drawing::Size(206, 21);
			this->latte_stock_text->TabIndex = 5;
			this->latte_stock_text->Text = L"Admin::getStockLatte()";
			// 
			// tea_stock_text
			// 
			this->tea_stock_text->AutoSize = true;
			this->tea_stock_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->tea_stock_text->Location = System::Drawing::Point(458, 334);
			this->tea_stock_text->Name = L"tea_stock_text";
			this->tea_stock_text->Size = System::Drawing::Size(193, 21);
			this->tea_stock_text->TabIndex = 6;
			this->tea_stock_text->Text = L"Admin::getStockTea()";
			// 
			// StockView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->tea_stock_text);
			this->Controls->Add(this->latte_stock_text);
			this->Controls->Add(this->ame_stock_text);
			this->Controls->Add(this->listText3);
			this->Controls->Add(this->listText2);
			this->Controls->Add(this->listText1);
			this->Name = L"StockView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"정산 출력";
			this->Load += gcnew System::EventHandler(this, &StockView::StockView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StockView_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
