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
	/// FinalView에 대한 요약입니다.
	/// </summary>
	public ref class FinalView : public System::Windows::Forms::Form
	{
	public:
		FinalView(void)
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->change_text = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 15));
			this->label1->Location = System::Drawing::Point(386, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"결제가 완료되었습니다";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->label2->Location = System::Drawing::Point(386, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"거스름돈";
			// 
			// change_text
			// 
			this->change_text->AutoSize = true;
			this->change_text->Font = (gcnew System::Drawing::Font(L"나눔고딕", 13));
			this->change_text->Location = System::Drawing::Point(489, 236);
			this->change_text->Name = L"change_text";
			this->change_text->Size = System::Drawing::Size(115, 21);
			this->change_text->TabIndex = 2;
			this->change_text->Text = L"change_text";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12));
			this->button1->Location = System::Drawing::Point(389, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 31);
			this->button1->TabIndex = 3;
			this->button1->Text = L"확인";
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
			this->Text = L"결제 완료";
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
			// 결제 완료

			// 거스름돈
			this->change_text->Text = gcnew System::String(to_string(user->getChange()).c_str());
			
			// Admin 정산 수정(이용객 증가, 판매액 증가)
			admin->calInc();
			
			// 재고 수정(재고 감소, 판매 개수 증가)
			admin->getDrinks()[0].sellDrink(user->getter_my_drink()[0]);
			admin->getDrinks()[1].sellDrink(user->getter_my_drink()[1]);
			admin->getDrinks()[2].sellDrink(user->getter_my_drink()[2]);

			// 좌석 비활성화
			admin->getSeats()[user->getter_seat_num() - 1].setIsAvailable(false);
		}

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Visible = false;
		}
	};
}
