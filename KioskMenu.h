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
	/// KioskMenu�� ���� ����Դϴ�.
	/// </summary>
	public ref class KioskMenu : public System::Windows::Forms::Form {
	public:
		KioskMenu(void)
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
			this->orderBtn = (gcnew System::Windows::Forms::Button());
			this->adminBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// orderBtn
			// 
			this->orderBtn->Font = (gcnew System::Drawing::Font(L"�������", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->orderBtn->Location = System::Drawing::Point(300, 75);
			this->orderBtn->Name = L"orderBtn";
			this->orderBtn->Size = System::Drawing::Size(400, 100);
			this->orderBtn->TabIndex = 0;
			this->orderBtn->Text = L"�ֹ��ϱ�";
			this->orderBtn->UseVisualStyleBackColor = true;
			this->orderBtn->Click += gcnew System::EventHandler(this, &KioskMenu::orderBtn_Click);
			// 
			// adminBtn
			// 
			this->adminBtn->Font = (gcnew System::Drawing::Font(L"�������", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->adminBtn->Location = System::Drawing::Point(300, 225);
			this->adminBtn->Name = L"adminBtn";
			this->adminBtn->Size = System::Drawing::Size(400, 100);
			this->adminBtn->TabIndex = 1;
			this->adminBtn->Text = L"������ ���";
			this->adminBtn->UseVisualStyleBackColor = true;
			this->adminBtn->Click += gcnew System::EventHandler(this, &KioskMenu::adminBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"�������", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->exitBtn->Location = System::Drawing::Point(300, 375);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(400, 100);
			this->exitBtn->TabIndex = 2;
			this->exitBtn->Text = L"�����ϱ�";
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
			this->Text = L"���͵� ī�� Ű����ũ";
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
