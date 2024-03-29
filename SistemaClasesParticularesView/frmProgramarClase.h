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
	/// Resumen de frmProgramarClase
	/// </summary>
	public ref class frmProgramarClase : public System::Windows::Forms::Form
	{
	public:
		frmProgramarClase(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmProgramarClase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;





	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;







	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;






























	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(34, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(514, 139);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Clases Faltantes";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmProgramarClase::groupBox1_Enter);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"por pagar", L"cancelado" });
			this->comboBox3->Location = System::Drawing::Point(141, 100);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(187, 21);
			this->comboBox3->TabIndex = 21;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(376, 98);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Buscar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmProgramarClase::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Pago Profesor";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(376, 64);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Buscar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmProgramarClase::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Clase";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"pendiente", L"programada" });
			this->comboBox1->Location = System::Drawing::Point(141, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(187, 21);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmProgramarClase::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"validado", L"no validado", L"por procesar" });
			this->comboBox2->Location = System::Drawing::Point(141, 26);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(187, 21);
			this->comboBox2->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(376, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmProgramarClase::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pago Alumno";
			this->label1->Click += gcnew System::EventHandler(this, &frmProgramarClase::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column4,
					this->Column1, this->Column2, this->Column3, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(747, 142);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmProgramarClase::dataGridView1_CellContentClick);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Codigo de Pago";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"DNI alumno";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Hora Inicio";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Duracion";
			this->Column3->Name = L"Column3";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Pago Alumno";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Clase";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Pago Profesor";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"CodigoInscripcion";
			this->Column8->Name = L"Column8";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(58, 354);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(514, 72);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Agregar Link";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(352, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Enviar Clase";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmProgramarClase::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 26);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Link";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(598, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Validar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmProgramarClase::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(706, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"No Validado";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmProgramarClase::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(674, 380);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 28);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Pagar Profesor";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmProgramarClase::button6_Click);
			// 
			// frmProgramarClase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 440);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmProgramarClase";
			this->Text = L"frmProgramarClase";
			this->Load += gcnew System::EventHandler(this, &frmProgramarClase::frmProgramarClase_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmProgramarClase_Load(System::Object^ sender, System::EventArgs^ e) {
}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->comboBox1->Text = "";
		this->comboBox3->Text = "";
		String^ estadopagobuscar = this->comboBox2->Text;
		List<Pago^>^ listaPagos;
		PagoController^ objGestorPago = gcnew PagoController();
		listaPagos = objGestorPago->buscarPagosxEstadoBD(estadopagobuscar);
		mostrarGrilla(listaPagos);
	}

