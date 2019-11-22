#pragma once
#include"User.h"
#include"Admin.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FinalView�� ���� ����Դϴ�.
	/// </summary>
	public ref class FinalView : public System::Windows::Forms::Form
	{
	public:
		FinalView(void)
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
		~FinalView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  change_text;
	private: System::Windows::Forms::Button^  button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->change_text = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�������", 15));
			this->label1->Location = System::Drawing::Point(386, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������ �Ϸ�Ǿ����ϴ�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�������", 13));
			this->label2->Location = System::Drawing::Point(386, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�Ž�����";
			// 
			// change_text
			// 
			this->change_text->AutoSize = true;
			this->change_text->Font = (gcnew System::Drawing::Font(L"�������", 13));
			this->change_text->Location = System::Drawing::Point(489, 236);
			this->change_text->Name = L"change_text";
			this->change_text->Size = System::Drawing::Size(115, 21);
			this->change_text->TabIndex = 2;
			this->change_text->Text = L"change_text";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"�������", 12));
			this->button1->Location = System::Drawing::Point(389, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 31);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ȯ��";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FinalView::button1_Click);
			// 
			// FinalView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->change_text);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FinalView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� �Ϸ�";
			this->Load += gcnew System::EventHandler(this, &FinalView::FinalView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
	private:
		System::Void FinalView_Load(System::Object^  sender, System::EventArgs^  e) {
			User* user = User::getInstance();
			Admin* admin = Admin::getInstance();
			// ���� �Ϸ�

			// �Ž�����
			this->change_text->Text = gcnew System::String(to_string(user->getChange()).c_str());
			
			// Admin ���� ����(�̿밴 ����, �Ǹž� ����)
			admin->calInc();
			
			// ��� ����(��� ����, �Ǹ� ���� ����)
			admin->getDrinks()[0].sellDrink(user->getter_my_drink()[0]);
			admin->getDrinks()[1].sellDrink(user->getter_my_drink()[1]);
			admin->getDrinks()[2].sellDrink(user->getter_my_drink()[2]);

			// �¼� ��Ȱ��ȭ
			admin->getSeats()[user->getter_seat_num() - 1].setIsAvailable(false);
		}

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
		}
	};
}
