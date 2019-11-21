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
	/// SeatSelectView에 대한 요약입니다.
	/// </summary>
	public ref class SeatSelectView : public System::Windows::Forms::Form
	{
	public:
		SeatSelectView(void)
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
				this->btns[i]->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
				this->btns[i]->TabIndex = i;
				this->btns[i]->Name = "button" + i.ToString();
				this->btns[i]->Text = (i+1).ToString();
				this->btns[i]->UseVisualStyleBackColor = true;
				this->Controls->Add(this->btns[i]);
				this->btns[i]->Click += gcnew System::EventHandler(this, &SeatSelectView::seatBtn_Click);

				if (Admin::getInstance()->getSeats()[i].getIsAvailable()) { // 버튼 활성화
					this->btns[i]->BackColor = System::Drawing::Color::LightGreen;
					this->btns[i]->Enabled = true;
				}
				else { // 버튼 비활성화
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
