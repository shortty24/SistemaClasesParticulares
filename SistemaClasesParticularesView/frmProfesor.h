#pragma once

#include "frmEditarAccesoProfesor.h"
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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;






	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage1;













	private: System::Windows::Forms::TabPage^ tabPage3;



	private: System::Windows::Forms::TabPage^ tabPage5;

	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Label^ label9;





















	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::Label^ label11;


	private: Persona^ Usuario;
	private: Persona^ Contrasenha;

private: System::Windows::Forms::DataGridView^ dataGridView4;





	private: Profesor^ ProfesorLogeado;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;









private: System::Windows::Forms::GroupBox^ groupBox8;







private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox2;
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
private: System::Windows::Forms::TextBox^ textBox4;
























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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
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
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(665, 490);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Actividades";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(26, 242);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(589, 182);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Clases Programadas";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column11, this->Column3, this->Column2, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(7, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(550, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmProfesor::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Curso";
			this->Column11->Name = L"Column11";
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(33, 62);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(478, 117);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Clases Programadas";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(72, 70);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(232, 20);
			this->textBox4->TabIndex = 11;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(355, 48);
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
			this->label4->Location = System::Drawing::Point(21, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Fecha :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(72, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(232, 20);
			this->textBox3->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
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
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(673, 516);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView4);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(665, 490);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Perfil";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column10,
					this->Column7, this->Column8, this->Column9
			});
			this->dataGridView4->Location = System::Drawing::Point(67, 66);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(485, 93);
			this->dataGridView4->TabIndex = 16;
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
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Apellido Materno";
			this->Column9->Name = L"Column9";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox3);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(665, 490);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Quejas y/o recomendaciones";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Location = System::Drawing::Point(18, 32);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(359, 403);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Quejas :";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(27, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmProfesor::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"DNI Agraviado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"DNI Agresor :";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Agresion verbal", L"No se presento a la clase",
					L"No dicto los temas pedidos"
			});
			this->comboBox2->Location = System::Drawing::Point(27, 52);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(202, 21);
			this->comboBox2->TabIndex = 13;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(128, 273);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(104, 33);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Enviar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &frmProfesor::button10_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(27, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 11;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox8);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(665, 490);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Configuración";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Location = System::Drawing::Point(445, 87);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(174, 97);
			this->groupBox8->TabIndex = 20;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Horario";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(19, 40);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(106, 23);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Modificar horario";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &frmProfesor::button17_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->dataGridView2);
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->textBox12);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Location = System::Drawing::Point(37, 86);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(373, 312);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Añadir Cursos";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Baja", L"Media", L"Alta" });
			this->comboBox1->Location = System::Drawing::Point(101, 65);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(157, 21);
			this->comboBox1->TabIndex = 21;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(101, 96);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(157, 20);
			this->textBox5->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Tarifa por hora:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
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
			this->dataGridView2->Size = System::Drawing::Size(349, 121);
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
			this->button9->Location = System::Drawing::Point(155, 270);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 23);
			this->button9->TabIndex = 15;
			this->button9->Text = L"Eliminar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmProfesor::button9_Click_1);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(285, 50);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 48);
			this->button16->TabIndex = 14;
			this->button16->Text = L"Añadir";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &frmProfesor::button16_Click);
			// 
			// textBox12
			// 
			this->textBox12->HideSelection = false;
			this->textBox12->Location = System::Drawing::Point(101, 37);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(157, 20);
			this->textBox12->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(56, 39);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Curso :";
			this->label11->Click += gcnew System::EventHandler(this, &frmProfesor::label11_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Configuración general de la cuenta";
			// 
			// frmProfesor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 540);
			this->Controls->Add(this->tabControl1);
			this->Name = L"frmProfesor";
			this->Text = L"Profesor";
			this->Load += gcnew System::EventHandler(this, &frmProfesor::frmProfesor_Load);
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
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
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = ClaseProgramada->objAlumno->objNombre + " " + ClaseProgramada->objAlumno->objApellidoPaterno + " " + ClaseProgramada->objAlumno->objApellidoMaterno;
			fila[1] = ClaseProgramada->objCurso->nombreCurso;
			fila[2] = ClaseProgramada->horaClase;
			fila[3] = ClaseProgramada->fechaClase;
			fila[4] = ClaseProgramada->objLink;
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
		/*ProfesorController^ gestorDatosAlumno = gcnew ProfesorController();
		LogeoController^ gestorLogeo = gcnew LogeoController();*/

		this->dataGridView4->Rows->Clear();

		//TAB PERFIL
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = ProfesorLogeado->dni;
		fila[1] = ProfesorLogeado->objNombre;
		fila[2] = ProfesorLogeado->objApellidoPaterno;
		fila[3] = ProfesorLogeado->objApellidoMaterno;
		this->dataGridView4->Rows->Add(fila);

		//TAB ACTIVIDADES
		List<Clase^>^ listaClasesProgramadas;
		ClaseController^ objGestorLista = gcnew ClaseController();
		listaClasesProgramadas = objGestorLista->ClasesProgramadas(ProfesorLogeado->dni);
		
		List<String^>^ fechas;
		for (int i = 0; i < listaClasesProgramadas->Count; i++) {	
			Clase^ objClase = listaClasesProgramadas[i];
			fechas->Add(objClase->fechaClase);
		}
		
		//List<Clase^>^ listaClasesProgramadasOrdenada;
		//listaClasesProgramadasOrdenada = objGestorLista->ClasesProgramadasOrdenadas(fechas, ProfesorLogeado->dni);

		//objGestorLista->OrdenarLista(fechas, listaClasesProgramadas);

		mostrarGrillaClases(listaClasesProgramadas);

		//TAB QUEJAS Y/O RECOMENDACIÓN
		this->textBox1->Text = ProfesorLogeado->dni;
		

		//TAB CONFIGURACIÓN
		List<Horario^>^ listaHorarioDisponible;
		HorarioController^ objGestorHorario = gcnew HorarioController();
		listaHorarioDisponible = objGestorHorario->HorarioxProfesor(ProfesorLogeado->dni);

		List<Curso^>^ listaCursos;
		CursoController^ objGestorCurso = gcnew CursoController();
		listaCursos = objGestorCurso->CursosxUsusarioProfesor(ProfesorLogeado->objUsuario);
		mostrarGrillaCursos(listaCursos);
	}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		//String^ UsuarioProfesorEditar = this->textBox14->Text;
		//String^ ContrasenhaProfesorEditar = this->textBox13->Text;
		//frmEditarAccesoProfesor^ ventanaEditarAccesoProfesor= gcnew frmEditarAccesoProfesor(UsuarioProfesorEditar, ContrasenhaProfesorEditar);
		//ventanaEditarAccesoProfesor->ShowDialog();
		/*PartidoPoliticoController^ gestorPartidoPolitico = gcnew PartidoPoliticoController();
		gestorPartidoPolitico->CargarPartidosDesdeArchivo();
		List<PartidoPolitico^>^ objListaPartidos = gestorPartidoPolitico->obtenerListaPartidos();
		mostrarGrilla(objListaPartidos);*/
	}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//frmNuevoHorario^ ventanaNuevoHorario= gcnew frmNuevoHorario();
	//ventanaNuevoHorario->ShowDialog();
	/*PartidoPoliticoController^ gestorPartidoPolitico = gcnew PartidoPoliticoController();
	gestorPartidoPolitico->CargarPartidosDesdeArchivo();
	List<PartidoPolitico^>^ objListaPartidos = gestorPartidoPolitico->obtenerListaPartidos();
	mostrarGrilla(objListaPartidos);*/
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre = this->textBox3->Text;
	String^ fecha = this->textBox4->Text;
	List<Clase^>^ listaClasesProgramadas;
	List<Clase^>^ listaClasesProgramadasxNombrexDia;
	ClaseController^ objGestorLista = gcnew ClaseController();
	if ((textBox3->Text != "") || (textBox4->Text != "")) {
		listaClasesProgramadasxNombrexDia = objGestorLista->ClasesProgramadasxNombrexDia(ProfesorLogeado->dni, nombre, fecha);
		mostrarGrillaClases(listaClasesProgramadasxNombrexDia);
	}
	else {
		listaClasesProgramadas = objGestorLista->ClasesProgramadas(ProfesorLogeado->dni);
		mostrarGrillaClases(listaClasesProgramadas);
	}  
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	//int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	//int codigoPartidoEditar = Convert::ToInt32(this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString());
	frmModificarHorario^ ventanaModificarHorario= gcnew frmModificarHorario(ProfesorLogeado->dni);
	ventanaModificarHorario->ShowDialog();
	/*PartidoPoliticoController^ gestorPartidoPolitico = gcnew PartidoPoliticoController();
	gestorPartidoPolitico->CargarPartidosDesdeArchivo();
	List<PartidoPolitico^>^ objListaPartidos = gestorPartidoPolitico->obtenerListaPartidos();
	mostrarGrilla(objListaPartidos);*/
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ CursoParaAñadir = this->textBox12->Text;
		String^ Dificultad = this->comboBox1->Text;
		String^ Precio = this->textBox5->Text;
		Curso^ objCurso = gcnew Curso(CursoParaAñadir, Precio, Dificultad, ProfesorLogeado->objUsuario);
		CursoController^ objGestorCurso = gcnew CursoController();
		objGestorCurso->AñadirCurso(objCurso);
		MessageBox::Show("El curso se ha sido añadido con éxito");
		List<Curso^>^ listaCursos = objGestorCurso->CursosxUsusarioProfesor(ProfesorLogeado->objUsuario);
		mostrarGrillaCursos(listaCursos);
		
	}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	QuejasController^ gestorQueja = gcnew QuejasController();
	gestorQueja->generarQuejaxProfesor(this->textBox2->Text, this->textBox1->Text, this->comboBox2->Text);
	MessageBox::Show("Se realizó la queja con éxito.");
}
};
}
