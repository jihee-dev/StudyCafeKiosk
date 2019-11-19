#pragma once
#include<msclr/marshal_cppstd.h>
#include"Admin.h"
#include"AdminMenu.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AdminLogin에 대한 요약입니다.
	/// </summary>
	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
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
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  enter;
	private: System::Windows::Forms::TextBox^  pw_text;
	private: System::Windows::Forms::Button^  login;
	protected:

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
			this->enter = (gcnew System::Windows::Forms::Label());
			this->pw_text = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// enter
			// 
			this->enter->AutoSize = true;
			this->enter->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->enter->Location = System::Drawing::Point(324, 207);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(284, 23);
			this->enter->TabIndex = 0;
			this->enter->Text = L"Please Enter Admin Password";
			// 
			// pw_text
			// 
			this->pw_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->pw_text->Location = System::Drawing::Point(328, 252);
			this->pw_text->Name = L"pw_text";
			this->pw_text->Size = System::Drawing::Size(207, 30);
			this->pw_text->TabIndex = 1;
			// 
			// login
			// 
			this->login->Font = (gcnew System::Drawing::Font(L"나눔고딕", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->login->Location = System::Drawing::Point(554, 252);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(97, 30);
			this->login->TabIndex = 2;
			this->login->Text = L"Submit";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &AdminLogin::login_Click);
			// 
			// AdminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->login);
			this->Controls->Add(this->pw_text);
			this->Controls->Add(this->enter);
			this->Name = L"AdminLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminLogin";
			this->Load += gcnew System::EventHandler(this, &AdminLogin::AdminLogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void AdminLogin_Load(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context context;
			if (Admin::getInstance()->logIn(context.marshal_as<std::string>(this->pw_text->Text->ToString()))) {
				this->enter->Text = "로그인 성공";
				this->Visible = false;
				KioskProj::AdminMenu adminMenu;
				adminMenu.ShowDialog();
			}
			else {
				this->enter->Text = "다시 입력해 주세요";
			}
		}
	};
}
