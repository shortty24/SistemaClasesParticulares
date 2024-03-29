#pragma once

#include "frmQuejas.h"
#include "frmProgramarClase.h"
#include "frmVerificarCV.h"
#include "frmReporteUsuarios.h"

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class frmAdministrador : public System::Windows::Forms::Form
	{
	public:
		frmAdministrador(void)
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
		~frmAdministrador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Verificar Quejas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAdministrador::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(186, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Verificar CV";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAdministrador::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(304, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Programar Clase";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmAdministrador::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(413, 111);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 45);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Reporte";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmAdministrador::button4_Click);
			// 
			// frmAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 297);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmAdministrador";
			this->Text = L"Administrador";
			this->Load += gcnew System::EventHandler(this, &frmAdministrador::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		frmQuejas^ ventanaQuejas = gcnew frmQuejas();
		ventanaQuejas->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmVerificarCV^ ventanaCV = gcnew frmVerificarCV();
		ventanaCV->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		frmProgramarClase^ ventanaProgramarClase = gcnew frmProgramarClase();
		ventanaProgramarClase->ShowDialog();
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		frmReporteUsuarios^ ventanaReporteUsuarios = gcnew frmReporteUsuarios();
		ventanaReporteUsuarios->ShowDialog();
	}
};
}
