#pragma once

#include "frmProfesor.h"
#include "frmAlumno.h"
#include "frmAdministrador.h"

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace SistemaClasesParticularesController;
	using namespace SistemaClasesParticularesModel;

	/// <summary>
	/// Resumen de frmLogeo
	/// </summary>
	public ref class frmLogeo : public System::Windows::Forms::Form
	{
	public:
		frmLogeo(void)
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
		~frmLogeo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: Alumno^ AlumnoLogeado;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(243, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(310, 178);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmLogeo::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(310, 219);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmLogeo::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(310, 263);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Iniciar Sesion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmLogeo::button1_Click);
			// 
			// frmLogeo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 516);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"frmLogeo";
			this->Text = L"frmLogeo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	LogeoController^ objgestor = gcnew LogeoController();
	if (objgestor->VerificarSiUsuarioExiste(textBox1->Text, textBox2->Text) == 1) {
		AlumnoController^ objGestorAlumno = gcnew AlumnoController();

		AlumnoLogeado = objGestorAlumno->buscaAlumno(textBox1->Text);
		frmAlumno^ ventanaAlumno = gcnew frmAlumno(this->AlumnoLogeado);
		ventanaAlumno->Show();
	}
	else if (objgestor->VerificarSiUsuarioExiste(textBox1->Text, textBox2->Text) == 2) {

		frmProfesor^ ventanaProfesor = gcnew frmProfesor();
		ventanaProfesor->Show();
	}
	else if (objgestor->VerificarSiUsuarioExiste(textBox1->Text, textBox2->Text) == 3) {

		frmAdministrador^ ventanaAdministrador = gcnew frmAdministrador();
		ventanaAdministrador->Show();
	}
	else {
		MessageBox::Show("Usuario y/o contraseña son incorrectos");
	}
	/*if (textBox1->Text ==""  && textBox2->Text == "") {
		//MessageBox::Show("Usuario correcto");
		frmProfesor^ ventanaMantProfesores = gcnew frmProfesor();

		ventanaMantProfesores->Show();
	}*/

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
