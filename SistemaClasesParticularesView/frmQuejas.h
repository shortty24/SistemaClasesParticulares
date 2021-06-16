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
	/// Resumen de frmQuejas
	/// </summary>
	public ref class frmQuejas : public System::Windows::Forms::Form
	{
	public:
		frmQuejas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmQuejas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(67, 181);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(514, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"DNI Agresor";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Queja";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"DNI Agraviado";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Estado";
			this->Column3->Name = L"Column3";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(67, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(514, 135);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Busqueda:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Bloqueado", L"No Bloqueado" });
			this->comboBox2->Location = System::Drawing::Point(117, 83);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(187, 21);
			this->comboBox2->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(352, 81);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Buscar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmQuejas::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Estado";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(352, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmQuejas::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DNI Agraviado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(352, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmQuejas::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DNI Agresor";
			this->label1->Click += gcnew System::EventHandler(this, &frmQuejas::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(184, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Procede";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmQuejas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(368, 362);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"No procede";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmQuejas::button3_Click);
			// 
			// frmQuejas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 406);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmQuejas";
			this->Text = L"frmQuejas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ dniagresor = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();

		QuejasController^ objGestorCV = gcnew QuejasController();
		objGestorCV->Procede(dniagresor);
		MessageBox::Show("Se ha determinado un Bloqueo !!!");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dniagresor = this->textBox1->Text;
	List<Quejas^>^ listaQuejas;
	QuejasController^ objGestorQuejas = gcnew QuejasController();
	if (dniagresor == "") {
		objGestorQuejas->CargarQuejasDesdeArchivo();
		listaQuejas = objGestorQuejas->obtenerListaQuejas();
	}
	else {
		listaQuejas = objGestorQuejas->buscarQuejaAgresor(dniagresor);
	}
	mostrarGrilla(listaQuejas);
}

private: void mostrarGrilla(List<Quejas^>^ listaQuejas) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaQuejas->Count; i++) {
		Quejas^ objQuejas = listaQuejas[i];
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = objQuejas->DniAgresor;
		fila[1] = objQuejas->Queja;
		fila[2] = objQuejas->DniAgreviado;
		fila[3] = objQuejas->Estado;
		
		this->dataGridView1->Rows->Add(fila);
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dniagraviado = this->textBox2->Text;
	List<Quejas^>^ listaQuejas;
	QuejasController^ objGestorQuejas = gcnew QuejasController();
	if (dniagraviado == "") {
		objGestorQuejas->CargarQuejasDesdeArchivo();
		listaQuejas = objGestorQuejas->obtenerListaQuejas();
	}
	else {
		listaQuejas = objGestorQuejas->buscarQuejaAgraviado(dniagraviado);
	}
	mostrarGrilla(listaQuejas);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ estadobuscar = this->comboBox2->Text;
	List<Quejas^>^ listaQuejas;
	QuejasController^ objGestorQuejas = gcnew QuejasController();
	listaQuejas = objGestorQuejas->buscarQuejasxEstado(estadobuscar);
	mostrarGrilla(listaQuejas);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ dniagresor = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();

	QuejasController^ objGestorCV = gcnew QuejasController();
	objGestorCV->NoProcede(dniagresor);
	MessageBox::Show("Se ha determinado un No Bloqueo !!!");
}
};
}
