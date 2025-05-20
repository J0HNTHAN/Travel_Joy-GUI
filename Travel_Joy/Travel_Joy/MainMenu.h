#pragma once

namespace TravelJoy {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MainMenu : public System::Windows::Forms::Form
    {
    public:
        MainMenu(void)
        {
            InitializeComponent();
            this->Icon = gcnew System::Drawing::Icon("expedia_icon.ico");
        }

    protected:
        ~MainMenu()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ lblWelcome;
        System::Windows::Forms::Button^ btnProfile;
        System::Windows::Forms::Button^ btnMakeItinerary;
        System::Windows::Forms::Button^ btnListItineraries;
        System::Windows::Forms::Button^ btnLogout;
        System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ Main_Menu;




        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainMenu::typeid));
            this->lblWelcome = (gcnew System::Windows::Forms::Label());
            this->btnProfile = (gcnew System::Windows::Forms::Button());
            this->btnMakeItinerary = (gcnew System::Windows::Forms::Button());
            this->btnListItineraries = (gcnew System::Windows::Forms::Button());
            this->btnLogout = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->Main_Menu = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // lblWelcome
            // 
            this->lblWelcome->AutoSize = true;
            this->lblWelcome->BackColor = System::Drawing::Color::Transparent;
            this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblWelcome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->lblWelcome->Location = System::Drawing::Point(30, 100);
            this->lblWelcome->Name = L"lblWelcome";
            this->lblWelcome->Size = System::Drawing::Size(113, 21);
            this->lblWelcome->TabIndex = 0;
            this->lblWelcome->Text = L"Welcome, User";
            // 
            // btnProfile
            // 
            this->btnProfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnProfile->FlatAppearance->BorderSize = 0;
            this->btnProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnProfile->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnProfile->ForeColor = System::Drawing::Color::White;
            this->btnProfile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnProfile->Location = System::Drawing::Point(30, 150);
            this->btnProfile->Name = L"btnProfile";
            this->btnProfile->Size = System::Drawing::Size(250, 40);
            this->btnProfile->TabIndex = 1;
            this->btnProfile->Text = L"  View My Profile";
            this->btnProfile->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
            this->btnProfile->UseVisualStyleBackColor = false;
            this->btnProfile->Click += gcnew System::EventHandler(this, &MainMenu::btnProfile_Click);
            // 
            // btnMakeItinerary
            // 
            this->btnMakeItinerary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnMakeItinerary->FlatAppearance->BorderSize = 0;
            this->btnMakeItinerary->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMakeItinerary->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnMakeItinerary->ForeColor = System::Drawing::Color::White;
            this->btnMakeItinerary->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnMakeItinerary->Location = System::Drawing::Point(30, 200);
            this->btnMakeItinerary->Name = L"btnMakeItinerary";
            this->btnMakeItinerary->Size = System::Drawing::Size(250, 40);
            this->btnMakeItinerary->TabIndex = 2;
            this->btnMakeItinerary->Text = L"  Create New Itinerary";
            this->btnMakeItinerary->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
            this->btnMakeItinerary->UseVisualStyleBackColor = false;
            this->btnMakeItinerary->Click += gcnew System::EventHandler(this, &MainMenu::btnMakeItinerary_Click);
            // 
            // btnListItineraries
            // 
            this->btnListItineraries->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnListItineraries->FlatAppearance->BorderSize = 0;
            this->btnListItineraries->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnListItineraries->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnListItineraries->ForeColor = System::Drawing::Color::White;
            this->btnListItineraries->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnListItineraries->Location = System::Drawing::Point(30, 250);
            this->btnListItineraries->Name = L"btnListItineraries";
            this->btnListItineraries->Size = System::Drawing::Size(250, 40);
            this->btnListItineraries->TabIndex = 3;
            this->btnListItineraries->Text = L"  My Itineraries";
            this->btnListItineraries->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
            this->btnListItineraries->UseVisualStyleBackColor = false;
            this->btnListItineraries->Click += gcnew System::EventHandler(this, &MainMenu::btnListItineraries_Click);
            // 
            // btnLogout
            // 
            this->btnLogout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->btnLogout->FlatAppearance->BorderSize = 0;
            this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnLogout->ForeColor = System::Drawing::Color::White;
            this->btnLogout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnLogout->Location = System::Drawing::Point(30, 350);
            this->btnLogout->Name = L"btnLogout";
            this->btnLogout->Size = System::Drawing::Size(250, 40);
            this->btnLogout->TabIndex = 4;
            this->btnLogout->Text = L"  Logout";
            this->btnLogout->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
            this->btnLogout->UseVisualStyleBackColor = false;
            this->btnLogout->Click += gcnew System::EventHandler(this, &MainMenu::btnLogout_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 78);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(503, 423);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 5;
            this->pictureBox1->TabStop = false;
            // 
            // Main_Menu
            // 
            this->Main_Menu->AllowDrop = true;
            this->Main_Menu->AutoEllipsis = true;
            this->Main_Menu->BackColor = System::Drawing::Color::Transparent;
            this->Main_Menu->Dock = System::Windows::Forms::DockStyle::Top;
            this->Main_Menu->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(178)));
            this->Main_Menu->ForeColor = System::Drawing::Color::White;
            this->Main_Menu->Location = System::Drawing::Point(0, 0);
            this->Main_Menu->Name = L"Main_Menu";
            this->Main_Menu->Size = System::Drawing::Size(503, 78);
            this->Main_Menu->TabIndex = 6;
            this->Main_Menu->Text = L"Main Menu";
            this->Main_Menu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(503, 501);
            this->Controls->Add(this->btnLogout);
            this->Controls->Add(this->btnListItineraries);
            this->Controls->Add(this->btnMakeItinerary);
            this->Controls->Add(this->btnProfile);
            this->Controls->Add(this->lblWelcome);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->Main_Menu);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"MainForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Travel Joy( Main Menu )";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void btnProfile_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void btnMakeItinerary_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnListItineraries_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
