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
	/// Resumen de frmInscripcion
	/// </summary>
	public ref class frmInscripcion : public System::Windows::Forms::Form
	{
	public:
		frmInscripcion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmInscripcion(String^ dniProfesor, String^ nombreDelCurso, Alumno^ objAlumno)
		{
			InitializeComponent();
			this->dniProfesor = dniProfesor;
			this->nombreDelCurso = nombreDelCurso;
			this->objAlumno = objAlumno;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInscripcion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;







	private: String^ dniProfesor;
	private: String^ nombreDelCurso;
	private: Alumno^ objAlumno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column4, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(54, 199);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(558, 118);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmInscripcion::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(37, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(610, 131);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Selección de Horario:";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(262, 92);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 8;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &frmInscripcion::comboBox3_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(170, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Tiempo asesoría";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(406, 29);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmInscripcion::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(308, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Hora de Inicio";
			this->label2->Click += gcnew System::EventHandler(this, &frmInscripcion::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(64, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmInscripcion::comboBox1_SelectedIndexChanged_2);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Día";
			this->label1->Click += gcnew System::EventHandler(this, &frmInscripcion::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(255, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Realizar Inscripción";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmInscripcion::button1_Click);
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
			// Column3
			// 
			this->Column3->HeaderText = L"Precio por hora";
			this->Column3->Name = L"Column3";
			// 
			// frmInscripcion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 481);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"frmInscripcion";
			this->Text = L"frmInscripcion";
			this->Load += gcnew System::EventHandler(this, &frmInscripcion::frmInscripcion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: String^ fechaDeClase(String^ diaClase) {
	String^ fecha;
	if (diaClase == "Lunes") {
		fecha = "21/06/2021";
	}
	else if (diaClase == "Martes") {
		fecha = "22/06/2021";
	}
	else if (diaClase == "Miércoles") {
		fecha = "23/06/2021";
	}
	else if (diaClase == "Jueves") {
		fecha = "24/06/2021";
	}
	else if (diaClase == "Viernes") {
		fecha = "25/06/2021";
	}
	else if (diaClase == "Sábado") {
		fecha = "26/06/2021";
	}
	else if (diaClase == "Domingo") {
		fecha = "27/06/2021";
	}
	return fecha;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	InscripcionController^ gestorInscripcion = gcnew InscripcionController();
	gestorInscripcion->GuardarInscripcion(fechaDeClase(this->comboBox1->Text), this->comboBox2->Text, this->comboBox3->Text, nombreDelCurso, dniProfesor,objAlumno->dni,"17/06/2021","12:30");

	HorarioController^ gestorHorario = gcnew HorarioController();
	gestorHorario->editaHorarioxProfesor(dniProfesor, nombreDelCurso, this->comboBox1->Text,this->comboBox2->Text, this->comboBox3->Text);
	MessageBox::Show("Se realizó la inscripción con éxito.");
	this->Close();
}
private: System::Void frmInscripcion_Load(System::Object^ sender, System::EventArgs^ e) {
	HorarioController^ gestorHorario = gcnew HorarioController();
	List<Horario^>^ listaHorarios = gestorHorario->HorarioxProfesorxCurso(dniProfesor, nombreDelCurso);
	this->comboBox1->Items->Clear();
	for (int i = 0; i < listaHorarios->Count; i++) {
		this->comboBox1->Items->Add(listaHorarios[i]->dia);
	}
	ProfesorController^ gestorProfesor = gcnew ProfesorController();
	Profesor^ profesorEncontrado = gestorProfesor->buscaProfesorxDNI(dniProfesor);
	CursoController^ gestorCurso = gcnew CursoController();
	Curso^ cursoEncontrado = gestorCurso->CursoDisponiblexNombrexProfesor(nombreDelCurso,profesorEncontrado->objUsuario);
	array<String^>^ fila = gcnew array<String^>(5);
	fila[0] = cursoEncontrado->nombreCurso;
	fila[1] = cursoEncontrado->dificultad;
	fila[2] = profesorEncontrado->objNombre + " " + profesorEncontrado->objApellidoPaterno + " " + profesorEncontrado->objApellidoMaterno;
	//fila[3] = AlumnoLogeado->objApellidoMaterno;
	//fila[4] = AlumnoLogeado->objNombre;
	this->dataGridView1->Rows->Add(fila);

}
private: System::Void comboBox1_SelectedIndexChanged_2(System::Object^ sender, System::EventArgs^ e) {
	HorarioController^ gestorHorario = gcnew HorarioController();
	List<Horario^>^ listaHorarios = gestorHorario->HorarioxProfesorxCurso(dniProfesor, nombreDelCurso);
	List<String^>^ horasxDia;
	for (int i = 0; i < listaHorarios->Count; i++) {
		this->comboBox2->Items->Clear();
		if (this->comboBox1->Text == listaHorarios[i]->dia) {
			horasxDia = listaHorarios[i]->horasDisponibles;
			for (int j = 0; j < horasxDia->Count; j++) {
				this->comboBox2->Items->Add(horasxDia[j]);
			}
			break;
		}
	}

}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	HorarioController^ gestorHorario = gcnew HorarioController();
	List<Horario^>^ listaHorarios = gestorHorario->HorarioxProfesorxCurso(dniProfesor, nombreDelCurso);
	List<String^>^ horasxDia;
	for (int i = 0; i < listaHorarios->Count; i++) {
		this->comboBox3->Items->Clear();
		if (this->comboBox1->Text == listaHorarios[i]->dia) {
			horasxDia = listaHorarios[i]->horasDisponibles;
			for (int j = 0; j < horasxDia->Count; j++) {
				if (this->comboBox2->Text == horasxDia[j]) {
					this->comboBox3->Items->Add("1");
					if (j!= horasxDia->Count - 1) {
						if ((Convert::ToInt32(horasxDia[j + 1]) - Convert::ToInt32(horasxDia[j]) == 1)) {
							this->comboBox3->Items->Add("2");
						}
						break;
					}
				}
			}
			break;
		}
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
