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
	/// Resumen de frmVerificarCV
	/// </summary>
	public ref class frmVerificarCV : public System::Windows::Forms::Form
	{
	public:
		frmVerificarCV(void)
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
		~frmVerificarCV()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;





	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;




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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(58, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(514, 98);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Busqueda:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->comboBox2->Location = System::Drawing::Point(117, 61);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(187, 21);
			this->comboBox2->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(334, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmVerificarCV::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Estado";
			this->label2->Click += gcnew System::EventHandler(this, &frmVerificarCV::label2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(334, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmVerificarCV::button1_Click);
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
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DNI Profesor";
			this->label1->Click += gcnew System::EventHandler(this, &frmVerificarCV::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column4,
					this->Column1, this->Column2, this->Column3, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(58, 149);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(514, 150);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"DNI Profesor";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código MINEDU";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Empresa";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"TelfEmpresa";
			this->Column3->Name = L"Column3";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->Name = L"Column5";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(196, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Aprobado";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmVerificarCV::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(364, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Desaprobado";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmVerificarCV::button3_Click);
			// 
			// frmVerificarCV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 350);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmVerificarCV";
			this->Text = L"frmVerificarCV";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ dniseleccionado = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();

		CVController^ objGestorCV = gcnew CVController();
		objGestorCV->aprobarCV(dniseleccionado);
		MessageBox::Show("El CV ha sido aprobado con éxito !!!");
			
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dniprofebuscar = this->textBox1->Text;
	List<CV^>^ listaCV;
	CVController^ objGestorCV = gcnew CVController();
	if (dniprofebuscar == "") {
		objGestorCV->CargarCVDesdeArchivo();
		listaCV = objGestorCV->obtenerListaCVs();
	}
	else {
		listaCV = objGestorCV->buscarCV(dniprofebuscar);
	}
	mostrarGrilla(listaCV);

}

private: void mostrarGrilla(List<CV^>^ listaCV) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaCV->Count; i++) {
		CV^ objCV = listaCV[i];
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = objCV->DniProfesor;
		fila[1] = objCV->objCodigoMinedu;
		fila[2] = objCV->objEmpresa;
		fila[3] = objCV->telefonoEmpresa;
		fila[4] = objCV->Validación;

		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ estadobuscar = this->comboBox2->Text;
	List<CV^>^ listaCV;
	CVController^ objGestorCV = gcnew CVController();
    listaCV = objGestorCV->buscarCVxEstado(estadobuscar);
	mostrarGrilla(listaCV);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ dniseleccionado = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();

	CVController^ objGestorCV = gcnew CVController();
	objGestorCV->desaprobarCV(dniseleccionado);
	MessageBox::Show("El CV ha sido desaprobado con éxito !!!");

}
};
}
