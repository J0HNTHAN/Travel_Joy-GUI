#pragma once
#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>


namespace TravelJoy {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class SelectHotelForm : public System::Windows::Forms::Form
    {
    public:
        SelectHotelForm(String^ city, String^ checkIn, String^ checkOut, int rooms, int guests)
        {
            InitializeComponent();
            this->Icon = gcnew System::Drawing::Icon("expedia_icon.ico");

            lblCity->Text = city;
            lblCheckIn->Text = checkIn;
            lblCheckOut->Text = checkOut;
            lblRooms->Text = String::Format("Rooms: {0}, Guests: {1}", rooms, guests);
            lblTotalHotels->Text = "0 hotels found";
            pictureBox1->Image = Image::FromFile("hotel_icon.png");
        }
        ref class Hotel {
        public:
            property String^ name;
            property String^ city;
            property DateTime checkInDate;
            property DateTime checkOutDate;
            property double price;
            property String^ rating;
            property String^ location;
        };
        ref class Itinerary {
        public:
            #include <cliext/list> // Add this include for cliext::list

            // Replace the problematic property definition with the following:
            property cliext::list<Hotel^>^ hotels {
               cliext::list<Hotel^>^ get() { return _hotels; }
               void set(cliext::list<Hotel^>^ value) { _hotels = value; }
            }

            // Update the private member to use cliext::list
            private:
               cliext::list<Hotel^>^ _hotels;

            Itinerary() {
                _hotels = gcnew List<Hotel^>();
            }

        private:
            List<Hotel^>^ _hotels;
        };
        ref class GlobalState abstract sealed {
        public:
            static property Itinerary^ CurrentItinerary {
                Itinerary^ get() { return _currentItinerary; }
                void set(Itinerary^ value) { _currentItinerary = value; }
            }
        private:
            static Itinerary^ _currentItinerary = gcnew Itinerary();
        };

    protected:
        ~SelectHotelForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:


        System::Windows::Forms::Label^ lblCity;
        System::Windows::Forms::Label^ lblCheckIn;
        System::Windows::Forms::Label^ lblCheckOut;
        System::Windows::Forms::Label^ lblRooms;
        System::Windows::Forms::ListView^ lstHotels;
        System::Windows::Forms::Button^ btnSelect;
        System::Windows::Forms::Button^ btnCancel;
        System::Windows::Forms::Label^ lblInstructions;

