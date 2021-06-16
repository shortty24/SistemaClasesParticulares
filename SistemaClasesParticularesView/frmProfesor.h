#pragma once

#include "frmEditarAccesoProfesor.h"
#include "frmNuevoHorario.h"
#include "frmEditarHorario.h"

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
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;






	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage1;






	private: System::Windows::Forms::PictureBox^ pictureBox1;






	private: System::Windows::Forms::TabPage^ tabPage3;



	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;







	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label15;
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
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox2;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmProfesor::typeid));
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(787, 476);
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
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
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
			// button8
			// 
			this->button8->Location = System::Drawing::Point(356, 53);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 23);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Buscar";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(288, 69);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 28);
			this->button7->TabIndex = 9;
			this->button7->Text = L"D";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(252, 69);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 28);
			this->button6->TabIndex = 8;
			this->button6->Text = L"S";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(216, 69);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 28);
			this->button5->TabIndex = 7;
			this->button5->Text = L"V";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(180, 69);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 28);
			this->button4->TabIndex = 6;
			this->button4->Text = L"J";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(144, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 28);
			this->button3->TabIndex = 5;
			this->button3->Text = L"M";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(108, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 28);
			this->button2->TabIndex = 4;
			this->button2->Text = L"M";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"L";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Fecha:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(72, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(239, 20);
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
			this->tabControl1->Size = System::Drawing::Size(795, 502);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox7);
			this->tabPage1->Controls->Add(this->dataGridView4);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(787, 476);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Perfil";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->dataGridView5);
			this->groupBox7->Location = System::Drawing::Point(6, 190);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(765, 210);
			this->groupBox7->TabIndex = 17;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Horario de disponibilidad";
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column12,
					this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18
			});
			this->dataGridView5->Location = System::Drawing::Point(6, 26);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(753, 163);
			this->dataGridView5->TabIndex = 0;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"lunes";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"martes";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"miércoles";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"jueves";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"viernes";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"sábado";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"domingo";
			this->Column18->Name = L"Column18";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column10,
					this->Column7, this->Column8, this->Column9
			});
			this->dataGridView4->Location = System::Drawing::Point(182, 59);
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
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(123, 134);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->groupBox4);
			this->tabPage5->Controls->Add(this->groupBox3);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(787, 476);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Quejas y/o recomendaciones";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridView3);
			this->groupBox4->Controls->Add(this->button13);
			this->groupBox4->Controls->Add(this->textBox10);
			this->groupBox4->Controls->Add(this->button14);
			this->groupBox4->Controls->Add(this->button15);
			this->groupBox4->Location = System::Drawing::Point(417, 64);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(340, 403);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Recomendaciones :";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->dataGridView3->Location = System::Drawing::Point(16, 94);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(240, 150);
			this->dataGridView3->TabIndex = 5;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Código";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Motivo";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(175, 269);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(61, 23);
			this->button13->TabIndex = 6;
			this->button13->Text = L"Eliminar";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(22, 54);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(214, 20);
			this->textBox10->TabIndex = 1;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(98, 269);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(61, 23);
			this->button14->TabIndex = 5;
			this->button14->Text = L"Modificar";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(22, 269);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(61, 23);
			this->button15->TabIndex = 4;
			this->button15->Text = L"Añadir";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Location = System::Drawing::Point(28, 64);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(359, 403);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Quejas :";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox8);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(787, 476);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Configuración";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button19);
			this->groupBox8->Controls->Add(this->button17);
			this->groupBox8->Controls->Add(this->button9);
			this->groupBox8->Controls->Add(this->dataGridView6);
			this->groupBox8->Location = System::Drawing::Point(359, 46);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(410, 391);
			this->groupBox8->TabIndex = 20;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Horario";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(254, 335);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 3;
			this->button19->Text = L"Eliminar";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(148, 335);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Modificar";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(46, 335);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Añadir";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &frmProfesor::button9_Click);
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column19,
					this->Column20, this->Column21
			});
			this->dataGridView6->Location = System::Drawing::Point(23, 50);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(361, 262);
			this->dataGridView6->TabIndex = 0;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"día";
			this->Column19->Name = L"Column19";
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"hora de inicio";
			this->Column20->Name = L"Column20";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"hora final";
			this->Column21->Name = L"Column21";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBox14);
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->textBox13);
			this->groupBox6->Controls->Add(this->button18);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Location = System::Drawing::Point(37, 264);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(273, 131);
			this->groupBox6->TabIndex = 19;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Acceso";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(86, 23);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(172, 20);
			this->textBox14->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 69);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 13);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Contraseña :";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(86, 66);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(172, 20);
			this->textBox13->TabIndex = 10;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(114, 102);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 23);
			this->button18->TabIndex = 11;
			this->button18->Text = L"Editar";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &frmProfesor::button18_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(30, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Usuaio :";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->textBox12);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->textBox15);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Location = System::Drawing::Point(37, 86);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(273, 142);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Contacto";
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(114, 113);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 23);
			this->button16->TabIndex = 14;
			this->button16->Text = L"Editar";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(86, 37);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(172, 20);
			this->textBox12->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(32, 44);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Correo :";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(86, 80);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(172, 20);
			this->textBox15->TabIndex = 16;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(30, 87);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 13);
			this->label15->TabIndex = 15;
			this->label15->Text = L"Celular :";
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 20);
			this->textBox1->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(27, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 11;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(128, 273);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(104, 33);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Enviar";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"CalculoI", L"FisicaI", L"FisicaII", L"CalculoII" });
			this->comboBox2->Location = System::Drawing::Point(27, 52);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(202, 21);
			this->comboBox2->TabIndex = 13;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"DNI Agraviado:";
			// 
			// frmProfesor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 513);
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
			this->groupBox7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
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

	private: void mostrarGrilla(List<Clase^>^ objClase) {
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

	private: System::Void frmProfesor_Load(System::Object^ sender, System::EventArgs^ e) {
		/*ProfesorController^ gestorDatosAlumno = gcnew ProfesorController();
		LogeoController^ gestorLogeo = gcnew LogeoController();*/

		this->dataGridView4->Rows->Clear();

		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = ProfesorLogeado->dni;
		fila[1] = ProfesorLogeado->objNombre;
		fila[2] = ProfesorLogeado->objApellidoPaterno;
		fila[3] = ProfesorLogeado->objApellidoMaterno;
		this->dataGridView4->Rows->Add(fila);

		List<Clase^>^ listaClasesProgramadas;
		ClaseController^ objGestorLista = gcnew ClaseController();
		listaClasesProgramadas = objGestorLista->ClasesProgramadas(ProfesorLogeado->dni);
		mostrarGrilla(listaClasesProgramadas);

		this->textBox14->Text=ProfesorLogeado->objUsuario;
		this->textBox13->Text = ProfesorLogeado->objContrasenha;


	}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ UsuarioProfesorEditar = this->textBox14->Text;
		String^ ContrasenhaProfesorEditar = this->textBox13->Text;
		frmEditarAccesoProfesor^ ventanaEditarAccesoProfesor= gcnew frmEditarAccesoProfesor(UsuarioProfesorEditar, ContrasenhaProfesorEditar);
		ventanaEditarAccesoProfesor->ShowDialog();
		/*PartidoPoliticoController^ gestorPartidoPolitico = gcnew PartidoPoliticoController();
		gestorPartidoPolitico->CargarPartidosDesdeArchivo();
		List<PartidoPolitico^>^ objListaPartidos = gestorPartidoPolitico->obtenerListaPartidos();
		mostrarGrilla(objListaPartidos);*/
	}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoHorario^ ventanaNuevoHorario= gcnew frmNuevoHorario();
	ventanaNuevoHorario->ShowDialog();
	/*PartidoPoliticoController^ gestorPartidoPolitico = gcnew PartidoPoliticoController();
	gestorPartidoPolitico->CargarPartidosDesdeArchivo();
	List<PartidoPolitico^>^ objListaPartidos = gestorPartidoPolitico->obtenerListaPartidos();
	mostrarGrilla(objListaPartidos);*/
}

};
}
