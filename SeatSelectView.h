#pragma once

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Collections;

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

			ArrayList^ btnArr = gcnew ArrayList();


			// 
			// SeatSelectView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"SeatSelectView";
			this->Text = L"SeatSelectView";
			this->Load += gcnew System::EventHandler(this, &SeatSelectView::SeatSelectView_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void SeatSelectView_Load(System::Object^  sender, System::EventArgs^  e) {
			
		}
	};
}
