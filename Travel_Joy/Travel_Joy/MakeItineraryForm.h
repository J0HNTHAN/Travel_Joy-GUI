#pragma once

namespace TravelJoy {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MakeItineraryForm : public System::Windows::Forms::Form
    {
    public:
        MakeItineraryForm(void)
        {
            InitializeComponent();
            this->Icon = gcnew System::Drawing::Icon("expedia_icon.ico");
            this->Text = "Expedia - Create Your Dream Trip";
            this->BackColor = Color::FromArgb(240, 240, 240);
            this->Font = gcnew System::Drawing::Font("Segoe UI", 9.0F);
            this->StartPosition = FormStartPosition::CenterScreen;
        }

    protected:
        ~MakeItineraryForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:



        System::Windows::Forms::Button^ btnAddFlight;
        System::Windows::Forms::Button^ btnAddHotel;
        System::Windows::Forms::Button^ btnDone;
        System::Windows::Forms::Button^ btnCancel;
        System::Windows::Forms::Panel^ panelSummary;
        System::Windows::Forms::Label^ lblFlightCount;
        System::Windows::Forms::Label^ lblHotelCount;
        System::Windows::Forms::Label^ lblTotalPrice;
    private: System::Windows::Forms::Label^ lblTitle;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MakeItineraryForm::typeid));
            this->btnAddFlight = (gcnew System::Windows::Forms::Button());
            this->btnAddHotel = (gcnew System::Windows::Forms::Button());
            this->btnDone = (gcnew System::Windows::Forms::Button());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->panelSummary = (gcnew System::Windows::Forms::Panel());
            this->lblTotalPrice = (gcnew System::Windows::Forms::Label());
            this->lblHotelCount = (gcnew System::Windows::Forms::Label());
            this->lblFlightCount = (gcnew System::Windows::Forms::Label());
            this->lblTitle = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panelSummary->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // btnAddFlight
            // 
            this->btnAddFlight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnAddFlight->FlatAppearance->BorderSize = 0;
            this->btnAddFlight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAddFlight->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnAddFlight->ForeColor = System::Drawing::Color::White;
            this->btnAddFlight->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnAddFlight->Location = System::Drawing::Point(125, 158);
            this->btnAddFlight->Name = L"btnAddFlight";
            this->btnAddFlight->Size = System::Drawing::Size(180, 40);
            this->btnAddFlight->TabIndex = 1;
            this->btnAddFlight->Text = L"  Add Flight";
            this->btnAddFlight->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
            this->btnAddFlight->UseVisualStyleBackColor = false;
            this->btnAddFlight->Click += gcnew System::EventHandler(this, &MakeItineraryForm::btnAddFlight_Click);
            // 
            // btnAddHotel
            // 
            this->btnAddHotel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnAddHotel->FlatAppearance->BorderSize = 0;
            this->btnAddHotel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAddHotel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnAddHotel->ForeColor = System::Drawing::Color::White;
            this->btnAddHotel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btnAddHotel->Location = System::Drawing::Point(125, 218);
            this->btnAddHotel->Name = L"btnAddHotel";
            this->btnAddHotel->Size = System::Drawing::Size(180, 40);
            this->btnAddHotel->TabIndex = 2;
            this->btnAddHotel->Text = L"  Add Hotel";
            this->btnAddHotel->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
            this->btnAddHotel->UseVisualStyleBackColor = false;
            this->btnAddHotel->Click += gcnew System::EventHandler(this, &MakeItineraryForm::btnAddHotel_Click);
            // 
            // btnDone
            // 
            this->btnDone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->btnDone->FlatAppearance->BorderSize = 0;
            this->btnDone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnDone->ForeColor = System::Drawing::Color::White;
            this->btnDone->Location = System::Drawing::Point(125, 318);
            this->btnDone->Name = L"btnDone";
            this->btnDone->Size = System::Drawing::Size(180, 40);
            this->btnDone->TabIndex = 3;
            this->btnDone->Text = L"Proceed to Payment";
            this->btnDone->UseVisualStyleBackColor = false;
            this->btnDone->Click += gcnew System::EventHandler(this, &MakeItineraryForm::btnDone_Click);
            // 
            // btnCancel
            // 
            this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->btnCancel->FlatAppearance->BorderSize = 0;
            this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->btnCancel->ForeColor = System::Drawing::Color::White;
            this->btnCancel->Location = System::Drawing::Point(345, 318);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(180, 40);
            this->btnCancel->TabIndex = 4;
            this->btnCancel->Text = L"Cancel Itinerary";
            this->btnCancel->UseVisualStyleBackColor = false;
            this->btnCancel->Click += gcnew System::EventHandler(this, &MakeItineraryForm::btnCancel_Click);
            // 
            // panelSummary
            // 
            this->panelSummary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->panelSummary->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panelSummary->Controls->Add(this->lblTotalPrice);
            this->panelSummary->Controls->Add(this->lblHotelCount);
            this->panelSummary->Controls->Add(this->lblFlightCount);
            this->panelSummary->Location = System::Drawing::Point(345, 158);
            this->panelSummary->Name = L"panelSummary";
            this->panelSummary->Size = System::Drawing::Size(180, 140);
            this->panelSummary->TabIndex = 5;
            this->panelSummary->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MakeItineraryForm::panelSummary_Paint);
            // 
            // lblTotalPrice
            // 
            this->lblTotalPrice->AutoSize = true;
            this->lblTotalPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->lblTotalPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->lblTotalPrice->Location = System::Drawing::Point(10, 90);
            this->lblTotalPrice->Name = L"lblTotalPrice";
            this->lblTotalPrice->Size = System::Drawing::Size(86, 19);
            this->lblTotalPrice->TabIndex = 2;
            this->lblTotalPrice->Text = L"Total: $0.00";
            // 
            // lblHotelCount
            // 
            this->lblHotelCount->AutoSize = true;
            this->lblHotelCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lblHotelCount->Location = System::Drawing::Point(10, 50);
            this->lblHotelCount->Name = L"lblHotelCount";
            this->lblHotelCount->Size = System::Drawing::Size(53, 15);
            this->lblHotelCount->TabIndex = 1;
            this->lblHotelCount->Text = L"Hotels: 0";
            // 
            // lblFlightCount
            // 
            this->lblFlightCount->AutoSize = true;
            this->lblFlightCount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lblFlightCount->Location = System::Drawing::Point(10, 20);
            this->lblFlightCount->Name = L"lblFlightCount";
            this->lblFlightCount->Size = System::Drawing::Size(54, 15);
            this->lblFlightCount->TabIndex = 0;
            this->lblFlightCount->Text = L"Flights: 0";
            // 
            // lblTitle
            // 
            this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->lblTitle->AutoSize = true;
            this->lblTitle->BackColor = System::Drawing::Color::Transparent;
            this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
            this->lblTitle->ForeColor = System::Drawing::Color::White;
            this->lblTitle->Location = System::Drawing::Point(188, 57);
            this->lblTitle->Name = L"lblTitle";
            this->lblTitle->Size = System::Drawing::Size(281, 32);
            this->lblTitle->TabIndex = 7;
            this->lblTitle->Text = L"Create Your Dream Trip";
            this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(1, 7);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(181, 117);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 6;
            this->pictureBox1->TabStop = false;
            // 
            // MakeItineraryForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(575, 445);
            this->Controls->Add(this->lblTitle);
            this->Controls->Add(this->panelSummary);
            this->Controls->Add(this->btnCancel);
            this->Controls->Add(this->btnDone);
            this->Controls->Add(this->btnAddHotel);
            this->Controls->Add(this->btnAddFlight);
            this->Controls->Add(this->pictureBox1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"MakeItineraryForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Travel Joy( Create Your Dream Trip )";
            this->Load += gcnew System::EventHandler(this, &MakeItineraryForm::MakeItineraryForm_Load);
            this->panelSummary->ResumeLayout(false);
            this->panelSummary->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void btnAddFlight_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Hide();
            AddFlightForm^ addFlightForm = gcnew AddFlightForm();
            if (addFlightForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                UpdateSummary();
            }
            this->Show();
        }

        System::Void btnAddHotel_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Hide();
            AddHotelForm^ addHotelForm = gcnew AddHotelForm();
            if (addHotelForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                UpdateSummary();
            }
            this->Show();
        }

        Void btnDone_Click(System::Object^ sender, System::EventArgs^ e) {
            if (GlobalState::CurrentItinerary == nullptr ||
                (GlobalState::CurrentItinerary->Flights->Count == 0 &&
                    GlobalState::CurrentItinerary->Hotels->Count == 0)) {
                MessageBox::Show("Your itinerary is empty. Please add at least one flight or hotel.",
                    "Empty Itinerary", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            this->Hide();
            PaymentForm^ paymentForm = gcnew PaymentForm();
            paymentForm->ShowDialog();
            this->Close();
        }

        Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
            if (MessageBox::Show("Are you sure you want to cancel this itinerary?",
                "Confirm Cancellation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
                GlobalState::ClearCurrentItinerary();
                this->Close();
            }
        }

        Void MakeItineraryForm_Load(System::Object^ sender, System::EventArgs^ e) {
            if (GlobalState::CurrentItinerary == nullptr) {
                GlobalState::CurrentItinerary = gcnew Itinerary();
            }
            UpdateSummary();
        }

        Void UpdateSummary() {
            if (GlobalState::CurrentItinerary != nullptr) {
                lblFlightCount->Text = String::Format("Flights: {0}", GlobalState::CurrentItinerary->Flights->Count);
                lblHotelCount->Text = String::Format("Hotels: {0}", GlobalState::CurrentItinerary->Hotels->Count);

                double total = 0.0;
                for each (Flight ^ flight in GlobalState::CurrentItinerary->Flights) {
                    total += flight->Price;
                }
                for each (Hotel ^ hotel in GlobalState::CurrentItinerary->Hotels) {
                    total += hotel->TotalPrice;
                }
                lblTotalPrice->Text = String::Format("Total: ${0:F2}", total);
            }
        }
    private: System::Void panelHeader_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void panelSummary_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    };
}