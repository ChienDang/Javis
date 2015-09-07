#pragma once


namespace Javis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for CalMoney
	/// </summary>
	public ref class JFace : public System::Windows::Forms::Form
	{
	public:
		JFace(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JFace()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:

	protected:















































































































































	private: System::Windows::Forms::Label^  lbTime;
	private: System::Windows::Forms::Timer^  timer1;


	private: System::ComponentModel::IContainer^  components;







































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(JFace::typeid));
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// lbTime
			// 
			this->lbTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTime->Location = System::Drawing::Point(22, 33);
			this->lbTime->MaximumSize = System::Drawing::Size(200, 200);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(102, 25);
			this->lbTime->TabIndex = 60;
			this->lbTime->Text = L": ";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &JFace::timer1_Tick);
			// 
			// JFace
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(155, 97);
			this->Controls->Add(this->lbTime);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(1150, 10);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"JFace";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Javis - Sẵn sàng phục vụ Sếp!";
			this->TransparencyKey = System::Drawing::Color::Green;
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 lbTime->Text = DateTime::Now.ToString("hh:mm:ss tt");
				 
				 if (DateTime::Now.Hour == 12 && DateTime::Now.Minute==30 && DateTime::Now.Second==00) {
					 MessageBox::Show(L"Đã đến giờ nghỉ trưa thưa Sếp!", L"Báo Cáo", MessageBoxButtons::OK,
						 MessageBoxIcon::Information,
						 MessageBoxDefaultButton::Button1,
						 MessageBoxOptions::DefaultDesktopOnly);
				 }
				 if (DateTime::Now.Hour == 23 && DateTime::Now.Minute == 00 && DateTime::Now.Second == 00) {
					 MessageBox::Show(L"Chuẩn bị đi ngủ thôi thưa Sếp!", L"Báo Cáo", MessageBoxButtons::OK,
						 MessageBoxIcon::Information,
						 MessageBoxDefaultButton::Button1,
						 MessageBoxOptions::DefaultDesktopOnly);
				 }
				 if (DateTime::Now.Hour == 23 && DateTime::Now.Minute == 30 && DateTime::Now.Second == 00) {
					 MessageBox::Show(L"Tôi buộc lòng phải tắt máy để Sếp đi ngủ, sorry Sếp!", L"Báo Cáo", MessageBoxButtons::OK,
						 MessageBoxIcon::Information,
						 MessageBoxDefaultButton::Button1,
						 MessageBoxOptions::DefaultDesktopOnly);
				 }
				 if ((DateTime::Now.Hour == 10 || DateTime::Now.Hour == 15 || DateTime::Now.Hour == 17) && DateTime::Now.Minute == 00 && DateTime::Now.Second == 00) {
					 MessageBox::Show(L"Sếp hãy nghỉ tay một chút để tập thể dục cho cổ và lưng đi ạ!", L"Báo Cáo", MessageBoxButtons::OK,
						 MessageBoxIcon::Information,
						 MessageBoxDefaultButton::Button1,
						 MessageBoxOptions::DefaultDesktopOnly);
				 }
				 if (DateTime::Now.Hour == 18 && DateTime::Now.Minute == 00 && DateTime::Now.Second == 00) {
					 MessageBox::Show(L"Sắp đến giờ về, Sếp chuẩn bị hoàn thành nốt công việc đi ạ!", L"Báo Cáo", MessageBoxButtons::OK,
						 MessageBoxIcon::Information,
						 MessageBoxDefaultButton::Button1,
						 MessageBoxOptions::DefaultDesktopOnly);
				 }
	}
	
	};
}
