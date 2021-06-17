#pragma once

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaClasesParticularesController;
	using namespace SistemaClasesParticularesModel;

	/// <summary>
	/// Summary for frmModificarHorario
	/// </summary>
	public ref class frmModificarHorario : public System::Windows::Forms::Form
	{
	public:
		frmModificarHorario(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmModificarHorario(String^ dniProfesor)
		{
			InitializeComponent();
			this->dniProfesor = dniProfesor;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmModificarHorario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox9;
	protected:
	private: System::Windows::Forms::CheckedListBox^ checkedListBox7;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox4;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox3;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox5;
	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::GroupBox^ groupBox14;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox6;
	private: System::Windows::Forms::GroupBox^ groupBox15;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: String^ dniProfesor;
	private: List<Horario^>^ listaHorario;

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
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox7 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox6 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->checkedListBox7);
			this->groupBox9->Location = System::Drawing::Point(564, 22);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(86, 409);
			this->groupBox9->TabIndex = 34;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Domingo";
			// 
			// checkedListBox7
			// 
			this->checkedListBox7->FormattingEnabled = true;
			this->checkedListBox7->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"21-22", L"22-23", L"23-0"
			});
			this->checkedListBox7->Location = System::Drawing::Point(6, 21);
			this->checkedListBox7->Name = L"checkedListBox7";
			this->checkedListBox7->Size = System::Drawing::Size(69, 379);
			this->checkedListBox7->TabIndex = 0;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->checkedListBox4);
			this->groupBox10->Location = System::Drawing::Point(472, 22);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(86, 409);
			this->groupBox10->TabIndex = 33;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Sábado";
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"21-22", L"22-23", L"23-0"
			});
			this->checkedListBox4->Location = System::Drawing::Point(6, 21);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(69, 379);
			this->checkedListBox4->TabIndex = 0;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->checkedListBox3);
			this->groupBox11->Location = System::Drawing::Point(196, 22);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(86, 409);
			this->groupBox11->TabIndex = 29;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Miércoles";
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"21-22", L"22-23", L"23-0"
			});
			this->checkedListBox3->Location = System::Drawing::Point(6, 21);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(69, 379);
			this->checkedListBox3->TabIndex = 0;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->checkedListBox5);
			this->groupBox12->Location = System::Drawing::Point(380, 22);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(86, 409);
			this->groupBox12->TabIndex = 32;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Viernes";
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"21-22", L"22-23", L"23-0"
			});
			this->checkedListBox5->Location = System::Drawing::Point(6, 21);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(69, 379);
			this->checkedListBox5->TabIndex = 0;
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->checkedListBox2);
			this->groupBox13->Location = System::Drawing::Point(104, 22);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(86, 409);
			this->groupBox13->TabIndex = 30;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Martes";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"21-22", L"22-23", L"23-0"
			});
			this->checkedListBox2->Location = System::Drawing::Point(6, 21);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(69, 379);
			this->checkedListBox2->TabIndex = 0;
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->checkedListBox6);
			this->groupBox14->Location = System::Drawing::Point(288, 22);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(86, 409);
			this->groupBox14->TabIndex = 31;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Jueves";
			// 
			// checkedListBox6
			// 
			this->checkedListBox6->FormattingEnabled = true;
			this->checkedListBox6->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"21-22", L"22-23", L"23-0"
			});
			this->checkedListBox6->Location = System::Drawing::Point(6, 21);
			this->checkedListBox6->Name = L"checkedListBox6";
			this->checkedListBox6->Size = System::Drawing::Size(69, 379);
			this->checkedListBox6->TabIndex = 0;
			// 
			// groupBox15
			// 
			this->groupBox15->Controls->Add(this->checkedListBox1);
			this->groupBox15->Location = System::Drawing::Point(12, 22);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(86, 409);
			this->groupBox15->TabIndex = 28;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"Lunes";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0-1", L"1-2", L"2-3", L"3-4", L"4-5", L"5-6",
					L"6-7", L"7-8", L"8-9", L"9-10", L"10-11", L"11-12", L"12-13", L"13-14", L"14-15", L"15-16", L"16-17", L"17-18", L"18-19", L"19-20",
					L"20-21", L"21-22", L"22-23", L"23-0"
			});
			this->checkedListBox1->Location = System::Drawing::Point(6, 21);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(69, 379);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmModificarHorario::checkedListBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(294, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// frmModificarHorario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(669, 519);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox12);
			this->Controls->Add(this->groupBox13);
			this->Controls->Add(this->groupBox14);
			this->Controls->Add(this->groupBox15);
			this->Name = L"frmModificarHorario";
			this->Text = L"frmModificarHorario";
			this->Load += gcnew System::EventHandler(this, &frmModificarHorario::frmModificarHorario_Load);
			this->groupBox9->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox15->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmModificarHorario_Load(System::Object^ sender, System::EventArgs^ e) {
		HorarioController^ objGestorHorario = gcnew HorarioController();
		List<Horario^>^ listaHorario = objGestorHorario->HorarioxProfesor(this->dniProfesor);

		for (int i = 0; i < listaHorario->Count; i++) {
			Horario^ objHorario = listaHorario[i];
			if (this->groupBox15->Text == objHorario->dia) {
				for (int j = 0; j < objHorario->horasDisponibles->Count; j++) {
					if (objHorario->horasDisponibles[j] != "-") {
						this->checkedListBox1->SetItemChecked(j, true);
					}
				}
			}
			else if (this->groupBox13->Text == objHorario->dia) {
				for (int k = 0; k <objHorario->horasDisponibles->Count; k++) {
					if (objHorario->horasDisponibles[k] != "-") {
						this->checkedListBox2->SetItemChecked(k, true);
					}
				}
			}
			else if (this->groupBox11->Text == objHorario->dia) {
				for (int l = 0; l < objHorario->horasDisponibles->Count; l++) {
					if (objHorario->horasDisponibles[l] != "-") {
						this->checkedListBox2->SetItemChecked(l, true);
					}
				}
			}
			else if (this->groupBox14->Text == objHorario->dia) {
				for (int m = 0; m < objHorario->horasDisponibles->Count; m++) {
					if (objHorario->horasDisponibles[m] != "-") {
						this->checkedListBox2->SetItemChecked(m, true);
					}
				}
			}
			else if (this->groupBox12->Text == objHorario->dia) {
				for (int n = 0; n < objHorario->horasDisponibles->Count; n++) {
					if (objHorario->horasDisponibles[n] != "-") {
						this->checkedListBox2->SetItemChecked(n, true);
					}
				}
			}
			else if (this->groupBox10->Text == objHorario->dia) {
				for (int o = 0; o < objHorario->horasDisponibles->Count; o++) {
					if (objHorario->horasDisponibles[o] != "-") {
						this->checkedListBox2->SetItemChecked(o, true);
					}
				}
			}
			else if (this->groupBox9->Text == objHorario->dia) {
				for (int p = 0; p < objHorario->horasDisponibles->Count; p++) {
					if (objHorario->horasDisponibles[p] != "-") {
						this->checkedListBox2->SetItemChecked(p, true);
					}
				}
			}
		}
		


		/*if (this->groupBox15->Text == objHorario->dia) {
			for (int i = 0; i < objHorario->horasDisponibles->Count; i++) {
				this->checkedListBox1->SetItemChecked(1, true);	
			}
		}*/
		/*this->textBox1->Text = Convert::ToString(objPartido->codigo);
		this->textBox2->Text = objPartido->nombre;
		this->textBox3->Text = objPartido->simbolo;
		this->textBox4->Text = objPartido->fechaFundacion;
		this->listaMiembros = objPartido->listaAlumnos;
		mostrarGrilla(this->listaMiembros);*/
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
