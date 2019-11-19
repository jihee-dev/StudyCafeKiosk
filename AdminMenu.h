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
	/// AdminMenu�� ���� ����Դϴ�.
	/// </summary>
	public ref class AdminMenu : public System::Windows::Forms::Form {
	public:
		AdminMenu(void) {
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
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
			this->calBtn = (gcnew System::Windows::Forms::Button());
			this->stockBtn = (gcnew System::Windows::Forms::Button());
			this->resetPwBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// calBtn
			// 
			this->calBtn->Font = (gcnew System::Drawing::Font(L"�������", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->calBtn->Location = System::Drawing::Point(220, 75);
			this->calBtn->Name = L"calBtn";
			this->calBtn->Size = System::Drawing::Size(230, 230);
			this->calBtn->TabIndex = 0;
			this->calBtn->Text = L"���� ����";
			this->calBtn->UseVisualStyleBackColor = true;
			this->calBtn->Click += gcnew System::EventHandler(this, &AdminMenu::calBtn_Click);
			// 
			// stockBtn
			// 
			this->stockBtn->Font = (gcnew System::Drawing::Font(L"�������", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->stockBtn->Location = System::Drawing::Point(550, 75);
			this->stockBtn->Name = L"stockBtn";
			this->stockBtn->Size = System::Drawing::Size(230, 230);
			this->stockBtn->TabIndex = 1;
			this->stockBtn->Text = L"��� ����";
			this->stockBtn->UseVisualStyleBackColor = true;
			this->stockBtn->Click += gcnew System::EventHandler(this, &AdminMenu::stockBtn_Click);
			// 
			// resetPwBtn
			// 
			this->resetPwBtn->Font = (gcnew System::Drawing::Font(L"�������", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->resetPwBtn->Location = System::Drawing::Point(220, 375);
			this->resetPwBtn->Name = L"resetPwBtn";
			this->resetPwBtn->Size = System::Drawing::Size(560, 100);
			this->resetPwBtn->TabIndex = 2;
			this->resetPwBtn->Text = L"��й�ȣ �缳��";
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
			this->Text = L"������ �޴�";
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
