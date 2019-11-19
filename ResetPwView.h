#pragma once
#include<string>
#include<msclr/marshal_cppstd.h>
#include"Admin.h"

using namespace std;

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ResetPwView�� ���� ����Դϴ�.
	/// </summary>
	public ref class ResetPwView : public System::Windows::Forms::Form
	{
	public:
		ResetPwView(void)
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
		~ResetPwView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  textLabel;
	protected:
	private: System::Windows::Forms::TextBox^  newPw_text;
	private: System::Windows::Forms::Button^  updateBtn;

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
			this->textLabel = (gcnew System::Windows::Forms::Label());
			this->newPw_text = (gcnew System::Windows::Forms::TextBox());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textLabel
			// 
			this->textLabel->AutoSize = true;
			this->textLabel->Font = (gcnew System::Drawing::Font(L"�������", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textLabel->Location = System::Drawing::Point(324, 207);
			this->textLabel->Name = L"textLabel";
			this->textLabel->Size = System::Drawing::Size(284, 23);
			this->textLabel->TabIndex = 0;
			this->textLabel->Text = L"Enter New Admin Password";

			// 
			// newPw_text
			// 
			this->newPw_text->Font = (gcnew System::Drawing::Font(L"�������", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->newPw_text->Location = System::Drawing::Point(328, 252);
			this->newPw_text->Name = L"newPw_text";
			this->newPw_text->Size = System::Drawing::Size(207, 30);
			this->newPw_text->TabIndex = 1;

			// 
			// updateBtn
			// 
			this->updateBtn->Font = (gcnew System::Drawing::Font(L"�������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->updateBtn->Location = System::Drawing::Point(554, 252);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(97, 30);
			this->updateBtn->TabIndex = 2;
			this->updateBtn->Text = L"Ȯ��";
			this->updateBtn->UseVisualStyleBackColor = true;
			this->updateBtn->Click += gcnew System::EventHandler(this, &ResetPwView::updateBtn_Click);
			// 
			// ResetPwView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->updateBtn);
			this->Controls->Add(this->newPw_text);
			this->Controls->Add(this->textLabel);
			this->Name = L"ResetPwView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ ��й�ȣ �缳��";
			this->Load += gcnew System::EventHandler(this, &ResetPwView::ResetPwView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void ResetPwView_Load(System::Object^  sender, System::EventArgs^  e) {
		
		}
		System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context context;
			string newPw = context.marshal_as<std::string>(this->newPw_text->Text->ToString());

			Admin::getInstance()->setPw(newPw);

			this->Visible = false;
		}
	};
}
