#pragma once

namespace TravelJoy {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class PaymentForm : public System::Windows::Forms::Form
    {
    public:
        PaymentForm(void)
        {
            InitializeComponent();
            this->Icon = gcnew System::Drawing::Icon("expedia_icon.ico");
        }

    protected:
        ~PaymentForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ lblTitle;
        System::Windows::Forms::Label^ lblCardNumber;
        System::Windows::Forms::TextBox^ txtCardNumber;
        System::Windows::Forms::Label^ lblExpiryDate;
        System::Windows::Forms::TextBox^ txtExpiryDate;
        System::Windows::Forms::Label^ lblCVV;
        System::Windows::Forms::TextBox^ txtCVV;
        System::Windows::Forms::Label^ lblTotalCost;
        System::Windows::Forms::Label^ lblCostValue;
        System::Windows::Forms::Button^ btnPay;
        System::Windows::Forms::Button^ btnCancel;
        System::Windows::Forms::Panel^ panelHeader;
        System::Windows::Forms::PictureBox^ pictureBox1;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaymentForm::typeid));
            this->lblTitle = (gcnew System::Windows::Forms::Label());
            this->lblCardNumber = (gcnew System::Windows::Forms::Label());
            this->txtCardNumber = (gcnew System::Windows::Forms::TextBox());
            this->lblExpiryDate = (gcnew System::Windows::Forms::Label());
            this->txtExpiryDate = (gcnew System::Windows::Forms::TextBox());
            this->lblCVV = (gcnew System::Windows::Forms::Label());
            this->txtCVV = (gcnew System::Windows::Forms::TextBox());
            this->lblTotalCost = (gcnew System::Windows::Forms::Label());
            this->lblCostValue = (gcnew System::Windows::Forms::Label());
            this->btnPay = (gcnew System::Windows::Forms::Button());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->panelHeader = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panelHeader->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // lblTitle
            // 
            this->lblTitle->AutoSize = true;
            this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->lblTitle->Location = System::Drawing::Point(121, 30);
            this->lblTitle->Name = L"lblTitle";
            this->lblTitle->Size = System::Drawing::Size(154, 25);
            this->lblTitle->TabIndex = 0;
            this->lblTitle->Text = L"Payment Details";
            // 
            // lblCardNumber
            // 
            this->lblCardNumber->AutoSize = true;
            this->lblCardNumber->BackColor = System::Drawing::Color::Transparent;
            this->lblCardNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblCardNumber->Location = System::Drawing::Point(50, 120);
            this->lblCardNumber->Name = L"lblCardNumber";
            this->lblCardNumber->Size = System::Drawing::Size(95, 19);
            this->lblCardNumber->TabIndex = 1;
            this->lblCardNumber->Text = L"Card Number:";
            // 
            // txtCardNumber
            // 
            this->txtCardNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtCardNumber->Location = System::Drawing::Point(170, 117);
            this->txtCardNumber->Name = L"txtCardNumber";
            this->txtCardNumber->Size = System::Drawing::Size(250, 25);
            this->txtCardNumber->TabIndex = 2;
            // 
            // lblExpiryDate
            // 
            this->lblExpiryDate->AutoSize = true;
            this->lblExpiryDate->BackColor = System::Drawing::Color::Transparent;
            this->lblExpiryDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->lblExpiryDate->Location = System::Drawing::Point(50, 160);
            this->lblExpiryDate->Name = L"lblExpiryDate";
            this->lblExpiryDate->Size = System::Drawing::Size(81, 19);
            this->lblExpiryDate->TabIndex = 3;
            this->lblExpiryDate->Text = L"Expiry Date:";
            // 
            // txtExpiryDate
            // 
            this->txtExpiryDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtExpiryDate->Location = System::Drawing::Point(170, 157);
            this->txtExpiryDate->Name = L"txtExpiryDate";
            this->txtExpiryDate->Size = System::Drawing::Size(100, 25);
            this->txtExpiryDate->TabIndex = 4;
            // 
            // lblCVV
            // 
            this->lblCVV->AutoSize = true;
            this->lblCVV->BackColor = System::Drawing::Color::Transparent;
            this->lblCVV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->lblCVV->Location = System::Drawing::Point(50, 200);
            this->lblCVV->Name = L"lblCVV";
            this->lblCVV->Size = System::Drawing::Size(39, 19);
            this->lblCVV->TabIndex = 5;
            this->lblCVV->Text = L"CVV:";
            // 
            // txtCVV
            // 
            this->txtCVV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->txtCVV->Location = System::Drawing::Point(170, 197);
            this->txtCVV->Name = L"txtCVV";
            this->txtCVV->PasswordChar = '*';
            this->txtCVV->Size = System::Drawing::Size(70, 25);
            this->txtCVV->TabIndex = 6;
            // 
            // lblTotalCost
            // 
            this->lblTotalCost->AutoSize = true;
            this->lblTotalCost->BackColor = System::Drawing::Color::Transparent;
            this->lblTotalCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->lblTotalCost->Location = System::Drawing::Point(50, 240);
            this->lblTotalCost->Name = L"lblTotalCost";
            this->lblTotalCost->Size = System::Drawing::Size(79, 19);
            this->lblTotalCost->TabIndex = 7;
            this->lblTotalCost->Text = L"Total Cost:";
            // 
            // lblCostValue
            // 
            this->lblCostValue->AutoSize = true;
            this->lblCostValue->BackColor = System::Drawing::Color::Transparent;
            this->lblCostValue->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->lblCostValue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)));
            this->lblCostValue->Location = System::Drawing::Point(170, 240);
            this->lblCostValue->Name = L"lblCostValue";
            this->lblCostValue->Size = System::Drawing::Size(45, 19);
            this->lblCostValue->TabIndex = 8;
            this->lblCostValue->Text = L"$0.00";
            // 
            // btnPay
            // 
            this->btnPay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(167)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)));
            this->btnPay->FlatAppearance->BorderSize = 0;
            this->btnPay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnPay->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnPay->ForeColor = System::Drawing::Color::White;
            this->btnPay->Location = System::Drawing::Point(170, 280);
            this->btnPay->Name = L"btnPay";
            this->btnPay->Size = System::Drawing::Size(120, 35);
            this->btnPay->TabIndex = 9;
            this->btnPay->Text = L"Pay Now";
            this->btnPay->UseVisualStyleBackColor = false;
            this->btnPay->Click += gcnew System::EventHandler(this, &PaymentForm::btnPay_Click);
            // 
            // btnCancel
            // 
            this->btnCancel->BackColor = System::Drawing::Color::Transparent;
            this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::Red;
            this->btnCancel->FlatAppearance->BorderSize = 2;
            this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCancel->ForeColor = System::Drawing::Color::Red;
            this->btnCancel->Location = System::Drawing::Point(300, 280);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(120, 35);
            this->btnCancel->TabIndex = 10;
            this->btnCancel->Text = L"Cancel";
            this->btnCancel->UseVisualStyleBackColor = false;
            this->btnCancel->Click += gcnew System::EventHandler(this, &PaymentForm::btnCancel_Click);
            // 
            // panelHeader
            // 
            this->panelHeader->BackColor = System::Drawing::Color::Transparent;
            this->panelHeader->Controls->Add(this->pictureBox1);
            this->panelHeader->Controls->Add(this->lblTitle);
            this->panelHeader->Dock = System::Windows::Forms::DockStyle::Top;
            this->panelHeader->Location = System::Drawing::Point(0, 0);
            this->panelHeader->Name = L"panelHeader";
            this->panelHeader->Size = System::Drawing::Size(578, 80);
            this->panelHeader->TabIndex = 11;
            this->panelHeader->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaymentForm::panelHeader_Paint);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(107, 80);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 8;
            this->pictureBox1->TabStop = false;
            // 
            // PaymentForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(578, 432);
            this->Controls->Add(this->panelHeader);
            this->Controls->Add(this->btnCancel);
            this->Controls->Add(this->btnPay);
            this->Controls->Add(this->lblCostValue);
            this->Controls->Add(this->lblTotalCost);
            this->Controls->Add(this->txtCVV);
            this->Controls->Add(this->lblCVV);
            this->Controls->Add(this->txtExpiryDate);
            this->Controls->Add(this->lblExpiryDate);
            this->Controls->Add(this->txtCardNumber);
            this->Controls->Add(this->lblCardNumber);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"PaymentForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Traavel Koy( Payment )";
            this->Load += gcnew System::EventHandler(this, &PaymentForm::PaymentForm_Load);
            this->panelHeader->ResumeLayout(false);
            this->panelHeader->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void PaymentForm_Load(System::Object^ sender, System::EventArgs^ e) {
            double totalCost = GlobalState::CurrentItinerary->getTotalCost();
            lblCostValue->Text = String::Format("${0:F2}", totalCost);
            txtCardNumber->Focus();
        }

        System::Void btnPay_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ cardNumber = txtCardNumber->Text;
            String^ expiryDate = txtExpiryDate->Text;
            String^ cvv = txtCVV->Text;

            if (String::IsNullOrWhiteSpace(cardNumber) || String::IsNullOrWhiteSpace(expiryDate) || String::IsNullOrWhiteSpace(cvv)) {
                MessageBox::Show("Please fill in all payment details", "Error",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            if (cardNumber->Length < 16) {
                MessageBox::Show("Please enter a valid 16-digit card number", "Error",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            if (!System::Text::RegularExpressions::Regex::IsMatch(expiryDate, "^(0[1-9]|1[0-2])\\/([0-9]{2})$")) {
                MessageBox::Show("Please enter expiry date in MM/YY format", "Error",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            if (cvv->Length < 3) {
                MessageBox::Show("Please enter a valid 3-digit CVV", "Error",
                    MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            double totalCost = GlobalState::CurrentItinerary->getTotalCost();
            if (StripeAPI::WithdrawMoney(GlobalState::CurrentUser->username,
                cardNumber, totalCost)) {
                GlobalState::CurrentUser->itineraries->Add(GlobalState::CurrentItinerary);
                MessageBox::Show("Payment successful!\nYour itinerary has been saved.",
                    "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                GlobalState::CurrentItinerary = nullptr;
                this->Close();
            }
            else {
                MessageBox::Show("Payment failed. Please check your card details and try again."
                    ,
                    "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
            if (MessageBox::Show("Are you sure you want to cancel this payment?", "Confirm",
                MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
            {
                GlobalState::CurrentItinerary = nullptr;
                this->Close();
            }
        }
    private: System::Void panelHeader_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    };
}