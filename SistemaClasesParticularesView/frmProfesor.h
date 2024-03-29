#pragma once

#include "frmModificarHorario.h"


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
	/// Summary for frmProfesor
	/// </summary>
	public ref class frmProfesor : public System::Windows::Forms::Form
	{
	public:
		frmProfesor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmProfesor(Profesor^ ProfesorLogeado)
		{
			InitializeComponent();
			this->ProfesorLogeado = ProfesorLogeado;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmProfesor()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox5;

	private: System::Windows::Forms::Label^ label11;
	private: Persona^ Usuario;
	private: Persona^ Contrasenha;

private: System::Windows::Forms::DataGridView^ dataGridView4;





	private: Profesor^ ProfesorLogeado;




private: System::Windows::Forms::Button^ button16;














private: System::Windows::Forms::GroupBox^ groupBox8;







private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;

private: System::Windows::Forms::Button^ button10;

private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;

private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::ComboBox^ comboBox2;






private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Button^ button1;






private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;































	protected:






























	protected:



	protected:



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(610, 490);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Actividades";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(239, 193);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Finalizar clase";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmProfesor::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(19, 245);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(572, 239);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Clases Programadas";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column12,
					this->Column1, this->Column11, this->Column3, this->Column2, this->Column4, this->Column13
			});
			this->dataGridView1->Location = System::Drawing::Point(7, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(559, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmProfesor::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(33, 62);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(418, 117);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Clases Programadas";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(86, 70);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(196, 23);
			this->comboBox5->TabIndex = 12;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(86, 38);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(196, 23);
			this->comboBox4->TabIndex = 11;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(328, 52);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 36);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Buscar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &frmProfesor::button8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 15);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Fecha :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Alumno:";
			this->label3->Click += gcnew System::EventHandler(this, &frmProfesor::label3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(618, 516);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(610, 490);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Perfil";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(477, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(80, 20);
			this->textBox2->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(399, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Saldo actual :";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column10,
					this->Column7, this->Column8, this->Column9
			});
			this->dataGridView4->Location = System::Drawing::Point(12, 24);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(550, 140);
			this->dataGridView4->TabIndex = 16;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox3);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(610, 490);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Quejas";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(125, 35);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(356, 403);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Quejas :";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(22, 223);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(205, 23);
			this->comboBox3->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(22, 36);
			this->textBox6->MaxLength = 50;
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(312, 125);
			this->textBox6->TabIndex = 17;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmProfesor::textBox6_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(22, 293);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 21);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmProfesor::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 266);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 15);
			this->label1->TabIndex = 15;
			this->label1->Text = L"DNI Agraviado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 15);
			this->label2->TabIndex = 14;
			this->label2->Text = L"DNI Agresor :";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(136, 350);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(68, 33);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Enviar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmProfesor::button10_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox8);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(610, 490);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Configuraci�n";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->Location = System::Drawing::Point(445, 87);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(144, 80);
			this->groupBox8->TabIndex = 20;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Horario";
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(20, 33);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(106, 23);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Modificar horario";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &frmProfesor::button17_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox2);
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->dataGridView2);
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(37, 86);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(402, 322);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"A�adir Cursos";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(36) {
				L"Algebra matricial y geometria analitica", L"Algebra lineal",
					L"Ciencia y filosofia", L"Matematica basica", L"Estadistica", L"Quimica 1", L"Qu�mica 2", L"Fundamentos de calculo", L"Calculo diferencial",
					L"Calculo integral", L"Calculo aplicado", L"Calculo en varias variables", L"Fundamentos de Fisica", L"Fisica 1", L"Fisica 2",
					L"Fisica 3", L"Comunicacion academica", L"Tecnicas de programacion", L"Estadistica para ingenieria", L"Circuitos electricos",
					L"Sistemas digitales", L"Dinamica", L"Representacion grafica para ingenieria", L"Electronica basica", L"Lenguaje de programacion orientada a objetos",
					L"Resistencia de materiales 1", L"Termofluidos", L"Ingenieria de materiales", L"Procesos y tecnologias de fabricacion", L"Control automatico",
					L"Introduccion al dise�o de maquinas", L"Procesamiento de se�ales e imagenes digitales", L"Ingenieria economica", L"Manufactura integrada por computadora",
					L"Metodologia del dise�o mecatronico", L"Teoria de control 2"
			});
			this->comboBox2->Location = System::Drawing::Point(131, 36);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(157, 23);
			this->comboBox2->TabIndex = 26;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Baja", L"Media", L"Alta" });
			this->comboBox1->Location = System::Drawing::Point(130, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(157, 23);
			this->comboBox1->TabIndex = 21;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(130, 96);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(157, 21);
			this->textBox5->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 15);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Tarifa por hora:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 15);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Dificultad :";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column5,
					this->Column6, this->Column19
			});
			this->dataGridView2->Location = System::Drawing::Point(18, 131);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(360, 121);
			this->dataGridView2->TabIndex = 21;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Curso";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Dificultad";
			this->Column6->Name = L"Column6";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Tarifa";
			this->Column19->Name = L"Column19";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(153, 270);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(82, 36);
			this->button9->TabIndex = 15;
			this->button9->Text = L"Eliminar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmProfesor::button9_Click_1);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(310, 58);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(68, 34);
			this->button16->TabIndex = 14;
			this->button16->Text = L"A�adir";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &frmProfesor::button16_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(62, 39);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 15);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Curso :";
			this->label11->Click += gcnew System::EventHandler(this, &frmProfesor::label11_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(34, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(253, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Configuracion de Cursos y Horarios";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->chart1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(610, 490);
			this->tabPage4->TabIndex = 5;
			this->tabPage4->Text = L"Reportes";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 29);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cursos Pedidos";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(598, 431);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"DNI Alumno";
			this->Column12->Name = L"Column12";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Curso";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 80;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Link";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"C�digo Clase";
			this->Column13->Name = L"Column13";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label8->Location = System::Drawing::Point(133, 173);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(201, 15);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Cantidad m�xima de caracteres: 50";
			this->label8->Click += gcnew System::EventHandler(this, &frmProfesor::label8_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridView4);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(21, 112);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(568, 170);
			this->groupBox4->TabIndex = 19;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Datos personales";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"DNI";
			this->Column10->Name = L"Column10";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Nombre";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Apellido Paterno";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 140;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Apellido Materno";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 140;
			// 
			// frmProfesor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 540);
			this->Controls->Add(this->tabControl1);
			this->Name = L"frmProfesor";
			this->Text = L"Profesor";
			this->Load += gcnew System::EventHandler(this, &frmProfesor::frmProfesor_Load);
			this->Shown += gcnew System::EventHandler(this, &frmProfesor::frmProfesor_Shown);
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void calendarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	private: void mostrarGrillaClases(List<Clase^>^ objClase) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < objClase->Count; i++) {
			Clase^ ClaseProgramada = objClase[i];
			array<String^>^ fila = gcnew array<String^>(7);
			fila[0] = ClaseProgramada->objAlumno->dni;
			fila[1] = ClaseProgramada->objAlumno->objNombre + " " + ClaseProgramada->objAlumno->objApellidoPaterno + " " + ClaseProgramada->objAlumno->objApellidoMaterno;
			fila[2] = ClaseProgramada->objCurso->nombreCurso;
			fila[3] = ClaseProgramada->horaClase;
			fila[4] = ClaseProgramada->fechaClase;
			fila[5] = ClaseProgramada->objLink;
			fila[6] = Convert::ToString(ClaseProgramada->objPago->objInscripcion->codigoIns);
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: void mostrarGrillaCursos(List<Curso^>^ objCurso) {
		this->dataGridView2->Rows->Clear();
		for (int i = 0; i < objCurso->Count; i++) {
			Curso^ CursoEnsenhado = objCurso[i];
			array<String^>^ fila = gcnew array<String^>(3);
			fila[0] = CursoEnsenhado->nombreCurso;
			fila[1] = CursoEnsenhado->dificultad;
			fila[2] = CursoEnsenhado->precioCurso;

			this->dataGridView2->Rows->Add(fila);
		}
	}


	private: System::Void frmProfesor_Load(System::Object^ sender, System::EventArgs^ e) {

		/*TAB PERFIL*/
		this->dataGridView4->Rows->Clear();
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = ProfesorLogeado->dni;
		fila[1] = ProfesorLogeado->objNombre;
		fila[2] = ProfesorLogeado->objApellidoPaterno;
		fila[3] = ProfesorLogeado->objApellidoMaterno;
		this->dataGridView4->Rows->Add(fila);

		SaldoController^ objGestorSaldo = gcnew SaldoController();
		this->textBox2->Text = objGestorSaldo->obtenerSaldoBD(ProfesorLogeado->dni);


		/*TAB ACTIVIDADES*/
		List<Clase^>^ listaClasesProgramadas;	
		ClaseController^ objGestorLista = gcnew ClaseController();
		listaClasesProgramadas = objGestorLista->ClasesProgramadasxProfesorBD(ProfesorLogeado->dni);
		mostrarGrillaClases(listaClasesProgramadas);

		this->comboBox4->Items->Clear();
		for (int i = 0; i < listaClasesProgramadas->Count; i++) {
			this->comboBox4->Items->Add(listaClasesProgramadas[i]->objAlumno->objNombre);
		}

		this->comboBox5->Items->Clear();
		for (int i = 0; i < listaClasesProgramadas->Count; i++) {
			this->comboBox5->Items->Add(listaClasesProgramadas[i]->fechaClase);
		}


		/*TAB QUEJAS Y/O RECOMENDACI�N*/
		AlumnoController^ objGestorAlumno = gcnew AlumnoController();
		List<Alumno^>^ listaAlumnos = objGestorAlumno->buscarAlumnosPotencialesAQuejaBD(ProfesorLogeado->dni);
		this->comboBox3->Items->Clear();
		for (int i = 0; i < listaAlumnos->Count; i++) {
			this->comboBox3->Items->Add(listaAlumnos[i]->dni);
		}
		this->textBox1->Text = ProfesorLogeado->dni;


		/*TAB CONFIGURACI�N*/
		List<Curso^>^ listaCursosEnsenhados;
		CursoController^ objGestorCurso = gcnew CursoController();
		listaCursosEnsenhados = objGestorCurso->CursosxUsusarioProfesorBD(ProfesorLogeado->objUsuario);
		mostrarGrillaCursos(listaCursosEnsenhados);


		/*REPORTES*/
		List<String^>^ listaCurso = objGestorLista->obtenerListaCursosPedidos(ProfesorLogeado->dni);
		ReporteCursos^ objReporteCursos;
		List<ReporteCursos^>^ listaReporteCursos = gcnew List<ReporteCursos^>();
		//array<int>^ cantidades1 = { objGestorReporte->ObtenerCantidadAlumnos(),objGestorReporte->ObtenerCantidadProfesores() };
		int m = 0;
		for (int i = 0; i < listaCursosEnsenhados->Count; i++) {
			for (int j = 0; j < listaCurso->Count; j++) {
				if (listaCursosEnsenhados[i]->nombreCurso == listaCurso[j]) {
					m++;
				}
			}
			objReporteCursos = gcnew ReporteCursos(listaCursosEnsenhados[i]->nombreCurso, m);
			listaReporteCursos->Add(objReporteCursos);
			m = 0;
		}

		for (int i = 0; i < listaReporteCursos->Count; i++) {
			this->chart1->Series["Cursos Pedidos"]->Points->Add(listaReporteCursos[i]->cantidad);
			this->chart1->Series["Cursos Pedidos"]->Points[i]->AxisLabel = listaReporteCursos[i]->nombreCurso;
			this->chart1->Series["Cursos Pedidos"]->Points[i]->LegendText = listaReporteCursos[i]->nombreCurso;
			this->chart1->Series["Cursos Pedidos"]->Points[i]->Label = Convert::ToString(listaReporteCursos[i]->cantidad);
		}
	}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ nombreAlumno = this->comboBox4->Text;
		String^ fecha = this->comboBox5->Text;

		ClaseController^ objGestorLista = gcnew ClaseController();
		List<Clase^>^ listaClasesProgramadas = objGestorLista->ClasesProgramadasxProfesorBD(ProfesorLogeado->dni);
		
		/*for (int i = 0; i < listaClasesProgramadas->Count; i++) {
			Clase^ objClase = listaClasesProgramadas[i];
			if(objClase->
		}*/
		
		if ((comboBox4->Text != "") && (comboBox5->Text != "")) {
			List<Clase^>^ listaClasesProgramadasxNombrexDia = objGestorLista->ClasesProgramadasxNombrexDiaBD(ProfesorLogeado->dni, nombreAlumno, fecha);
			mostrarGrillaClases(listaClasesProgramadasxNombrexDia);
		}
		else if ((this->comboBox4->SelectedIndex == -1) && (comboBox5->Text != "")) {
			List<Clase^>^ listaClasesProgramadasxDia = objGestorLista->ClasesProgramadasxDiaBD(ProfesorLogeado->dni, fecha);
			mostrarGrillaClases(listaClasesProgramadasxDia);
		}
		else if (((comboBox4->Text != "") && (this->comboBox5->SelectedIndex == -1))) {
			List<Clase^>^ listaClasesProgramadasxNombre = objGestorLista->ClasesProgramadasxNombreBD(ProfesorLogeado->dni, nombreAlumno);
			mostrarGrillaClases(listaClasesProgramadasxNombre);
		}	
		else if (((this->comboBox4->SelectedIndex == 1) || (this->comboBox4->SelectedIndex == 0)) && (comboBox5->Text != "")) {
			List<Clase^>^ listaClasesProgramadasxDia = objGestorLista->ClasesProgramadasxDiaBD(ProfesorLogeado->dni, fecha);
			mostrarGrillaClases(listaClasesProgramadasxDia);
		}
		else if (((comboBox4->Text != "") && ((this->comboBox5->SelectedIndex == 1)|| (this->comboBox5->SelectedIndex == 0)))) {
			List<Clase^>^ listaClasesProgramadasxNombre = objGestorLista->ClasesProgramadasxNombreBD(ProfesorLogeado->dni, nombreAlumno);
			mostrarGrillaClases(listaClasesProgramadasxNombre);
		}
		else{
			MessageBox::Show("Debe seleccionar al menos un campo");
			mostrarGrillaClases(listaClasesProgramadas);
		} 

		this->comboBox4->Text = "";
		this->comboBox5->Text = "";
		this->comboBox4->SelectedIndex == -1;
		this->comboBox5->SelectedIndex == -1;
	}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {	
}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		frmModificarHorario^ ventanaModificarHorario= gcnew frmModificarHorario(ProfesorLogeado->dni);
		ventanaModificarHorario->ShowDialog();
	}

