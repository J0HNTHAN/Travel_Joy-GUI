#pragma once
#include"Sign_Up.h"
namespace TravelJoy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Log_in
	/// </summary>
	public ref class Log_in : public System::Windows::Forms::Form
	{
	public:
		Log_in(void)
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
		~Log_in()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SignUp;
	protected:

	private: System::Windows::Forms::TextBox^ LogIn_Pass;
	protected:

	private: System::Windows::Forms::TextBox^ LogIn_UserName;
	private: System::Windows::Forms::Button^ LogIn;


	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::Label^ UserName;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ RemeberMe;
	private: System::Windows::Forms::LinkLabel^ ForgetPass;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Log_in::typeid));
			this->SignUp = (gcnew System::Windows::Forms::Button());
			this->LogIn_Pass = (gcnew System::Windows::Forms::TextBox());
			this->LogIn_UserName = (gcnew System::Windows::Forms::TextBox());
			this->LogIn = (gcnew System::Windows::Forms::Button());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->RemeberMe = (gcnew System::Windows::Forms::CheckBox());
			this->ForgetPass = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// SignUp
			// 
			this->SignUp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->SignUp->AutoEllipsis = true;
			this->SignUp->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->SignUp->BackColor = System::Drawing::Color::Transparent;
			this->SignUp->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->SignUp->FlatAppearance->BorderSize = 2;
			this->SignUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->SignUp->Location = System::Drawing::Point(376, 378);
			this->SignUp->Name = L"SignUp";
			this->SignUp->Padding = System::Windows::Forms::Padding(10);
			this->SignUp->Size = System::Drawing::Size(117, 63);
			this->SignUp->TabIndex = 17;
			this->SignUp->Text = L"Sign Up";
			this->SignUp->UseVisualStyleBackColor = false;
			this->SignUp->Click += gcnew System::EventHandler(this, &Log_in::SignUp_Click);
			// 
			// LogIn_Pass
			// 
			this->LogIn_Pass->ForeColor = System::Drawing::Color::DarkGray;
			this->LogIn_Pass->Location = System::Drawing::Point(217, 302);
			this->LogIn_Pass->Name = L"LogIn_Pass";
			this->LogIn_Pass->Size = System::Drawing::Size(280, 20);
			this->LogIn_Pass->TabIndex = 16;
			this->LogIn_Pass->Text = L"Password";
			this->LogIn_Pass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->LogIn_Pass->UseSystemPasswordChar = true;
			// 
			// LogIn_UserName
			// 
			this->LogIn_UserName->ForeColor = System::Drawing::Color::DarkGray;
			this->LogIn_UserName->Location = System::Drawing::Point(217, 264);
			this->LogIn_UserName->Name = L"LogIn_UserName";
			this->LogIn_UserName->Size = System::Drawing::Size(280, 20);
			this->LogIn_UserName->TabIndex = 15;
			this->LogIn_UserName->Text = L"Enter User Name";
			this->LogIn_UserName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// LogIn
			// 
			this->LogIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->LogIn->AutoEllipsis = true;
			this->LogIn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->LogIn->BackColor = System::Drawing::Color::Blue;
			this->LogIn->FlatAppearance->BorderSize = 0;
			this->LogIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogIn->ForeColor = System::Drawing::Color::MistyRose;
			this->LogIn->Location = System::Drawing::Point(217, 378);
			this->LogIn->Name = L"LogIn";
			this->LogIn->Padding = System::Windows::Forms::Padding(10);
			this->LogIn->Size = System::Drawing::Size(117, 63);
			this->LogIn->TabIndex = 14;
			this->LogIn->Text = L"Log In";
			this->LogIn->UseVisualStyleBackColor = false;
			// 
			// Password
			// 
			this->Password->AutoEllipsis = true;
			this->Password->AutoSize = true;
			this->Password->BackColor = System::Drawing::Color::Transparent;
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->Location = System::Drawing::Point(49, 300);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(97, 24);
			this->Password->TabIndex = 13;
			this->Password->Text = L"Password:";
			// 
			// UserName
			// 
			this->UserName->AutoEllipsis = true;
			this->UserName->AutoSize = true;
			this->UserName->BackColor = System::Drawing::Color::Transparent;
			this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName->ForeColor = System::Drawing::SystemColors::ControlText;
			this->UserName->Location = System::Drawing::Point(46, 262);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(110, 24);
			this->UserName->TabIndex = 12;
			this->UserName->Text = L"User Name:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(531, 242);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// RemeberMe
			// 
			this->RemeberMe->AutoSize = true;
			this->RemeberMe->BackColor = System::Drawing::Color::Transparent;
			this->RemeberMe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemeberMe->Location = System::Drawing::Point(217, 345);
			this->RemeberMe->Name = L"RemeberMe";
			this->RemeberMe->Size = System::Drawing::Size(116, 20);
			this->RemeberMe->TabIndex = 19;
			this->RemeberMe->Text = L"Remember Me";
			this->RemeberMe->UseVisualStyleBackColor = false;
			// 
			// ForgetPass
			// 
			this->ForgetPass->AutoSize = true;
			this->ForgetPass->BackColor = System::Drawing::Color::Transparent;
			this->ForgetPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForgetPass->Location = System::Drawing::Point(377, 345);
			this->ForgetPass->Name = L"ForgetPass";
			this->ForgetPass->Size = System::Drawing::Size(116, 16);
			this->ForgetPass->TabIndex = 20;
			this->ForgetPass->TabStop = true;
			this->ForgetPass->Text = L"Forget Password\?";
			// 
			// Log_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(531, 481);
			this->Controls->Add(this->ForgetPass);
			this->Controls->Add(this->RemeberMe);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SignUp);
			this->Controls->Add(this->LogIn_Pass);
			this->Controls->Add(this->LogIn_UserName);
			this->Controls->Add(this->LogIn);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->UserName);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Log_in";
			this->Text = L"Travel Joy(Log_in)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignUp_Click(System::Object^ sender, System::EventArgs^ e) {
		Sign_Up^ sign_up = gcnew Sign_Up();
		sign_up->Show();
		this->Hide();
	}
};
}
