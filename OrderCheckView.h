#pragma once

namespace KioskProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// OrderCheckView�� ���� ����Դϴ�.
	/// </summary>
	public ref class OrderCheckView : public System::Windows::Forms::Form
	{
	public:
		OrderCheckView(void)
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
		~OrderCheckView()
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
			// 
			// OrderCheckView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Name = L"OrderCheckView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OrderCheckView";
			this->Load += gcnew System::EventHandler(this, &OrderCheckView::OrderCheckView_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OrderCheckView_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