private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ CursoParaA�adir = this->comboBox2->Text;
		String^ Dificultad = this->comboBox1->Text;
		String^ Precio = this->textBox5->Text;
		Curso^ objCurso = gcnew Curso(CursoParaA�adir, Precio, Dificultad, ProfesorLogeado->objUsuario);
		CursoController^ objGestorCurso = gcnew CursoController();
		objGestorCurso->A�adirCursoBD(objCurso);
		MessageBox::Show("El curso se ha sido a�adido con �xito");

		List<Curso^>^ listaCursos = objGestorCurso->CursosxUsusarioProfesorBD(ProfesorLogeado->objUsuario);
		mostrarGrillaCursos(listaCursos);
	}

	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int posicionFilaSeleccionada = this->dataGridView2->SelectedRows[0]->Index;
		String^ curso = this->dataGridView2->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
		CursoController^ objGestorCurso = gcnew CursoController();
		objGestorCurso->EliminarCursoBD(ProfesorLogeado->objUsuario, curso);

		MessageBox::Show("El curso se ha eliminado con �xito");

		List<Curso^>^ listaCursos = objGestorCurso->CursosxUsusarioProfesorBD(ProfesorLogeado->objUsuario);
		mostrarGrillaCursos(listaCursos);
	}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

		QuejasController^ gestorQueja = gcnew QuejasController();
		gestorQueja->generarQuejaxProfesor(this->comboBox3->Text, this->textBox1->Text, this->textBox6->Text);
		MessageBox::Show("Se realiz� la queja con �xito.");
		this->textBox6->Clear();
	}

