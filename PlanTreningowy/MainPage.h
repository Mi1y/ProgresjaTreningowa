#pragma once

namespace PlanTreningowy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainPage::KG_2_5_CheckedChanged);
			radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainPage::KG_5_CheckedChanged);
			radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MainPage::KG_7_5_CheckedChanged);
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Squat;
	protected:

	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ BenchPress;
	private: System::Windows::Forms::TextBox^ Deadlift;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Week;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;



	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Squat = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BenchPress = (gcnew System::Windows::Forms::TextBox());
			this->Deadlift = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Week = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Squat
			// 
			this->Squat->Location = System::Drawing::Point(12, 70);
			this->Squat->Multiline = true;
			this->Squat->Name = L"Squat";
			this->Squat->Size = System::Drawing::Size(163, 31);
			this->Squat->TabIndex = 0;
			this->Squat->TextChanged += gcnew System::EventHandler(this, &MainPage::Squat_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Zapisz";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainPage::Zapisz_Click);
			// 
			// BenchPress
			// 
			this->BenchPress->Location = System::Drawing::Point(12, 133);
			this->BenchPress->Multiline = true;
			this->BenchPress->Name = L"BenchPress";
			this->BenchPress->Size = System::Drawing::Size(163, 31);
			this->BenchPress->TabIndex = 5;
			this->BenchPress->TextChanged += gcnew System::EventHandler(this, &MainPage::BenchPress_TextChanged);
			// 
			// Deadlift
			// 
			this->Deadlift->Location = System::Drawing::Point(12, 199);
			this->Deadlift->Multiline = true;
			this->Deadlift->Name = L"Deadlift";
			this->Deadlift->Size = System::Drawing::Size(163, 31);
			this->Deadlift->TabIndex = 6;
			this->Deadlift->TextChanged += gcnew System::EventHandler(this, &MainPage::Deadlift_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 255);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Progresja";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 274);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(66, 20);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"2.5 KG";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainPage::KG_2_5_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 300);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(56, 20);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"5 KG";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainPage::KG_5_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 326);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(66, 20);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"7.5 KG";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MainPage::KG_7_5_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Squat";
			this->label2->Click += gcnew System::EventHandler(this, &MainPage::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Bench Press";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Deadlift";
			// 
			// Week
			// 
			this->Week->Location = System::Drawing::Point(181, 274);
			this->Week->Name = L"Week";
			this->Week->Size = System::Drawing::Size(100, 22);
			this->Week->TabIndex = 16;
			this->Week->TextChanged += gcnew System::EventHandler(this, &MainPage::Week_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(178, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Tydzieñ:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(136, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Progresja Liniowa";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 400);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Week);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Deadlift);
			this->Controls->Add(this->BenchPress);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Squat);
			this->Name = L"MainPage";
			this->Text = L"MainPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Squat_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void BenchPress_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Deadlift_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Week_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void KG_2_5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void KG_5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void KG_7_5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Zapisz_Click(System::Object^ sender, System::EventArgs^ e) {
		int numerPliku = 0;
		String^ nazwaPliku = String::Format("ProgresjaTrojboj.txt");

		while (System::IO::File::Exists(nazwaPliku)) {
			numerPliku++;
			nazwaPliku = String::Format("ProgresjaTrojboj({0}).txt", numerPliku);
		}

		StreamWriter^ plik1 = gcnew StreamWriter(nazwaPliku);

		int iloscTygodni = Convert::ToInt32(Week->Text);

		if (radioButton1->Checked) {
			double startowyPrzysiad = Convert::ToDouble(Squat->Text);
			double startowyWyciskanie = Convert::ToDouble(BenchPress->Text);
			double startowyMartwyCiag = Convert::ToDouble(Deadlift->Text);
			for (int week = 1; week <= iloscTygodni; ++week, startowyPrzysiad += 2.5, startowyWyciskanie += 2.5, startowyMartwyCiag += 2.5) {
				plik1->WriteLine("Przysiad {0} kg {1} week", startowyPrzysiad, week);
				plik1->WriteLine("Wyciskanie na ³awce {0} kg {1} week", startowyWyciskanie, week);
				plik1->WriteLine("Martwy ci¹g {0} kg {1} week \n", startowyMartwyCiag, week);
			}
		}
		else if (radioButton2->Checked) {
			double startowyPrzysiad = Convert::ToDouble(Squat->Text);
			double startowyWyciskanie = Convert::ToDouble(BenchPress->Text);
			double startowyMartwyCiag = Convert::ToDouble(Deadlift->Text);
			for (int week = 1; week <= iloscTygodni; ++week, startowyPrzysiad += 5, startowyWyciskanie += 5, startowyMartwyCiag += 5) {
				plik1->WriteLine("Przysiad {0} kg {1} week", startowyPrzysiad, week);
				plik1->WriteLine("Wyciskanie na ³awce {0} kg {1} week", startowyWyciskanie, week);
				plik1->WriteLine("Martwy ci¹g {0} kg {1} week \n", startowyMartwyCiag, week);
			}
		}
		else if (radioButton3->Checked) {
			double startowyPrzysiad = Convert::ToDouble(Squat->Text);
			double startowyWyciskanie = Convert::ToDouble(BenchPress->Text);
			double startowyMartwyCiag = Convert::ToDouble(Deadlift->Text);
			for (int week = 1; week <= iloscTygodni; ++week, startowyPrzysiad += 7.5, startowyWyciskanie += 7.5, startowyMartwyCiag += 7.5) {
				plik1->WriteLine("Przysiad {0} kg {1} week", startowyPrzysiad, week);
				plik1->WriteLine("Wyciskanie na ³awce {0} kg {1} week", startowyWyciskanie, week);
				plik1->WriteLine("Martwy ci¹g {0} kg {1} week \n", startowyMartwyCiag, week);
			}
		}

		plik1->Close();
	}
};
}
