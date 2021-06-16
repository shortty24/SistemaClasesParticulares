#pragma once

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmNuevoHorario
	/// </summary>
	public ref class frmNuevoHorario : public System::Windows::Forms::Form
	{
	public:
		frmNuevoHorario(void)
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
		~frmNuevoHorario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;





	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;


	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox7;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox6 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox7 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Hora de inicio :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Hora final :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(294, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoHorario::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(151, 77);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(142, 21);
			this->comboBox2->TabIndex = 9;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(151, 114);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(142, 21);
			this->comboBox3->TabIndex = 10;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkedListBox1);
			this->groupBox2->Location = System::Drawing::Point(12, 151);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(86, 376);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Lunes";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(151, 38);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"22-23", L"24-0"
			});
			this->checkedListBox1->Location = System::Drawing::Point(6, 21);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(69, 349);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevoHorario::checkedListBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkedListBox2);
			this->groupBox1->Location = System::Drawing::Point(104, 151);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(86, 376);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Martes";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"22-23", L"24-0"
			});
			this->checkedListBox2->Location = System::Drawing::Point(6, 21);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(69, 349);
			this->checkedListBox2->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkedListBox3);
			this->groupBox3->Location = System::Drawing::Point(196, 151);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(86, 376);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Miércoles";
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"22-23", L"24-0"
			});
			this->checkedListBox3->Location = System::Drawing::Point(6, 21);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(69, 349);
			this->checkedListBox3->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkedListBox4);
			this->groupBox4->Location = System::Drawing::Point(472, 151);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(86, 376);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Sábado";
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"22-23", L"24-0"
			});
			this->checkedListBox4->Location = System::Drawing::Point(6, 21);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(69, 349);
			this->checkedListBox4->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->checkedListBox5);
			this->groupBox5->Location = System::Drawing::Point(380, 151);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(86, 376);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Viernes";
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"22-23", L"24-0"
			});
			this->checkedListBox5->Location = System::Drawing::Point(6, 21);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(69, 349);
			this->checkedListBox5->TabIndex = 0;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->checkedListBox6);
			this->groupBox6->Location = System::Drawing::Point(288, 151);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(86, 376);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Jueves";
			// 
			// checkedListBox6
			// 
			this->checkedListBox6->FormattingEnabled = true;
			this->checkedListBox6->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"22-23", L"24-0"
			});
			this->checkedListBox6->Location = System::Drawing::Point(6, 21);
			this->checkedListBox6->Name = L"checkedListBox6";
			this->checkedListBox6->Size = System::Drawing::Size(69, 349);
			this->checkedListBox6->TabIndex = 0;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->checkedListBox7);
			this->groupBox7->Location = System::Drawing::Point(564, 151);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(86, 376);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Domingo";
			// 
			// checkedListBox7
			// 
			this->checkedListBox7->FormattingEnabled = true;
			this->checkedListBox7->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"22-23", L"24-0"
			});
			this->checkedListBox7->Location = System::Drawing::Point(6, 21);
			this->checkedListBox7->Name = L"checkedListBox7";
			this->checkedListBox7->Size = System::Drawing::Size(69, 349);
			this->checkedListBox7->TabIndex = 0;
			// 
			// frmNuevoHorario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 587);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmNuevoHorario";
			this->Text = L"frmNuevoHorario";
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
