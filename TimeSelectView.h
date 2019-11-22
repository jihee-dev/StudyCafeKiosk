#pragma once
#include"User.h"
#include"Admin.h"
#include<msclr/marshal_cppstd.h>
#include"DrinkSelectView.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// TimeSelectView�� ���� ����Դϴ�.
	/// </summary>
	public ref class TimeSelectView : public System::Windows::Forms::Form
	{
	public:
		TimeSelectView(void)
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
		~TimeSelectView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  timeInput;
	protected:
	private: System::Windows::Forms::Label^  label;

	private: System::Windows::Forms::Button^  submitBtn;
	private: System::Windows::Forms::Label^  notice_text;
	private: System::Windows::Forms::Label^  label1;

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
			this->timeInput = (gcnew System::Windows::Forms::TextBox());
			this->label = (gcnew System::Windows::Forms::Label());
			this->submitBtn = (gcnew System::Windows::Forms::Button());
			this->notice_text = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timeInput
			// 
			this->timeInput->Font = (gcnew System::Drawing::Font(L"�������", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->timeInput->Location = System::Drawing::Point(364, 225);
			this->timeInput->Name = L"timeInput";
			this->timeInput->Size = System::Drawing::Size(191, 27);
			this->timeInput->TabIndex = 0;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"�������", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label->Location = System::Drawing::Point(360, 173);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(265, 21);
			this->label->TabIndex = 1;
			this->label->Text = L"�̿��Ͻ� �ð��� �Է��� �ּ���.";
			// 
			// submitBtn
			// 
			this->submitBtn->Font = (gcnew System::Drawing::Font(L"�������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->submitBtn->Location = System::Drawing::Point(573, 225);
			this->submitBtn->Name = L"submitBtn";
			this->submitBtn->Size = System::Drawing::Size(78, 27);
			this->submitBtn->TabIndex = 3;
			this->submitBtn->Text = L"Ȯ��";
			this->submitBtn->UseVisualStyleBackColor = true;
			this->submitBtn->Click += gcnew System::EventHandler(this, &TimeSelectView::submitBtn_Click);
			// 
			// notice_text
			// 
			this->notice_text->AutoSize = true;
			this->notice_text->Font = (gcnew System::Drawing::Font(L"�������", 12));
			this->notice_text->Location = System::Drawing::Point(360, 276);
			this->notice_text->Name = L"notice_text";
			this->notice_text->Size = System::Drawing::Size(221, 19);
			this->notice_text->TabIndex = 4;
			this->notice_text->Text = L"�̿� �ð��� �ִ� 12�ð��Դϴ�";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�������", 10));
			this->label1->Location = System::Drawing::Point(503, 314);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"�̿� ���: 2000��/�ð�";
			// 
			// TimeSelectView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->notice_text);
			this->Controls->Add(this->submitBtn);
			this->Controls->Add(this->label);
			this->Controls->Add(this->timeInput);
			this->Name = L"TimeSelectView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�ð��� ����";
			this->Load += gcnew System::EventHandler(this, &TimeSelectView::TimeSelectView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void TimeSelectView_Load(System::Object^  sender, System::EventArgs^  e) {}
		System::Void submitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context context;
			int t = stoi(context.marshal_as<std::string>(this->timeInput->Text->ToString()));
			
			if ((t <= 0) || (t > 12)) {
				this->notice_text->ForeColor = System::Drawing::Color::Firebrick;
				this->notice_text->Text = "1���� 12 ������ ���ڸ� �Է��� �ּ���.";
			}

			else {
				User::getInstance()->setter_time(t);
				this->Visible = false;
				KioskProj::DrinkSelectView drinkView;
				drinkView.ShowDialog();
			}
		}
};
}
