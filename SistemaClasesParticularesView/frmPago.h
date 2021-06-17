#pragma once

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaClasesParticularesController;
	using namespace SistemaClasesParticularesModel;

	/// <summary>
	/// Summary for frmPago
	/// </summary>
	public ref class frmPago : public System::Windows::Forms::Form
	{
	public:
		frmPago(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmPago(String^ codigoIns)
		{
			InitializeComponent();
			this->codigoIns = codigoIns;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPago()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: String^ codigoIns;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo de Inscripcion:";
			this->label1->Click += gcnew System::EventHandler(this, &frmPago::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(132, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Verificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPago::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(194, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ingrese el código de la boleta:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(194, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(114, 20);
			this->textBox2->TabIndex = 4;
			// 
			// frmPago
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 351);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"frmPago";
			this->Text = L"frmPago";
			this->Load += gcnew System::EventHandler(this, &frmPago::frmPago_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmPago_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = codigoIns;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	PagoController^ gestorPago = gcnew PagoController();
	gestorPago->crearNuevoPago(codigoIns, "5:00", "17/06/2021", this->textBox2->Text);
	MessageBox::Show("Se envió el código con éxito.");
	this->Close();
}
};
}