private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void frmProfesor_Shown(System::Object^ sender, System::EventArgs^ e) {
		/*VENTANA EMERGENTE*/
		ClaseController^ objGestorClase = gcnew ClaseController();
		Clase^ objClase = objGestorClase->obtenerProximaClase(ProfesorLogeado->dni);
		if (objClase != nullptr) {
			MessageBox::Show("Recuerde que el " + objClase->fechaClase + " tiene una clase programada con el alumno " + objClase->objAlumno->objNombre + " " + objClase->objAlumno->objApellidoPaterno +
				" " + objClase->objAlumno->objApellidoMaterno + " a las " + objClase->horaClase);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ClaseController^ objGestorClase = gcnew ClaseController();
	PagoController^ objGestorPago = gcnew PagoController();

	if (this->dataGridView1->SelectedRows->Count != 0) {
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ codigo = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[6]->Value->ToString();

		
		
		Clase^ objClase = objGestorClase->obtenerClaseSeleccionadaBD(Convert::ToInt32(codigo));

		if ((objClase->EstadoLink == "programada")) {
			objGestorClase->actualizarClaseBD(objClase);
			objGestorPago->actualizarPagoBD(objClase);

			MessageBox::Show("La clase acaba de ser finalizada");
		}
		else {
			MessageBox::Show("Esta clase ya est� finalizada");
		}

	}
	else {
		MessageBox::Show("Debe seleccionar una fila para eliminar");
	}
	
	List<Clase^>^ listaClasesProgramadas;
	listaClasesProgramadas = objGestorClase->ClasesProgramadasxProfesorBD(ProfesorLogeado->dni);
	mostrarGrillaClases(listaClasesProgramadas);

	AlumnoController^ objGestorAlumno = gcnew AlumnoController();
	List<Alumno^>^ listaAlumnos = objGestorAlumno->buscarAlumnosPotencialesAQuejaBD(ProfesorLogeado->dni);
	this->comboBox3->Items->Clear();
	for (int i = 0; i < listaAlumnos->Count; i++) {
		this->comboBox3->Items->Add(listaAlumnos[i]->dni);
	}
	this->textBox1->Text = ProfesorLogeado->dni;

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
