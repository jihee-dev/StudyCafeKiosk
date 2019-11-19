#pragma once
#include"Admin.h"
#include"ResetPwView.h"
#include"CalView.h"
#include"StockView.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AdminMenu에 대한 요약입니다.
	/// </summary>
	public ref class AdminMenu : public System::Windows::Forms::Form {
	public:
		AdminMenu(void) {
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~AdminMenu() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  calBtn;
	protected:
	private: System::Windows::Forms::Button^  stockBtn;
	private: System::Windows::Forms::Button^  resetPwBtn;

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
			this->calBtn = (gcnew System::Windows::Forms::Button());
			this->stockBtn = (gcnew System::Windows::Forms::Button());
			this->resetPwBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// calBtn
			// 
			this->calBtn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->calBtn->Location = System::Drawing::Point(220, 75);
			this->calBtn->Name = L"calBtn";
			this->calBtn->Size = System::Drawing::Size(230, 230);
			this->calBtn->TabIndex = 0;
			this->calBtn->Text = L"정산 관리";
			this->calBtn->UseVisualStyleBackColor = true;
			this->calBtn->Click += gcnew System::EventHandler(this, &AdminMenu::calBtn_Click);
			// 
			// stockBtn
			// 
			this->stockBtn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->stockBtn->Location = System::Drawing::Point(550, 75);
			this->stockBtn->Name = L"stockBtn";
			this->stockBtn->Size = System::Drawing::Size(230, 230);
			this->stockBtn->TabIndex = 1;
			this->stockBtn->Text = L"재고 관리";
			this->stockBtn->UseVisualStyleBackColor = true;
			this->stockBtn->Click += gcnew System::EventHandler(this, &AdminMenu::stockBtn_Click);
			// 
			// resetPwBtn
			// 
			this->resetPwBtn->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->resetPwBtn->Location = System::Drawing::Point(220, 375);
			this->resetPwBtn->Name = L"resetPwBtn";
			this->resetPwBtn->Size = System::Drawing::Size(560, 100);
			this->resetPwBtn->TabIndex = 2;
			this->resetPwBtn->Text = L"비밀번호 재설정";
			this->resetPwBtn->UseVisualStyleBackColor = true;
			this->resetPwBtn->Click += gcnew System::EventHandler(this, &AdminMenu::resetPwBtn_Click);
			// 
			// AdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Controls->Add(this->resetPwBtn);
			this->Controls->Add(this->stockBtn);
			this->Controls->Add(this->calBtn);
			this->Name = L"AdminMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"관리자 메뉴";
			this->Load += gcnew System::EventHandler(this, &AdminMenu::AdminMenu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void AdminMenu_Load(System::Object^  sender, System::EventArgs^  e) {
		
		}
		
		System::Void calBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			KioskProj::CalView calView;
			calView.ShowDialog();
		}

		System::Void stockBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			KioskProj::StockView stockView;
			stockView.ShowDialog();
		}
		
		System::Void resetPwBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			KioskProj::ResetPwView resetPwView;
			resetPwView.ShowDialog();
		}
	};
}
