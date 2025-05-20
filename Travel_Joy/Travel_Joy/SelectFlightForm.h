#pragma once

namespace TravelJoy {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class SelectFlightForm : public System::Windows::Forms::Form
    {
    public:
        SelectFlightForm(String^ from, String^ to, String^ fromDate, String^ toDate, int adults, int children, int infants)
        {
            InitializeComponent();
            this->Icon = gcnew System::Drawing::Icon("expedia_icon.ico");

            lblFrom->Text = from;
            lblTo->Text = to;
            lblFromDate->Text = fromDate;
            lblToDate->Text = toDate;
            lblPassengers->Text = String::Format("Adults: {0}, Children: {1}, Infants: {2}", adults, children, infants);

            flightList = gcnew System::Collections::Generic::List<FlightInfo^>();
        }

    protected:
        ~SelectFlightForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:


        System::Windows::Forms::Label^ lblFrom;
        System::Windows::Forms::Label^ lblTo;
        System::Windows::Forms::Label^ lblFromDate;
        System::Windows::Forms::Label^ lblToDate;
        System::Windows::Forms::Label^ lblPassengers;
        System::Windows::Forms::ListView^ lstFlights;
        System::Windows::Forms::Button^ btnSelect;
        System::Windows::Forms::Button^ btnCancel;
        System::Windows::Forms::Label^ lblInstructions;

