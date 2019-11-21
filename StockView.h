#pragma once
#include"EditStockView.h"
#include"Admin.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// StockView�� ���� ����Դϴ�.
	/// </summary>
	public ref class StockView : public System::Windows::Forms::Form
	{
	public:
		StockView(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
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
	private: System::Windows::Forms::Button^  edit_stock_btn;

	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listText1 = (gcnew System::Windows::Forms::Label());
			this->listText2 = (gcnew System::Windows::Forms::Label());
			this->listText3 = (gcnew System::Windows::Forms::Label());
			this->ame_stock_text = (gcnew System::Windows::Forms::Label());
			this->latte_stock_text = (gcnew System::Windows::Forms::Label());
			this->tea_stock_text = (gcnew System::Windows::Forms::Label());
			this->edit_stock_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listText1
			// 
			this->listText1->AutoSize = true;
			this->listText1->Font = (gcnew System::Drawing::Font(L"�������", 15));
			this->listText1->Location = System::Drawing::Point(307, 136);
			this->listText1->Name = L"listText1";
			this->listText1->Size = System::Drawing::Size(111, 23);
			this->listText1->TabIndex = 0;
			this->listText1->Text = L"Americano";
			this->listText1->Click += gcnew System::EventHandler(this, &StockView::listText1_Click);
			// 
			// listText2
			// 
			this->listText2->AutoSize = true;
			this->listText2->Font = (gcnew System::Drawing::Font(L"�������", 15));
			this->listText2->Location = System::Drawing::Point(307, 216);
			this->listText2->Name = L"listText2";
			this->listText2->Size = System::Drawing::Size(56, 23);
			this->listText2->TabIndex = 1;
			this->listText2->Text = L"Latte";
			this->listText2->Click += gcnew System::EventHandler(this, &StockView::listText2_Click);
			// 
			// listText3
			// 
			this->listText3->AutoSize = true;
			this->listText3->Font = (gcnew System::Drawing::Font(L"�������", 15));
			this->listText3->Location = System::Drawing::Point(307, 296);
			this->listText3->Name = L"listText3";
			this->listText3->Size = System::Drawing::Size(43, 23);
			this->listText3->TabIndex = 2;
			this->listText3->Text = L"Tea";
			this->listText3->Click += gcnew System::EventHandler(this, &StockView::listText3_Click);
			// 
			// ame_stock_text
			// 
			this->ame_stock_text->AutoSize = true;
			this->ame_stock_text->Font = (gcnew System::Drawing::Font(L"�������", 13));
			this->ame_stock_text->Location = System::Drawing::Point(452, 136);
			this->ame_stock_text->Name = L"ame_stock_text";
			this->ame_stock_text->Size = System::Drawing::Size(202, 21);
			this->ame_stock_text->TabIndex = 4;
			this->ame_stock_text->Text = "���";
			this->ame_stock_text->Click += gcnew System::EventHandler(this, &StockView::ame_stock_text_Click);
			// 
			// latte_stock_text
			// 
			this->latte_stock_text->AutoSize = true;
			this->latte_stock_text->Font = (gcnew System::Drawing::Font(L"�������", 13));
			this->latte_stock_text->Location = System::Drawing::Point(452, 216);
			this->latte_stock_text->Name = L"latte_stock_text";
			this->latte_stock_text->Size = System::Drawing::Size(206, 21);
			this->latte_stock_text->TabIndex = 5;
			this->latte_stock_text->Text = "���";
			this->latte_stock_text->Click += gcnew System::EventHandler(this, &StockView::latte_stock_text_Click);
			// 
			// tea_stock_text
			// 
			this->tea_stock_text->AutoSize = true;
			this->tea_stock_text->Font = (gcnew System::Drawing::Font(L"�������", 13));
			this->tea_stock_text->Location = System::Drawing::Point(452, 296);
			this->tea_stock_text->Name = L"tea_stock_text";
			this->tea_stock_text->Size = System::Drawing::Size(193, 21);
			this->tea_stock_text->TabIndex = 6;
			this->tea_stock_text->Text = "���";
			this->tea_stock_text->Click += gcnew System::EventHandler(this, &StockView::tea_stock_text_Click);
			// 
			// edit_stock_btn
			// 
			this->edit_stock_btn->Font = (gcnew System::Drawing::Font(L"�������", 13));
			this->edit_stock_btn->Location = System::Drawing::Point(311, 374);
			this->edit_stock_btn->Name = L"edit_stock_btn";
			this->edit_stock_btn->Size = System::Drawing::Size(347, 45);
			this->edit_stock_btn->TabIndex = 7;
			this->edit_stock_btn->Text = L"��� ����";
			this->edit_stock_btn->UseVisualStyleBackColor = true;
			this->edit_stock_btn->Click += gcnew System::EventHandler(this, &StockView::button1_Click);
			// 
			// StockView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->edit_stock_btn);
			this->Controls->Add(this->tea_stock_text);
			this->Controls->Add(this->latte_stock_text);
			this->Controls->Add(this->ame_stock_text);
			this->Controls->Add(this->listText3);
			this->Controls->Add(this->listText2);
			this->Controls->Add(this->listText1);
			this->Name = L"StockView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� ���";
			this->Load += gcnew System::EventHandler(this, &StockView::StockView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void StockView_Load(System::Object^  sender, System::EventArgs^  e) {
			this->ame_stock_text->Text = Admin::getInstance()->getDrinks()[0].getStock().ToString();
			this->latte_stock_text->Text = Admin::getInstance()->getDrinks()[1].getStock().ToString();
			this->tea_stock_text->Text = Admin::getInstance()->getDrinks()[2].getStock().ToString();
		}

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
			KioskProj::EditStockView edit;
			edit.ShowDialog();
		}
private: System::Void tea_stock_text_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void latte_stock_text_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ame_stock_text_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listText3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listText2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listText1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