        System::Windows::Forms::ColumnHeader^ colHotel;
        System::Windows::Forms::ColumnHeader^ colPrice;
        System::Windows::Forms::ColumnHeader^ colRating;
        System::Windows::Forms::ColumnHeader^ colLocation;
        System::Windows::Forms::Panel^ panelFilters;
        System::Windows::Forms::ComboBox^ cmbSortBy;
        System::Windows::Forms::Label^ lblSortBy;
        System::Windows::Forms::Label^ lblTotalHotels;
        System::Windows::Forms::CheckBox^ chkFreeCancellation;
    private: System::Windows::Forms::Label^ lblTitle;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectHotelForm::typeid));
            this->lblCity = (gcnew System::Windows::Forms::Label());
            this->lblCheckIn = (gcnew System::Windows::Forms::Label());
            this->lblCheckOut = (gcnew System::Windows::Forms::Label());
            this->lblRooms = (gcnew System::Windows::Forms::Label());
            this->lstHotels = (gcnew System::Windows::Forms::ListView());
            this->colHotel = (gcnew System::Windows::Forms::ColumnHeader());
            this->colPrice = (gcnew System::Windows::Forms::ColumnHeader());
            this->colRating = (gcnew System::Windows::Forms::ColumnHeader());
            this->colLocation = (gcnew System::Windows::Forms::ColumnHeader());
            this->btnSelect = (gcnew System::Windows::Forms::Button());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->lblInstructions = (gcnew System::Windows::Forms::Label());
            this->panelFilters = (gcnew System::Windows::Forms::Panel());
            this->chkFreeCancellation = (gcnew System::Windows::Forms::CheckBox());
            this->cmbSortBy = (gcnew System::Windows::Forms::ComboBox());
            this->lblSortBy = (gcnew System::Windows::Forms::Label());
            this->lblTotalHotels = (gcnew System::Windows::Forms::Label());
            this->lblTitle = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panelFilters->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // lblCity
            // 
            this->lblCity->AutoSize = true;
            this->lblCity->BackColor = System::Drawing::Color::Transparent;
            this->lblCity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->lblCity->Location = System::Drawing::Point(30, 100);
            this->lblCity->Name = L"lblCity";
            this->lblCity->Size = System::Drawing::Size(39, 19);
            this->lblCity->TabIndex = 1;
            this->lblCity->Text = L"City:";
            // 
            // lblCheckIn
            // 
            this->lblCheckIn->AutoSize = true;
            this->lblCheckIn->BackColor = System::Drawing::Color::Transparent;
            this->lblCheckIn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lblCheckIn->Location = System::Drawing::Point(30, 130);
            this->lblCheckIn->Name = L"lblCheckIn";
            this->lblCheckIn->Size = System::Drawing::Size(58, 15);
            this->lblCheckIn->TabIndex = 2;
            this->lblCheckIn->Text = L"Check-in:";
            // 
            // lblCheckOut
            // 
            this->lblCheckOut->AutoSize = true;
            this->lblCheckOut->BackColor = System::Drawing::Color::Transparent;
            this->lblCheckOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lblCheckOut->Location = System::Drawing::Point(200, 130);
            this->lblCheckOut->Name = L"lblCheckOut";
            this->lblCheckOut->Size = System::Drawing::Size(66, 15);
            this->lblCheckOut->TabIndex = 3;
            this->lblCheckOut->Text = L"Check-out:";
            // 
            // lblRooms
            // 
            this->lblRooms->AutoSize = true;
            this->lblRooms->BackColor = System::Drawing::Color::Transparent;
            this->lblRooms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lblRooms->Location = System::Drawing::Point(30, 160);
            this->lblRooms->Name = L"lblRooms";
            this->lblRooms->Size = System::Drawing::Size(108, 15);
            this->lblRooms->TabIndex = 4;
            this->lblRooms->Text = L"Rooms and Guests:";
            // 
            // lstHotels
            // 
            this->lstHotels->BackColor = System::Drawing::Color::White;
            this->lstHotels->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lstHotels->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
                this->colHotel, this->colPrice,
                    this->colRating, this->colLocation
            });
            this->lstHotels->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->lstHotels->FullRowSelect = true;
            this->lstHotels->GridLines = true;
            this->lstHotels->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
            this->lstHotels->HideSelection = false;
            this->lstHotels->Location = System::Drawing::Point(30, 220);
            this->lstHotels->MultiSelect = false;
            this->lstHotels->Name = L"lstHotels";
            this->lstHotels->Size = System::Drawing::Size(640, 200);
            this->lstHotels->TabIndex = 5;
            this->lstHotels->UseCompatibleStateImageBehavior = false;
            this->lstHotels->View = System::Windows::Forms::View::Details;
            this->lstHotels->SelectedIndexChanged += gcnew System::EventHandler(this, &SelectHotelForm::lstHotels_SelectedIndexChanged);
            // 
            // colHotel
            // 
            this->colHotel->Text = L"Hotel Name";
            this->colHotel->Width = 200;
            // 
            // colPrice
            // 
            this->colPrice->Text = L"Price/Night";
            this->colPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->colPrice->Width = 100;
            // 
            // colRating
            // 
            this->colRating->Text = L"Rating";
            this->colRating->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->colRating->Width = 80;
            // 
            // colLocation
            // 
            this->colLocation->Text = L"Location";
            this->colLocation->Width = 200;
            // 
            // btnSelect
            // 
            this->btnSelect->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnSelect->FlatAppearance->BorderSize = 0;
            this->btnSelect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSelect->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnSelect->ForeColor = System::Drawing::Color::White;
            this->btnSelect->Location = System::Drawing::Point(470, 450);
            this->btnSelect->Name = L"btnSelect";
            this->btnSelect->Size = System::Drawing::Size(200, 40);
            this->btnSelect->TabIndex = 6;
            this->btnSelect->Text = L"Select Hotel";
            this->btnSelect->UseVisualStyleBackColor = false;
            this->btnSelect->Click += gcnew System::EventHandler(this, &SelectHotelForm::btnSelect_Click);
            // 
            // btnCancel
            // 
            this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->btnCancel->Location = System::Drawing::Point(260, 450);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(200, 40);
            this->btnCancel->TabIndex = 7;
            this->btnCancel->Text = L"Cancel";
            this->btnCancel->UseVisualStyleBackColor = true;
            this->btnCancel->Click += gcnew System::EventHandler(this, &SelectHotelForm::btnCancel_Click);
            // 
            // lblInstructions
            // 
            this->lblInstructions->AutoSize = true;
            this->lblInstructions->BackColor = System::Drawing::Color::Transparent;
            this->lblInstructions->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lblInstructions->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)));
            this->lblInstructions->Location = System::Drawing::Point(30, 190);
            this->lblInstructions->Name = L"lblInstructions";
            this->lblInstructions->Size = System::Drawing::Size(179, 15);
            this->lblInstructions->TabIndex = 0;
            this->lblInstructions->Text = L"Select a hotel from the list below";
            // 
            // panelFilters
            // 
            this->panelFilters->BackColor = System::Drawing::Color::Transparent;
            this->panelFilters->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panelFilters->Controls->Add(this->chkFreeCancellation);
            this->panelFilters->Controls->Add(this->cmbSortBy);
            this->panelFilters->Controls->Add(this->lblSortBy);
            this->panelFilters->Location = System::Drawing::Point(470, 100);
            this->panelFilters->Name = L"panelFilters";
            this->panelFilters->Size = System::Drawing::Size(200, 100);
            this->panelFilters->TabIndex = 9;
            // 
            // chkFreeCancellation
            // 
            this->chkFreeCancellation->AutoSize = true;
            this->chkFreeCancellation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->chkFreeCancellation->Location = System::Drawing::Point(20, 70);
            this->chkFreeCancellation->Name = L"chkFreeCancellation";
            this->chkFreeCancellation->Size = System::Drawing::Size(115, 19);
            this->chkFreeCancellation->TabIndex = 2;
            this->chkFreeCancellation->Text = L"Free cancellation";
            this->chkFreeCancellation->UseVisualStyleBackColor = true;
            this->chkFreeCancellation->CheckedChanged += gcnew System::EventHandler(this, &SelectHotelForm::chkFreeCancellation_CheckedChanged);
            // 
            // cmbSortBy
            // 
            this->cmbSortBy->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cmbSortBy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->cmbSortBy->FormattingEnabled = true;
            this->cmbSortBy->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"Price: Low to High", L"Price: High to Low", L"Rating",
                    L"Name"
            });
            this->cmbSortBy->Location = System::Drawing::Point(20, 40);
            this->cmbSortBy->Name = L"cmbSortBy";
            this->cmbSortBy->Size = System::Drawing::Size(160, 23);
            this->cmbSortBy->TabIndex = 1;
            this->cmbSortBy->SelectedIndexChanged += gcnew System::EventHandler(this, &SelectHotelForm::cmbSortBy_SelectedIndexChanged);
            // 
            // lblSortBy
            // 
            this->lblSortBy->AutoSize = true;
            this->lblSortBy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
            this->lblSortBy->Location = System::Drawing::Point(20, 20);
            this->lblSortBy->Name = L"lblSortBy";
            this->lblSortBy->Size = System::Drawing::Size(51, 15);
            this->lblSortBy->TabIndex = 0;
            this->lblSortBy->Text = L"Sort By:";
            // 
            // lblTotalHotels
            // 
            this->lblTotalHotels->AutoSize = true;
            this->lblTotalHotels->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic));
            this->lblTotalHotels->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)));
            this->lblTotalHotels->Location = System::Drawing::Point(30, 450);
            this->lblTotalHotels->Name = L"lblTotalHotels";
            this->lblTotalHotels->Size = System::Drawing::Size(81, 15);
            this->lblTotalHotels->TabIndex = 10;
            this->lblTotalHotels->Text = L"0 hotels found";
            // 
            // lblTitle
            // 
            this->lblTitle->AutoSize = true;
            this->lblTitle->BackColor = System::Drawing::Color::Transparent;
            this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
            this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->lblTitle->Location = System::Drawing::Point(40, 30);
            this->lblTitle->Name = L"lblTitle";
            this->lblTitle->Size = System::Drawing::Size(154, 25);
            this->lblTitle->TabIndex = 11;
            this->lblTitle->Text = L"Available Hotels";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(700, 127);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 12;
            this->pictureBox1->TabStop = false;
            // 
            // SelectHotelForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(700, 520);
            this->Controls->Add(this->lblTitle);
            this->Controls->Add(this->lblTotalHotels);
            this->Controls->Add(this->panelFilters);
            this->Controls->Add(this->lblInstructions);
            this->Controls->Add(this->btnCancel);
            this->Controls->Add(this->btnSelect);
            this->Controls->Add(this->lstHotels);
            this->Controls->Add(this->lblRooms);
            this->Controls->Add(this->lblCheckOut);
            this->Controls->Add(this->lblCheckIn);
            this->Controls->Add(this->lblCity);
            this->Controls->Add(this->pictureBox1);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"SelectHotelForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Travel Joy ( Select Hotel )";
            this->Load += gcnew System::EventHandler(this, &SelectHotelForm::SelectHotelForm_Load);
            this->panelFilters->ResumeLayout(false);
            this->panelFilters->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void SelectHotelForm_Load(System::Object^ sender, System::EventArgs^ e) {
            AddHotelToList("Grand Plaza Hotel", 250.0, "★★★★☆ (4.5)", "City Center");
            AddHotelToList("Airport Suites", 180.0, "★★★☆ (3.8)", "Near Airport");
            AddHotelToList("Beach Resort", 350.0, "★★★★★ (4.8)", "Beachfront");
            AddHotelToList("Mountain View Lodge", 220.0, "★★★★ (4.2)", "Mountain Area");
            AddHotelToList("Downtown Inn", 190.0, "★★★☆ (3.9)", "Downtown");
            AddHotelToList("Luxury Palace", 420.0, "★★★★★ (5.0)", "City Center");
            AddHotelToList("Budget Stay", 120.0, "★★★ (3.2)", "Suburbs");

            if (lstHotels->Items->Count > 0) {
                lstHotels->Items[0]->Selected = true;
            }

            cmbSortBy->SelectedIndex = 0;
            UpdateHotelsCount();
        }

        void AddHotelToList(String^ name, double price, String^ rating, String^ location) {
            ListViewItem^ item = gcnew ListViewItem(name);
            item->SubItems->Add(String::Format("${0:F2}", price));
            item->SubItems->Add(rating);
            item->SubItems->Add(location);
            lstHotels->Items->Add(item);
        }

        void UpdateHotelsCount() {
            lblTotalHotels->Text = String::Format("{0} hotels found", lstHotels->Items->Count);
        }

        System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
            if (lstHotels->SelectedItems->Count == 0) {
                MessageBox::Show("Please select a hotel.", "No Selection",
                    MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            ListViewItem^ selectedItem = lstHotels->SelectedItems[0];
            Hotel^ hotel = gcnew Hotel();
            hotel->name = selectedItem->Text;
            hotel->city = lblCity->Text;
            hotel->checkInDate = DateTime::Parse(lblCheckIn->Text);
            hotel->checkOutDate = DateTime::Parse(lblCheckOut->Text);
            hotel->price = Double::Parse(selectedItem->SubItems[1]->Text->Substring(1));
            hotel->rating = selectedItem->SubItems[2]->Text;
            hotel->location = selectedItem->SubItems[3]->Text;
            GlobalState::CurrentItinerary->hotels->Add(hotel);

            MessageBox::Show(String::Format("Hotel '{0}' added successfully!", hotel->name),
                "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            this->Close();
        }

        System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
            this->Close();
        }

        System::Void cmbSortBy_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            ListViewItem^ selectedItem = lstHotels->SelectedItems->Count > 0 ? lstHotels->SelectedItems[0] : nullptr;

            switch (cmbSortBy->SelectedIndex) {
            case 0:
                lstHotels->ListViewItemSorter = gcnew ListViewItemComparer(1, false);
                break;
            case 1:
                lstHotels->ListViewItemSorter = gcnew ListViewItemComparer(1, true);
                break;
            case 2:
                lstHotels->ListViewItemSorter = gcnew ListViewItemComparer(2, true);
                break;
            case 3:
                lstHotels->ListViewItemSorter = gcnew ListViewItemComparer(0, false);
                break;
            }
            lstHotels->Sort();

            if (selectedItem != nullptr) {
                selectedItem->Selected = true;
            }
            UpdateHotelsCount();
        }

        System::Void chkFreeCancellation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
            for each (ListViewItem ^ item in lstHotels->Items) {
                bool show = true;
                if (chkFreeCancellation->Checked) {
                    show = (item->Text == "Grand Plaza Hotel" || item->Text == "Beach Resort" || item->Text == "Luxury Palace");
                }
                item->Checked = show;
            }
            UpdateHotelsCount();
        }

        System::Void lstHotels_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
            btnSelect->Enabled = lstHotels->SelectedItems->Count > 0;
        }

        ref class ListViewItemComparer : public System::Collections::IComparer
        {
        private:
            int col;
            bool descending;

        public:
            ListViewItemComparer(int column, bool desc)
            {
                col = column;
                descending = desc;
            }

            virtual int Compare(Object^ x, Object^ y)
            {
                ListViewItem^ itemX = (ListViewItem^)x;
                ListViewItem^ itemY = (ListViewItem^)y;

                if (col == 1) {
                    double priceX = Double::Parse(itemX->SubItems[col]->Text->Substring(1));
                    double priceY = Double::Parse(itemY->SubItems[col]->Text->Substring(1));
                    return descending ? priceY.CompareTo(priceX) : priceX.CompareTo(priceY);
                }
                else if (col == 2) {
                    String^ ratingX = itemX->SubItems[col]->Text;
                    String^ ratingY = itemY->SubItems[col]->Text;
                    return descending ? ratingY->CompareTo(ratingX) : ratingX->CompareTo(ratingY);
                }
                else {
                    return descending ? itemY->SubItems[col]->Text->CompareTo(itemX->SubItems[col]->Text) :
                        itemX->SubItems[col]->Text->CompareTo(itemY->SubItems[col]->Text);
                }
            }
        };
    };
}