private: void mostrarGrilla(List<Pago^>^ listaPagos) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaPagos->Count; i++) {
		Pago^ objPago = listaPagos[i];
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = objPago->codigoPago;
		fila[1] = objPago->objInscripcion->objAlumno->dni;
		fila[2] = objPago->objInscripcion->horaInicio;
		fila[3] = Convert::ToString(objPago->objInscripcion->tiempoReserva);
		fila[4] = objPago->estadopago;
		fila[5] = objPago->estadoclase;
		fila[7] = objPago->objInscripcion->codigoIns;

		this->dataGridView1->Rows->Add(fila);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->comboBox2->Text = "";
	this->comboBox3->Text = "";
	String^ estadoclasebuscar = this->comboBox1->Text;
	List<Pago^>^ listaPagos;
	PagoController^ objGestorPago = gcnew PagoController();
	listaPagos = objGestorPago->buscarClasesxEstadoBD(estadoclasebuscar);
	mostrarGrilla(listaPagos);
}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ codigopago = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
		String^ estadopagoalumno = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[4]->Value->ToString();
		String^ CodigoInscripcion = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[7]->Value->ToString();

		if (estadopagoalumno == "por procesar") {
			ClaseController^ objGestorClase = gcnew ClaseController();
			Clase^ objClase= objGestorClase->BuscarClasexCodigoPagoBD(CodigoInscripcion);

			objGestorClase->crearclaseBD(objClase);

				
			PagoController^ objGestorPago = gcnew PagoController();
			objGestorPago->aprobarPagoBD(CodigoInscripcion);


			MessageBox::Show("El Pago ha sido validado con �xito !!!");

		}

		else if (estadopagoalumno == "validado") {
			MessageBox::Show("El Pago ya se hab�a designado como VALIDO!!!");
		}

		else if (estadopagoalumno == "no validado") {
			MessageBox::Show("El Pago ya se hab�a designado como NO VALIDO!!!");
		}


	}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ codigopago = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
	String^ estadopagoalumno = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[4]->Value->ToString();
	String^ CodigoInscripcion = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[7]->Value->ToString();

	if (estadopagoalumno == "por procesar") {
		PagoController^ objGestorPago = gcnew PagoController();
		objGestorPago->desaprobarPagoBD(CodigoInscripcion);
		MessageBox::Show("El Pago no ha sido validado !!!");
	}
	else if (estadopagoalumno == "validado") {
		MessageBox::Show("El Pago ya se hab�a designado como VALIDO!!!");
	}

	else if (estadopagoalumno == "no validado") {
		MessageBox::Show("El Pago ya se hab�a designado como NO VALIDO!!!");
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ codigopago = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
	String^ estadopagoalumno = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[4]->Value->ToString();
	String^ estadoclase = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[5]->Value->ToString();
	String^ CodigoInscripcion = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[7]->Value->ToString();



	if ((estadoclase == "pendiente") && (estadopagoalumno == "validado")) {
		PagoController^ objGestorPago = gcnew PagoController();
		ClaseController^ objGestorClase = gcnew ClaseController();
		objGestorPago->programarclaseBD(CodigoInscripcion);
		objGestorClase->ProgramarClaseBD(CodigoInscripcion);

		String^ linkclase = this->textBox2->Text;
		int codigoIns = objGestorPago->buscarIncscripcionxcodigocompletaBD(CodigoInscripcion);

		objGestorClase->enviarlinkBD(linkclase, codigoIns);
		MessageBox::Show("El link de la clase ha sido enviado !!!");
	}

	else if ((estadoclase == "programada") && (estadopagoalumno == "validado")){
		MessageBox::Show("El link de la clase ya se hab�a enviado !!!");
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int posicionFilaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ codigopago = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[0]->Value->ToString();
	String^ estadopagoalumno = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[4]->Value->ToString();
	String^ estadoclase = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[5]->Value->ToString();
	String^ estadoprofesor = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[6]->Value->ToString();
	String^ CodigoInscripcion = this->dataGridView1->Rows[posicionFilaSeleccionada]->Cells[7]->Value->ToString();
	
	ClaseController^ objGestorClase = gcnew ClaseController();
	SaldoController^ objGestorSaldo = gcnew SaldoController();
	InscripcionController^ objGestorInscripcion = gcnew InscripcionController();
	Inscripcion^ objInscripcion = objGestorInscripcion->buscarInscripcionxcodigo_BD(Convert::ToInt32(CodigoInscripcion));
	int saldoaumentado;
	int tarifa = Convert::ToInt32(objInscripcion->objCurso->precioCurso);
	int tiempo =objInscripcion->tiempoReserva;
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	Profesor^ objProfesor = objGestorProfesor->buscaProfesor(objInscripcion->objCurso->usuarioProfesor);
	
	if ((estadoclase == "finalizada") && (estadopagoalumno == "validado") && (estadoprofesor == "cancelado")) {

		MessageBox::Show("Ya se hab�a pagado al profesor !!!");
	}

	else if ((estadoclase == "finalizada") && (estadopagoalumno == "validado") && (estadoprofesor == "por pagar")) {
		objGestorClase->aprobarPago(CodigoInscripcion);


		if (codigopago == "BONO") {
			saldoaumentado = (tarifa * tiempo) * 0.5;
		}
		else {
			saldoaumentado = (tarifa * tiempo) * 0.9;
		}
			
			objGestorSaldo->pagarprofesor(saldoaumentado, objProfesor->dni);

			MessageBox::Show("Se ha pagado al profesor !!!");
	
	}


}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->comboBox1->Text = "";
	this->comboBox2->Text = "";
	String^ estadopagoprofesorbuscar = this->comboBox3->Text;
	List<Clase^>^ listaClases;
	ClaseController^ objGestorClase = gcnew ClaseController();
	listaClases = objGestorClase->buscarPagosProfesorxEstado(estadopagoprofesorbuscar);


	
	mostrarGrillaClase(listaClases);
}

private: void mostrarGrillaClase(List<Clase^>^ listaClases) {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < listaClases->Count; i++) {
		Clase^ objClase = listaClases[i];
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = objClase->objPago->codigoPago;
		fila[1] = objClase->objAlumno->dni;
		fila[2] = objClase->horaClase;
		fila[3] = Convert::ToString(objClase->objPago->objInscripcion->tiempoReserva);
		fila[4] = objClase->objPago->estadopago;
		fila[5] = objClase->objPago->estadoclase;
		fila[6] = objClase->estadopagoprofesor;
		fila[7] = objClase->objPago->objInscripcion->codigoIns;

		this->dataGridView1->Rows->Add(fila);
	}
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
