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
	/// Podsumowanie informacji o JimWendler5_3_1
	/// </summary>
	public ref class JimWendler5_3_1 : public System::Windows::Forms::Form
	{
	public:
		JimWendler5_3_1(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~JimWendler5_3_1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Cykle;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Deadlift;
	private: System::Windows::Forms::TextBox^ BenchPress;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Squat;
	private: System::Windows::Forms::Button^ Zamknij;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;








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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Cykle = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Deadlift = (gcnew System::Windows::Forms::TextBox());
			this->BenchPress = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Squat = (gcnew System::Windows::Forms::TextBox());
			this->Zamknij = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 16);
			this->label6->TabIndex = 35;
			this->label6->Text = L"5/3/1 Jim Wendler";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label6->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 311);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Ile cykli\?";
			this->label5->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::label5_Click);
			// 
			// Cykle
			// 
			this->Cykle->Location = System::Drawing::Point(12, 330);
			this->Cykle->Name = L"Cykle";
			this->Cykle->Size = System::Drawing::Size(100, 22);
			this->Cykle->TabIndex = 33;
			this->Cykle->TextChanged += gcnew System::EventHandler(this, &JimWendler5_3_1::Cykle_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 16);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Deadlift (1 RM)";
			this->label4->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 16);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Bench Press (1 RM)";
			this->label3->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 16);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Squat (1 RM)";
			this->label2->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::label2_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 280);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(88, 20);
			this->radioButton2->TabIndex = 28;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Klasyczny";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &JimWendler5_3_1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 254);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(220, 20);
			this->radioButton1->TabIndex = 27;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1.25KG dla BP/2.5 KG dla SQ/DL";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &JimWendler5_3_1::radioButton1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 235);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 16);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Progresja po zakoñczonym cyklu";
			this->label1->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::label1_Click);
			// 
			// Deadlift
			// 
			this->Deadlift->Location = System::Drawing::Point(12, 192);
			this->Deadlift->Multiline = true;
			this->Deadlift->Name = L"Deadlift";
			this->Deadlift->Size = System::Drawing::Size(163, 31);
			this->Deadlift->TabIndex = 25;
			this->Deadlift->TextChanged += gcnew System::EventHandler(this, &JimWendler5_3_1::Deadlift_TextChanged);
			// 
			// BenchPress
			// 
			this->BenchPress->Location = System::Drawing::Point(12, 126);
			this->BenchPress->Multiline = true;
			this->BenchPress->Name = L"BenchPress";
			this->BenchPress->Size = System::Drawing::Size(163, 31);
			this->BenchPress->TabIndex = 24;
			this->BenchPress->TextChanged += gcnew System::EventHandler(this, &JimWendler5_3_1::BenchPress_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 38);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::Zapisz_Click);
			// 
			// Squat
			// 
			this->Squat->Location = System::Drawing::Point(12, 63);
			this->Squat->Multiline = true;
			this->Squat->Name = L"Squat";
			this->Squat->Size = System::Drawing::Size(163, 31);
			this->Squat->TabIndex = 22;
			this->Squat->TextChanged += gcnew System::EventHandler(this, &JimWendler5_3_1::Squat_TextChanged);
			// 
			// Zamknij
			// 
			this->Zamknij->Location = System::Drawing::Point(344, 376);
			this->Zamknij->Name = L"Zamknij";
			this->Zamknij->Size = System::Drawing::Size(109, 38);
			this->Zamknij->TabIndex = 36;
			this->Zamknij->Text = L"Zamknij";
			this->Zamknij->UseVisualStyleBackColor = true;
			this->Zamknij->Click += gcnew System::EventHandler(this, &JimWendler5_3_1::Zamknij_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(259, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 37;
			this->label7->Text = L"1 Tyd.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(318, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 38;
			this->label8->Text = L"2 Tyd.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(377, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 39;
			this->label9->Text = L"3 Tyd.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(436, 44);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 16);
			this->label10->TabIndex = 40;
			this->label10->Text = L"4 Tyd";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(341, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 16);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Plan 5/3/1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(436, 66);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 16);
			this->label12->TabIndex = 45;
			this->label12->Text = L"50% x 5";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(377, 66);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 16);
			this->label13->TabIndex = 44;
			this->label13->Text = L"75% x 5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(318, 66);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 16);
			this->label14->TabIndex = 43;
			this->label14->Text = L"70% x 3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(259, 66);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 16);
			this->label15->TabIndex = 42;
			this->label15->Text = L"65% x 5";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(436, 91);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 16);
			this->label16->TabIndex = 49;
			this->label16->Text = L"50% x 5";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(377, 91);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 16);
			this->label17->TabIndex = 48;
			this->label17->Text = L"85% x 3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(318, 91);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 16);
			this->label18->TabIndex = 47;
			this->label18->Text = L"80% x 3";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(259, 91);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(52, 16);
			this->label19->TabIndex = 46;
			this->label19->Text = L"75% x 5";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(436, 116);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 16);
			this->label20->TabIndex = 53;
			this->label20->Text = L"50% x 5";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(377, 116);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(59, 16);
			this->label21->TabIndex = 52;
			this->label21->Text = L"95% x 1+";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(318, 116);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 16);
			this->label22->TabIndex = 51;
			this->label22->Text = L"90% x 3+";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(259, 116);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(59, 16);
			this->label23->TabIndex = 50;
			this->label23->Text = L"85% x 5+";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(259, 155);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(188, 16);
			this->label24->TabIndex = 54;
			this->label24->Text = L"Jak obliczyæ swój max (1 RM)\?";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(259, 173);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(150, 16);
			this->label25->TabIndex = 55;
			this->label25->Text = L"C x P x 0,0333 + C = 1RM";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(259, 195);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(90, 16);
			this->label26->TabIndex = 56;
			this->label26->Text = L"Przyk³adowo:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(259, 219);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(218, 16);
			this->label27->TabIndex = 57;
			this->label27->Text = L"Wycisn¹³em 150 kg na 5 powtórzeñ";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(259, 235);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(180, 16);
			this->label28->TabIndex = 58;
			this->label28->Text = L"150 x 5 x 0,0333 + 150= 175 kg";
			// 
			// JimWendler5_3_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 440);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Zamknij);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Cykle);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Deadlift);
			this->Controls->Add(this->BenchPress);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Squat);
			this->Name = L"JimWendler5_3_1";
			this->Text = L"JimWendler5_3_1";
			this->Load += gcnew System::EventHandler(this, &JimWendler5_3_1::JimWendler5_3_1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void JimWendler5_3_1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Squat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BenchPress_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Deadlift_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Cykle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TreningowyMax_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Zapisz_Click(System::Object^ sender, System::EventArgs^ e) {
		int numerPliku = 0;
		String^ nazwaPliku = String::Format("ProgresjaTrojboj_JimWendler5-3-1.txt");

		while (System::IO::File::Exists(nazwaPliku)) {
			numerPliku++;
			nazwaPliku = String::Format("ProgresjaTrojboj_JimWendler5-3-1({0}).txt", numerPliku);
		}

		StreamWriter^ plik1 = gcnew StreamWriter(nazwaPliku);

		int iloscCykli = Convert::ToInt32(Cykle->Text);
		double Przysiad = Convert::ToDouble(Squat->Text);
		double Wyciskanie = Convert::ToDouble(BenchPress->Text);
		double MartwyCiag = Convert::ToDouble(Deadlift->Text);
		int iloscTygodniWJednymCyklu = 4;

		double skokPrzysiadu = 0.0;
		double skokWyciskania = 0.0;
		double skokMartwegoCi¹gu = 0.0;

		if (radioButton1->Checked) {
			skokPrzysiadu = 2.5;
			skokWyciskania = 1.25;
			skokMartwegoCi¹gu = 2.5;
		}
		else if (radioButton2->Checked) {
			skokPrzysiadu = 5.0;
			skokWyciskania = 2.5;
			skokMartwegoCi¹gu = 5.0;
		}

		for (int cykl = 1; cykl <= iloscCykli; ++cykl) {
			int TM_Przysiad = Przysiad * 0.90 + (cykl - 1) * skokPrzysiadu;
			int TM_Wyciskanie = Wyciskanie * 0.90 + (cykl - 1) * skokWyciskania;
			int TM_MartwyCiag = MartwyCiag * 0.90 + (cykl - 1) * skokMartwegoCi¹gu;
			int deload_Przysiad = TM_Przysiad *0.5 ;
			int deload_Wyciskanie = TM_Wyciskanie * 0.5;
			int deload_MartwyCiag = TM_MartwyCiag * 0.5;

			for (int week = 1; week <= iloscTygodniWJednymCyklu; ++week) {
				double mnoznik1 = (week == 1) ? 0.65 : ((week == 2) ? 0.70 :  0.75);
				double mnoznik2 = (week == 1) ? 0.75 : ((week == 2) ? 0.80 :  0.85);
				double mnoznik3 = (week == 1) ? 0.85 : ((week == 2) ? 0.90 : 0.95);

				if (week == 4) {  // 4. tydzieñ - deload
					int SQseria1 = deload_Przysiad;
					int SQseria2 = deload_Przysiad;
					int SQseria3 = deload_Przysiad;

					int BPseria1 = deload_Wyciskanie;
					int BPseria2 = deload_Wyciskanie;
					int BPseria3 = deload_Wyciskanie;

					int DLseria1 = deload_MartwyCiag;
					int DLseria2 = deload_MartwyCiag;
					int DLseria3 = deload_MartwyCiag;

					plik1->WriteLine("Tydzien {0}:", week);
					plik1->WriteLine("Przysiad 1s = {0} kg", SQseria1);
					plik1->WriteLine("Przysiad 2s = {0} kg", SQseria2);
					plik1->WriteLine("Przysiad 3s = {0} kg", SQseria3);
					plik1->WriteLine("Wyciskanie na ³awce 1s = {0} kg", BPseria1);
					plik1->WriteLine("Wyciskanie na ³awce 2s = {0} kg", BPseria2);
					plik1->WriteLine("Wyciskanie na ³awce 3s = {0} kg", BPseria3);
					plik1->WriteLine("Martwy ci¹g 1s = {0} kg", DLseria1);
					plik1->WriteLine("Martwy ci¹g 2s = {0} kg", DLseria2);
					plik1->WriteLine("Martwy ci¹g 3s = {0} kg", DLseria3);
					plik1->WriteLine();  // Nowa linia po ka¿dym tygodniu

				}
				else if (week == 5) {  // 5. tydzieñ - skok w górê
					if (cykl < iloscCykli) {
						TM_Przysiad = TM_Przysiad + skokPrzysiadu;
						TM_Wyciskanie = TM_Wyciskanie + skokWyciskania;
						TM_MartwyCiag = TM_MartwyCiag + skokMartwegoCi¹gu;
					}
				}
				else {
					// Zastosuj ró¿ne mno¿niki dla poszczególnych serii w pierwszym tygodniu
					int SQseria1 = TM_Przysiad * mnoznik1;
					int SQseria2 = TM_Przysiad * mnoznik2;
					int SQseria3 = TM_Przysiad * mnoznik3;
					
					int BPseria1 = TM_Wyciskanie * mnoznik1;
					int BPseria2 = TM_Wyciskanie * mnoznik2;
					int BPseria3 = TM_Wyciskanie * mnoznik3;

					int DLseria1 = TM_MartwyCiag * mnoznik1;
					int DLseria2 = TM_MartwyCiag * mnoznik2;
					int DLseria3 = TM_MartwyCiag * mnoznik3;


					plik1->WriteLine("Tydzien {0}:", week);
					plik1->WriteLine("Przysiad 1s = {0} kg", SQseria1);
					plik1->WriteLine("Przysiad 2s = {0} kg", SQseria2);
					plik1->WriteLine("Przysiad 3s = {0} kg", SQseria3);
					plik1->WriteLine("Wyciskanie na ³awce 1s = {0} kg", BPseria1);
					plik1->WriteLine("Wyciskanie na ³awce 2s = {0} kg", BPseria2);
					plik1->WriteLine("Wyciskanie na ³awce 3s = {0} kg", BPseria3);
					plik1->WriteLine("Martwy ci¹g 1s = {0} kg", DLseria1);
					plik1->WriteLine("Martwy ci¹g 2s = {0} kg", DLseria2);
					plik1->WriteLine("Martwy ci¹g 3s = {0} kg", DLseria3);
					plik1->WriteLine();  // Nowa linia po ka¿dym tygodniu
				}
			}
		}

		plik1->Close();
	}
	private: System::Void Zamknij_Click(System::Object^ sender, System::EventArgs^ e) {
	JimWendler5_3_1::Close();
	}


};
}
