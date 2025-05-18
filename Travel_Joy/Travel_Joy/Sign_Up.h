#pragma once
namespace TravelJoy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sign_Up
	/// </summary>
	public ref class Sign_Up : public System::Windows::Forms::Form
	{
	public:
		Sign_Up(void)
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
		~Sign_Up()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ UserName;
	protected:
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::Label^ ConfirmPassowrd;
	private: System::Windows::Forms::Label^ FullName;

	private: System::Windows::Forms::Button^ SignUp;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Button^ Cancel;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Sign_Up::typeid));
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->ConfirmPassowrd = (gcnew System::Windows::Forms::Label());
			this->FullName = (gcnew System::Windows::Forms::Label());
			this->SignUp = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// UserName
			// 
			this->UserName->AutoEllipsis = true;
			this->UserName->AutoSize = true;
			this->UserName->BackColor = System::Drawing::Color::Transparent;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->ForeColor = System::Drawing::SystemColors::ControlText;
			this->UserName->Location = System::Drawing::Point(36, 230);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(110, 24);
			this->UserName->TabIndex = 0;
			this->UserName->Text = L"User Name:";
			// 
			// Password
			// 
			this->Password->AutoEllipsis = true;
			this->Password->AutoSize = true;
			this->Password->BackColor = System::Drawing::Color::Transparent;
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->Location = System::Drawing::Point(39, 268);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(97, 24);
			this->Password->TabIndex = 1;
			this->Password->Text = L"Password:";
			// 
			// ConfirmPassowrd
			// 
			this->ConfirmPassowrd->AutoEllipsis = true;
			this->ConfirmPassowrd->AutoSize = true;
			this->ConfirmPassowrd->BackColor = System::Drawing::Color::Transparent;
			this->ConfirmPassowrd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ConfirmPassowrd->Location = System::Drawing::Point(39, 308);
			this->ConfirmPassowrd->Name = L"ConfirmPassowrd";
			this->ConfirmPassowrd->Size = System::Drawing::Size(167, 24);
			this->ConfirmPassowrd->TabIndex = 2;
			this->ConfirmPassowrd->Text = L"Confirm Password:";
			// 
			// FullName
			// 
			this->FullName->AutoEllipsis = true;
			this->FullName->AutoSize = true;
			this->FullName->BackColor = System::Drawing::Color::Transparent;
			this->FullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FullName->Location = System::Drawing::Point(42, 351);
			this->FullName->Name = L"FullName";
			this->FullName->Size = System::Drawing::Size(102, 24);
			this->FullName->TabIndex = 3;
			this->FullName->Text = L"Full Name:";
			// 
			// SignUp
			// 
			this->SignUp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->SignUp->AutoEllipsis = true;
			this->SignUp->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SignUp->BackColor = System::Drawing::Color::Blue;
			this->SignUp->FlatAppearance->BorderSize = 0;
			this->SignUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUp->ForeColor = System::Drawing::Color::MistyRose;
			this->SignUp->Location = System::Drawing::Point(244, 401);
			this->SignUp->Name = L"SignUp";
			this->SignUp->Padding = System::Windows::Forms::Padding(10);
			this->SignUp->Size = System::Drawing::Size(117, 63);
			this->SignUp->TabIndex = 4;
			this->SignUp->Text = L"Sign Up";
			this->SignUp->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox1->Location = System::Drawing::Point(244, 232);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(263, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Enter User Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(244, 270);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(263, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Password";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox3->Location = System::Drawing::Point(244, 310);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(263, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"Password";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox4->Location = System::Drawing::Point(244, 353);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(263, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"Enter Full Name";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::Color::Transparent;
			this->Logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(563, 183);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 10;
			this->Logo->TabStop = false;
			// 
			// Cancel
			// 
			this->Cancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Cancel->AutoEllipsis = true;
			this->Cancel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Cancel->BackColor = System::Drawing::Color::Transparent;
			this->Cancel->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Cancel->FlatAppearance->BorderSize = 2;
			this->Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel->Location = System::Drawing::Point(390, 401);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Padding = System::Windows::Forms::Padding(10);
			this->Cancel->Size = System::Drawing::Size(117, 63);
			this->Cancel->TabIndex = 11;
			this->Cancel->Text = L"Cancel";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &Sign_Up::Cancel_Click);
			// 
			// Sign_Up
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(563, 491);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->SignUp);
			this->Controls->Add(this->FullName);
			this->Controls->Add(this->ConfirmPassowrd);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->UserName);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Sign_Up";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Travel Joy(Sign_Up)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void SignUp_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
