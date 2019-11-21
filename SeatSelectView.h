#pragma once
#include"TimeSelectView.h"
#include"Admin.h"

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cli;

	/// <summary>
	/// SeatSelectView�� ���� ����Դϴ�.
	/// </summary>
	public ref class SeatSelectView : public System::Windows::Forms::Form
	{
	public:
		SeatSelectView(void)
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
		~SeatSelectView()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		cli::array<System::Windows::Forms::Button^>^ btns;

	protected:

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
			this->SuspendLayout();
			// 
			// SeatSelectView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 550);
			this->Name = L"SeatSelectView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SeatSelectView";
			this->Load += gcnew System::EventHandler(this, &SeatSelectView::SeatSelectView_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void SeatSelectView_Load(System::Object^  sender, System::EventArgs^  e) {
			this->btns = gcnew cli::array<Button^>(30);

			for (int i = 0; i < 30; i++) {
				this->btns[i] = gcnew System::Windows::Forms::Button();
				this->btns[i]->Location = System::Drawing::Point(130 + (133 * (i % 6)), 77 + (85 * (i / 6)));
				this->btns[i]->Size = System::Drawing::Size(75, 55);
				this->btns[i]->Font = (gcnew System::Drawing::Font(L"�������", 13));
				this->btns[i]->TabIndex = i;
				this->btns[i]->Name = "button" + i.ToString();
				this->btns[i]->Text = (i+1).ToString();
				this->btns[i]->UseVisualStyleBackColor = true;
				this->Controls->Add(this->btns[i]);
				this->btns[i]->Click += gcnew System::EventHandler(this, &SeatSelectView::seatBtn_Click);

				if (Admin::getInstance()->getSeats()[i].getIsAvailable()) { // ��ư Ȱ��ȭ
					this->btns[i]->BackColor = System::Drawing::Color::LightGreen;
					this->btns[i]->Enabled = true;
				}
				else { // ��ư ��Ȱ��ȭ
					this->btns[i]->BackColor = System::Drawing::Color::LightCoral;
					this->btns[i]->Enabled = false;
				}				
			}
		}
	private:
		void seatBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			Button^ tempBtn = safe_cast<Button^>(sender);
			int idx = tempBtn->TabIndex;

			Admin::getInstance()->getSeats()[idx].setIsAvailable(false);

			this->Visible = false;
			KioskProj::TimeSelectView timeView;
			timeView.ShowDialog();
		}
	};
}
