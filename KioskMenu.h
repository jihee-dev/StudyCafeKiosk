#pragma once
#include<iostream>
#include"AdminLogin.h"
#include"SeatSelectView.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// KioskMenu에 대한 요약입니다.
	/// </summary>
	public ref class KioskMenu : public System::Windows::Forms::Form {
	public:
		KioskMenu(void)
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
		~KioskMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  orderBtn;
	protected:
	private: System::Windows::Forms::Button^  adminBtn;
	private: System::Windows::Forms::Button^  exitBtn;

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
			this->orderBtn = (gcnew System::Windows::Forms::Button());
			this->adminBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// orderBtn
			// 
			this->orderBtn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->orderBtn->Location = System::Drawing::Point(300, 75);
			this->orderBtn->Name = L"orderBtn";
			this->orderBtn->Size = System::Drawing::Size(400, 100);
			this->orderBtn->TabIndex = 0;
			this->orderBtn->Text = L"주문하기";
			this->orderBtn->UseVisualStyleBackColor = true;
			this->orderBtn->Click += gcnew System::EventHandler(this, &KioskMenu::orderBtn_Click);
			// 
			// adminBtn
			// 
			this->adminBtn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->adminBtn->Location = System::Drawing::Point(300, 225);
			this->adminBtn->Name = L"adminBtn";
			this->adminBtn->Size = System::Drawing::Size(400, 100);
			this->adminBtn->TabIndex = 1;
			this->adminBtn->Text = L"관리자 모드";
			this->adminBtn->UseVisualStyleBackColor = true;
			this->adminBtn->Click += gcnew System::EventHandler(this, &KioskMenu::adminBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->exitBtn->Location = System::Drawing::Point(300, 375);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(400, 100);
			this->exitBtn->TabIndex = 2;
			this->exitBtn->Text = L"종료하기";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &KioskMenu::exitBtn_Click);
			// 
			// KioskMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->adminBtn);
			this->Controls->Add(this->orderBtn);
			this->Name = L"KioskMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"스터디 카페 키오스크";
			this->Load += gcnew System::EventHandler(this, &KioskMenu::KioskMenu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void KioskMenu_Load(System::Object^  sender, System::EventArgs^  e) {
		}

		System::Void orderBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			KioskProj::SeatSelectView seatView;
			seatView.ShowDialog();
		}

		System::Void adminBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			KioskProj::AdminLogin loginView;
			loginView.ShowDialog();
		}

		System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			exit(0);
		}
	
};
}
