#pragma once

#include "frmInscripcion.h"
#include "frmInfoProfesorCurso.h"

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
	/// Summary for frmAlumno
	/// </summary>
	public ref class frmAlumno : public System::Windows::Forms::Form
	{
	public:
		frmAlumno(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmAlumno(Alumno^ AlumnoLogeado)
		{
			InitializeComponent();
			this->AlumnoLogeado = AlumnoLogeado;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAlumno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;






	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: Alumno^ AlumnoLogeado; 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;





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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(651, 449);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(643, 423);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Cursos disponibles";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column4, this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 186);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(449, 168);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Curso";
			this->Column1->Name = L"Column1";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Dificultad";
			this->Column4->Name = L"Column4";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Profesor";
			this->Column2->Name = L"Column2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(250, 375);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 28);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Informaci�n";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAlumno::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(83, 373);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Inscripci�n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAlumno::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(19, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 155);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de B�squeda";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"CalculoI", L"FisicaI", L"FisicaII", L"CalculoII" });
			this->comboBox1->Location = System::Drawing::Point(75, 53);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(202, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 26);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAlumno::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Curso :";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(643, 423);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Clases inscritas";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &frmAlumno::tabPage2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView3);
			this->groupBox2->Location = System::Drawing::Point(29, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(479, 168);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Inscripciones Pagadas";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(643, 423);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Quejas y/o recomendaciones";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(19, 23);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(447, 332);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 205);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 20);
			this->textBox1->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"DNI Agraviado:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"DNI Agresor :";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"CalculoI", L"FisicaI", L"FisicaII", L"CalculoII" });
			this->comboBox2->Location = System::Drawing::Point(30, 57);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(202, 21);
			this->comboBox2->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 278);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 33);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Enviar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmAlumno::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Queja :";
			this->label2->Click += gcnew System::EventHandler(this, &frmAlumno::label2_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->monthCalendar1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(643, 423);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Calendario";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(51, 24);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &frmAlumno::monthCalendar1_DateChanged);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox4);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(643, 423);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Perfil";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridView2);
			this->groupBox4->Location = System::Drawing::Point(25, 29);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(574, 278);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Datos del alumno:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column6,
					this->Column5, this->Column9, this->Column8, this->Column7
			});
			this->dataGridView2->Location = System::Drawing::Point(26, 45);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(548, 160);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAlumno::dataGridView2_CellContentClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"DNI";
			this->Column6->Name = L"Column6";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Usuario";
			this->Column5->Name = L"Column5";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Apellido Paterno";
			this->Column9->Name = L"Column9";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Apellido Materno";
			this->Column8->Name = L"Column8";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Nombres";
			this->Column7->Name = L"Column7";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->dataGridView4);
			this->groupBox5->Location = System::Drawing::Point(29, 215);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(479, 173);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Inscripciones En Proceso";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column3,
					this->Column10, this->Column11, this->Column13, this->Column12, this->Column15, this->Column14
			});
			this->dataGridView3->Location = System::Drawing::Point(19, 30);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(435, 113);
			this->dataGridView3->TabIndex = 1;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmAlumno::dataGridView3_CellContentClick);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column16,
					this->Column17, this->Column18, this->Column19, this->Column20, this->Column21, this->Column22
			});
			this->dataGridView4->Location = System::Drawing::Point(19, 33);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(435, 127);
			this->dataGridView4->TabIndex = 0;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Codigo";
			this->Column3->Name = L"Column3";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Curso";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Profesor";
			this->Column11->Name = L"Column11";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Fecha";
			this->Column13->Name = L"Column13";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Hora de Inicio";
			this->Column12->Name = L"Column12";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Horas Solicitadas";
			this->Column15->Name = L"Column15";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Link";
			this->Column14->Name = L"Column14";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Codigo";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Curso";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Profesor";
			this->Column18->Name = L"Column18";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Fecha";
			this->Column19->Name = L"Column19";
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Hora de Inicio";
			this->Column20->Name = L"Column20";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Horas Solicitadas";
			this->Column21->Name = L"Column21";
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Monto";
			this->Column22->Name = L"Column22";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(521, 296);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 30);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Pagar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// frmAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 487);
			this->Controls->Add(this->tabControl1);
			this->Name = L"frmAlumno";
			this->Text = L"frmAlumno";
			this->Load += gcnew System::EventHandler(this, &frmAlumno::frmAlumno_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ nombreProfSeleccionado = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[2]->Value->ToString();
	String^ nombreDelCurso = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
	ProfesorController^ gestorProfesor = gcnew ProfesorController();
	String^ dniProfesor;
	dniProfesor = gestorProfesor->obtenerdnixNombreCompleto(nombreProfSeleccionado);
	frmInscripcion^ ventanaInscripcion = gcnew frmInscripcion(dniProfesor, nombreDelCurso);
	ventanaInscripcion->ShowDialog();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreSeleccinado = this->comboBox1->Text;
	CursoController^ gestorDatosCurso = gcnew CursoController();
	List<Curso^>^ listaCursosSeleccionados = gestorDatosCurso->CursosDisponiblesxNombre(nombreSeleccinado);

	mostrarGrillaxLista(listaCursosSeleccionados);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: void mostrarGrillaxLista(List<Curso^>^ listaCursos) {
	this->dataGridView1->Rows->Clear();
	ProfesorController^ gestorProfesor = gcnew ProfesorController();
	for (int i = 0; i < listaCursos->Count; i++) {
		Curso^ objCurso = listaCursos[i];
		Profesor^ objProfesor = gestorProfesor->buscaProfesor(objCurso->usuarioProfesor);
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = objCurso->nombreCurso;
		fila[1] = objCurso->dificultad;
		fila[2] = objProfesor->objNombre + " " + objProfesor->objApellidoPaterno + " " + objProfesor->objApellidoMaterno;
		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void frmAlumno_Load(System::Object^ sender, System::EventArgs^ e) {
	CursoController^ gestorDatosCurso = gcnew CursoController();
	List<Curso^>^ listaCursosDisponibles = gestorDatosCurso->CursosDisponibles();
	mostrarGrillaxLista(listaCursosDisponibles);


	this->dataGridView2->Rows->Clear();
	
	array<String^>^ fila = gcnew array<String^>(5);
	fila[0] = AlumnoLogeado->dni;
	fila[1] = AlumnoLogeado->objUsuario;
	fila[2] = AlumnoLogeado->objApellidoPaterno;
	fila[3] = AlumnoLogeado->objApellidoMaterno;
	fila[4] = AlumnoLogeado->objNombre;
	this->dataGridView2->Rows->Add(fila);

	
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ nombreProfSeleccionado = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[2]->Value->ToString();
	ProfesorController^ gestorProfesor = gcnew ProfesorController();
	String^ usuarioProfesor;
	usuarioProfesor = gestorProfesor->obtenerUsuarioxNombreCompleto(nombreProfSeleccionado);
	frmInfoProfesorCurso^ ventanaInfoProfesor = gcnew frmInfoProfesorCurso(usuarioProfesor);
	ventanaInfoProfesor->ShowDialog();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