        System::Windows::Forms::ColumnHeader^ colFlight;
        System::Windows::Forms::ColumnHeader^ colAirline;
        System::Windows::Forms::ColumnHeader^ colDeparture;
        System::Windows::Forms::ColumnHeader^ colArrival;
        System::Windows::Forms::ColumnHeader^ colDuration;
        System::Windows::Forms::ColumnHeader^ colPrice;
        System::Windows::Forms::Panel^ panelFilters;
        System::Windows::Forms::ComboBox^ cmbSortBy;
        System::Windows::Forms::Label^ lblSortBy;
        System::Windows::Forms::Label^ lblTotalFlights;
        System::Windows::Forms::CheckBox^ chkDirectOnly;

        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Label^ lblTitle;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
           System::Collections::Generic::List<FlightInfo^>^ flightList;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectFlightForm::typeid));
            this->lblFrom = (gcnew System::Windows::Forms::Label());
            this->lblTo = (gcnew System::Windows::Forms::Label());
            this->lblFromDate = (gcnew System::Windows::Forms::Label());
            this->lblToDate = (gcnew System::Windows::Forms::Label());
            this->lblPassengers = (gcnew System::Windows::Forms::Label());
            this->lstFlights = (gcnew System::Windows::Forms::ListView());
            this->colFlight = (gcnew System::Windows::Forms::ColumnHeader());
            this->colAirline = (gcnew System::Windows::Forms::ColumnHeader());
            this->colDeparture = (gcnew System::Windows::Forms::ColumnHeader());
            this->colArrival = (gcnew System::Windows::Forms::ColumnHeader());
            this->colDuration = (gcnew System::Windows::Forms::ColumnHeader());
            this->colPrice = (gcnew System::Windows::Forms::ColumnHeader());
            this->btnSelect = (gcnew System::Windows::Forms::Button());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->lblInstructions = (gcnew System::Windows::Forms::Label());
            this->panelFilters = (gcnew System::Windows::Forms::Panel());
            this->chkDirectOnly = (gcnew System::Windows::Forms::CheckBox());
            this->cmbSortBy = (gcnew System::Windows::Forms::ComboBox());
            this->lblSortBy = (gcnew System::Windows::Forms::Label());
            this->lblTotalFlights = (gcnew System::Windows::Forms::Label());
            this->lblTitle = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->panelFilters->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // lblFrom
            // 
            this->lblFrom->AutoSize = true;
            this->lblFrom->BackColor = System::Drawing::Color::Transparent;
            this->lblFrom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->lblFrom->Location = System::Drawing::Point(30, 100);
            this->lblFrom->Name = L"lblFrom";
            this->lblFrom->Size = System::Drawing::Size(48, 19);
            this->lblFrom->TabIndex = 1;
            this->lblFrom->Text = L"From:";
            // 
            // lblTo
            // 
            this->lblTo->AutoSize = true;
            this->lblTo->BackColor = System::Drawing::Color::Transparent;
            this->lblTo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->lblTo->Location = System::Drawing::Point(200, 100);
            this->lblTo->Name = L"lblTo";
            this->lblTo->Size = System::Drawing::Size(29, 19);
            this->lblTo->TabIndex = 2;
            this->lblTo->Text = L"To:";
            // 
            // lblFromDate
            // 
            this->lblFromDate->AutoSize = true;
            this->lblFromDate->BackColor = System::Drawing::Color::Transparent;
            this->lblFromDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->lblFromDate->Location = System::Drawing::Point(30, 130);
            this->lblFromDate->Name = L"lblFromDate";
            this->lblFromDate->Size = System::Drawing::Size(74, 19);
            this->lblFromDate->TabIndex = 3;
            this->lblFromDate->Text = L"Departure:";
            // 
            // lblToDate
            // 
            this->lblToDate->AutoSize = true;
            this->lblToDate->BackColor = System::Drawing::Color::Transparent;
            this->lblToDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->lblToDate->Location = System::Drawing::Point(200, 130);
            this->lblToDate->Name = L"lblToDate";
            this->lblToDate->Size = System::Drawing::Size(53, 19);
            this->lblToDate->TabIndex = 4;
            this->lblToDate->Text = L"Return:";
            // 
            // lblPassengers
            // 
            this->lblPassengers->AutoSize = true;
            this->lblPassengers->BackColor = System::Drawing::Color::Transparent;
            this->lblPassengers->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->lblPassengers->Location = System::Drawing::Point(30, 160);
            this->lblPassengers->Name = L"lblPassengers";
            this->lblPassengers->Size = System::Drawing::Size(80, 19);
            this->lblPassengers->TabIndex = 5;
            this->lblPassengers->Text = L"Passengers:";
            // 
            // lstFlights
            // 
            this->lstFlights->BackColor = System::Drawing::Color::White;
            this->lstFlights->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lstFlights->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
                this->colFlight, this->colAirline,
                    this->colDeparture, this->colArrival, this->colDuration, this->colPrice
            });
            this->lstFlights->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lstFlights->FullRowSelect = true;
            this->lstFlights->GridLines = true;
            this->lstFlights->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
            this->lstFlights->HideSelection = false;
            this->lstFlights->Location = System::Drawing::Point(30, 200);
            this->lstFlights->MultiSelect = false;
            this->lstFlights->Name = L"lstFlights";
            this->lstFlights->Size = System::Drawing::Size(740, 250);
            this->lstFlights->TabIndex = 6;
            this->lstFlights->UseCompatibleStateImageBehavior = false;
            this->lstFlights->View = System::Windows::Forms::View::Details;
            this->lstFlights->SelectedIndexChanged += gcnew System::EventHandler(this, &SelectFlightForm::lstFlights_SelectedIndexChanged);
            // 
            // colFlight
            // 
            this->colFlight->Text = L"Flight No";
            this->colFlight->Width = 100;
            // 
            // colAirline
            // 
            this->colAirline->Text = L"Airline";
            this->colAirline->Width = 120;
            // 
            // colDeparture
            // 
            this->colDeparture->Text = L"Departure";
            this->colDeparture->Width = 120;
            // 
            // colArrival
            // 
            this->colArrival->Text = L"Arrival";
            this->colArrival->Width = 120;
            // 
            // colDuration
            // 
            this->colDuration->Text = L"Duration";
            this->colDuration->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->colDuration->Width = 80;
            // 
            // colPrice
            // 
            this->colPrice->Text = L"Price";
            this->colPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->colPrice->Width = 100;
            // 
            // btnSelect
            // 
            this->btnSelect->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->btnSelect->FlatAppearance->BorderSize = 0;
            this->btnSelect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSelect->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
            this->btnSelect->ForeColor = System::Drawing::Color::White;
            this->btnSelect->Location = System::Drawing::Point(570, 470);
            this->btnSelect->Name = L"btnSelect";
            this->btnSelect->Size = System::Drawing::Size(200, 40);
            this->btnSelect->TabIndex = 7;
            this->btnSelect->Text = L"Select Flight";
            this->btnSelect->UseVisualStyleBackColor = false;
            this->btnSelect->Click += gcnew System::EventHandler(this, &SelectFlightForm::btnSelect_Click);
            // 
            // btnCancel
            // 
            this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->btnCancel->Location = System::Drawing::Point(360, 470);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(200, 40);
            this->btnCancel->TabIndex = 8;
            this->btnCancel->Text = L"Cancel";
            this->btnCancel->UseVisualStyleBackColor = true;
            this->btnCancel->Click += gcnew System::EventHandler(this, &SelectFlightForm::btnCancel_Click);
            // 
            // lblInstructions
            // 
            this->lblInstructions->AutoSize = true;
            this->lblInstructions->BackColor = System::Drawing::Color::Transparent;
            this->lblInstructions->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->lblInstructions->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)));
            this->lblInstructions->Location = System::Drawing::Point(30, 180);
            this->lblInstructions->Name = L"lblInstructions";
            this->lblInstructions->Size = System::Drawing::Size(180, 15);
            this->lblInstructions->TabIndex = 0;
            this->lblInstructions->Text = L"Select a flight from the list below";
            // 
            // panelFilters
            // 
            this->panelFilters->BackColor = System::Drawing::Color::Transparent;
            this->panelFilters->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panelFilters->Controls->Add(this->chkDirectOnly);
            this->panelFilters->Controls->Add(this->cmbSortBy);
            this->panelFilters->Controls->Add(this->lblSortBy);
            this->panelFilters->Location = System::Drawing::Point(570, 100);
            this->panelFilters->Name = L"panelFilters";
            this->panelFilters->Size = System::Drawing::Size(200, 100);
            this->panelFilters->TabIndex = 9;
            // 
            // chkDirectOnly
            // 
            this->chkDirectOnly->AutoSize = true;
            this->chkDirectOnly->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->chkDirectOnly->Location = System::Drawing::Point(20, 70);
            this->chkDirectOnly->Name = L"chkDirectOnly";
            this->chkDirectOnly->Size = System::Drawing::Size(119, 19);
            this->chkDirectOnly->TabIndex = 2;
            this->chkDirectOnly->Text = L"Direct flights only";
            this->chkDirectOnly->UseVisualStyleBackColor = true;
            this->chkDirectOnly->CheckedChanged += gcnew System::EventHandler(this, &SelectFlightForm::chkDirectOnly_CheckedChanged);
            // 
            // cmbSortBy
            // 
            this->cmbSortBy->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cmbSortBy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
            this->cmbSortBy->FormattingEnabled = true;
            this->cmbSortBy->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Price: Low to High", L"Price: High to Low", L"Departure Time",
                    L"Arrival Time", L"Duration"
            });
            this->cmbSortBy->Location = System::Drawing::Point(20, 40);
            this->cmbSortBy->Name = L"cmbSortBy";
            this->cmbSortBy->Size = System::Drawing::Size(160, 23);
            this->cmbSortBy->TabIndex = 1;
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
            // lblTotalFlights
            // 
            this->lblTotalFlights->AutoSize = true;
            this->lblTotalFlights->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic));
            this->lblTotalFlights->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
                static_cast<System::Int32>(static_cast<System::Byte>(100)));
            this->lblTotalFlights->Location = System::Drawing::Point(30, 470);
            this->lblTotalFlights->Name = L"lblTotalFlights";
            this->lblTotalFlights->Size = System::Drawing::Size(83, 15);
            this->lblTotalFlights->TabIndex = 10;
            this->lblTotalFlights->Text = L"0 flights found";
            // 
            // lblTitle
            // 
            this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lblTitle->AutoSize = true;
            this->lblTitle->BackColor = System::Drawing::Color::Transparent;
            this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
                static_cast<System::Int32>(static_cast<System::Byte>(204)));
            this->lblTitle->Location = System::Drawing::Point(40, 30);
            this->lblTitle->Name = L"lblTitle";
            this->lblTitle->Size = System::Drawing::Size(155, 25);
            this->lblTitle->TabIndex = 11;
            this->lblTitle->Text = L"Available Flights";
            this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Top;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(803, 200);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 12;
            this->pictureBox1->TabStop = false;
            // 
            // SelectFlightForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(803, 531);
            this->Controls->Add(this->lblTitle);
            this->Controls->Add(this->lblTotalFlights);
            this->Controls->Add(this->panelFilters);
            this->Controls->Add(this->lblInstructions);
            this->Controls->Add(this->btnCancel);
            this->Controls->Add(this->btnSelect);
            this->Controls->Add(this->lstFlights);
            this->Controls->Add(this->lblPassengers);
            this->Controls->Add(this->lblToDate);
            this->Controls->Add(this->lblFromDate);
            this->Controls->Add(this->lblTo);
            this->Controls->Add(this->lblFrom);
            this->Controls->Add(this->pictureBox1);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->MaximizeBox = false;
            this->Name = L"SelectFlightForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Travel Joy( Select Flight )";
            this->Load += gcnew System::EventHandler(this, &SelectFlightForm::SelectFlightForm_Load);
            this->panelFilters->ResumeLayout(false);
            this->panelFilters->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
  private:
      System::Void SelectFlightForm_Load(System::Object^ sender, System::EventArgs^ e) {
          // Add sample flights
          AddFlight("EK 203", "Emirates", "10:00 AM", "2:00 PM", 240, 500.0);
          AddFlight("QR 701", "Qatar Airways", "2:00 PM", "6:00 PM", 240, 600.0);
          AddFlight("LH 430", "Lufthansa", "6:00 PM", "10:00 PM", 240, 450.0);
          AddFlight("AA 123", "American Airlines", "8:00 AM", "12:00 PM", 240, 550.0);
          AddFlight("DL 456", "Delta Airlines", "11:00 AM", "4:30 PM", 330, 480.0);

          DisplayFlights();

          if (lstFlights->Items->Count > 0) {
              lstFlights->Items[0]->Selected = true;
          }

          cmbSortBy->SelectedIndex = 0;
          UpdateFlightsCount();
      }

      void AddFlight(String^ flightNo, String^ airline, String^ departure, String^ arrival, int duration, double price) {
          FlightInfo^ flight = gcnew FlightInfo();
          flight->FlightNo = flightNo;
          flight->Airline = airline;
          flight->DepartureTime = departure;
          flight->ArrivalTime = arrival;
          flight->Duration = duration;
          flight->Price = price;
          flight->DepartureCity = lblFrom->Text;
          flight->ArrivalCity = lblTo->Text;
          flight->DepartureDate = DateTime::Parse(lblFromDate->Text);
          flight->ReturnDate = DateTime::Parse(lblToDate->Text);
          flight->BaggageAllowance = (airline->Contains("Emirates") || airline->Contains("Qatar")) ? 30 : 20;

          flightList->Add(flight);
      }

      void DisplayFlights() {
          lstFlights->Items->Clear();

          for each (FlightInfo ^ flight in flightList) {
              ListViewItem^ item = gcnew ListViewItem(flight->FlightNo);
              item->SubItems->Add(flight->Airline);
              item->SubItems->Add(flight->DepartureTime);
              item->SubItems->Add(flight->ArrivalTime);
              item->SubItems->Add(String::Format("{0}h {1}m", flight->Duration / 60, flight->Duration % 60));
              item->SubItems->Add(String::Format("${0:F2}", flight->Price));
              item->Tag = flight;
              lstFlights->Items->Add(item);
          }
      }

      void UpdateFlightsCount() {
          lblTotalFlights->Text = String::Format("{0} flights found", lstFlights->Items->Count);
      }

      System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
          if (lstFlights->SelectedItems->Count == 0) {
              MessageBox::Show("Please select a flight.", "No Selection",
                  MessageBoxButtons::OK, MessageBoxIcon::Warning);
              return;
          }

          try {
              ListViewItem^ selectedItem = lstFlights->SelectedItems[0];
              FlightInfo^ flight = safe_cast<FlightInfo^>(selectedItem->Tag);

              String^ confirmationMsg = String::Format(
                  "Flight Booking Confirmation\n\n"
                  "Flight: {0} ({1})\n"
                  "Route: {2} to {3}\n"
                  "Departure: {4:dd/MM/yyyy} at {5}\n"
                  "Arrival: {6:dd/MM/yyyy} at {7}\n"
                  "Duration: {8}h {9}m\n"
                  "Baggage Allowance: {10}kg\n"
                  "Total Price: ${11:F2}\n\n"
                  "Thank you for choosing Expedia!",
                  flight->FlightNo, flight->Airline,
                  flight->DepartureCity, flight->ArrivalCity,
                  flight->DepartureDate, flight->DepartureTime,
                  flight->ReturnDate, flight->ArrivalTime,
                  flight->Duration / 60, flight->Duration % 60,
                  flight->BaggageAllowance,
                  flight->Price);

              MessageBox::Show(confirmationMsg,
                  "Booking Confirmation",
                  MessageBoxButtons::OK,
                  MessageBoxIcon::Information);

              this->Close();
          }
          catch (Exception^ ex) {
              MessageBox::Show("An error occurred: " + ex->Message,
                  "Error",
                  MessageBoxButtons::OK,
                  MessageBoxIcon::Error);
          }
      }

      System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
          this->Close();
      }

      System::Void cmbSortBy_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
          switch (cmbSortBy->SelectedIndex) {
          case 0: flightList->Sort(gcnew Comparison<FlightInfo^>(&SortByPriceAscending)); break;
          case 1: flightList->Sort(gcnew Comparison<FlightInfo^>(&SortByPriceDescending)); break;
          case 2: flightList->Sort(gcnew Comparison<FlightInfo^>(&SortByDepartureTime)); break;
          case 3: flightList->Sort(gcnew Comparison<FlightInfo^>(&SortByArrivalTime)); break;
          case 4: flightList->Sort(gcnew Comparison<FlightInfo^>(&SortByDuration)); break;
          }
          DisplayFlights();
      }

      static int SortByPriceAscending(FlightInfo^ x, FlightInfo^ y) { return x->Price.CompareTo(y->Price); }
      static int SortByPriceDescending(FlightInfo^ x, FlightInfo^ y) { return y->Price.CompareTo(x->Price); }
      static int SortByDepartureTime(FlightInfo^ x, FlightInfo^ y) { return DateTime::Parse(x->DepartureTime).CompareTo(DateTime::Parse(y->DepartureTime)); }
      static int SortByArrivalTime(FlightInfo^ x, FlightInfo^ y) { return DateTime::Parse(x->ArrivalTime).CompareTo(DateTime::Parse(y->ArrivalTime)); }
      static int SortByDuration(FlightInfo^ x, FlightInfo^ y) { return x->Duration.CompareTo(y->Duration); }

      System::Void chkDirectOnly_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
          flightList->Clear();
          AddFlight("EK 203", "Emirates", "10:00 AM", "2:00 PM", 240, 500.0);
          AddFlight("QR 701", "Qatar Airways", "2:00 PM", "6:00 PM", 240, 600.0);
          AddFlight("LH 430", "Lufthansa", "6:00 PM", "10:00 PM", 240, 450.0);
          AddFlight("AA 123", "American Airlines", "8:00 AM", "12:00 PM", 240, 550.0);
          AddFlight("DL 456", "Delta Airlines", "11:00 AM", "4:30 PM", 330, 480.0);

          if (chkDirectOnly->Checked) {
              System::Collections::Generic::List<FlightInfo^>^ filteredList = gcnew System::Collections::Generic::List<FlightInfo^>();
              for each (FlightInfo ^ flight in flightList) {
                  if (flight->Duration < 240) {
                      filteredList->Add(flight);
                  }
              }
              flightList = filteredList;
          }

          DisplayFlights();
          UpdateFlightsCount();
      }
    private: System::Void lstFlights_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    // Handle picture box click event if needed
    // For example, you can show a help dialog or navigate to a different form
    MessageBox::Show("Help or Info about the application.", "Help", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void lblTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

public ref class FlightInfo {
public:
    property String^ FlightNo;
    property String^ Airline;
    property String^ DepartureCity;
    property String^ ArrivalCity;
    property String^ DepartureTime;
    property String^ ArrivalTime;
    property DateTime DepartureDate;
    property DateTime ReturnDate;
    property double Price;
    property int Duration;
    property int BaggageAllowance;
};
}