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
	/// ResetPwView에 대한 요약입니다.
	/// </summary>
	public ref class ResetPwView : public System::Windows::Forms::Form
	{
	public:
		ResetPwView(void)
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
			this->textLabel = (gcnew System::Windows::Forms::Label());
			this->newPw_text = (gcnew System::Windows::Forms::TextBox());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textLabel
			// 
			this->textLabel->AutoSize = true;
			this->textLabel->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->textLabel->Location = System::Drawing::Point(324, 207);
			this->textLabel->Name = L"textLabel";
			this->textLabel->Size = System::Drawing::Size(284, 23);
			this->textLabel->TabIndex = 0;
			this->textLabel->Text = L"Enter New Admin Password";

			// 
			// newPw_text
			// 
			this->newPw_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->newPw_text->Location = System::Drawing::Point(328, 252);
			this->newPw_text->Name = L"newPw_text";
			this->newPw_text->Size = System::Drawing::Size(207, 30);
			this->newPw_text->TabIndex = 1;

			// 
			// updateBtn
			// 
			this->updateBtn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->updateBtn->Location = System::Drawing::Point(554, 252);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(97, 30);
			this->updateBtn->TabIndex = 2;
			this->updateBtn->Text = L"확인";
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
			this->Text = L"관리자 비밀번호 재설정";
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
