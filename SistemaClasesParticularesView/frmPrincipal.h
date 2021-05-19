#pragma once
#include "frmLogeo.h"
#include "frmRegistroAlumno.h"
#include "frmRegistroProfesor.h"

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(447, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Registrate como profesor";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrincipal::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(295, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Registrate como estudiante";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrincipal::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(158, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Iniciar Sesion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrincipal::button1_Click_1);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 500);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->IsMdiContainer = true;
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::frmPrincipal_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		frmLogeo^ ventanaLogeo = gcnew frmLogeo();
		ventanaLogeo->Show();
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	frmRegistroAlumno^ ventanaRegistroAlumno = gcnew frmRegistroAlumno();
	ventanaRegistroAlumno->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	frmRegistroProfesor^ ventanaRegistroProfesor = gcnew frmRegistroProfesor();
	ventanaRegistroProfesor->Show();
}
};
}
