#pragma once

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::Text;
	using namespace System::Text::RegularExpressions;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaClasesParticularesController;
	using namespace SistemaClasesParticularesModel;

	/// <summary>
	/// Resumen de frmRegistroProfesor
	/// </summary>
	public ref class frmRegistroProfesor : public System::Windows::Forms::Form
	{
	public:
		frmRegistroProfesor(void)
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
		~frmRegistroProfesor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::ErrorProvider^ epError;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->epError = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->epError))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(340, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Registrarse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegistroProfesor::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(273, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Contraseña";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(340, 284);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 20);
			this->textBox7->TabIndex = 27;
			this->textBox7->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox7_Validated);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(295, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Correo";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(340, 258);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 20);
			this->textBox6->TabIndex = 25;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox6_TextChanged);
			this->textBox6->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox6_Validated);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(248, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Apellido Materno";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(250, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Apellido Paterno";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(290, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(307, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"DNI";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(290, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Usuario";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(340, 232);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(130, 20);
			this->textBox5->TabIndex = 19;
			this->textBox5->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox5_Validated);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(340, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 20);
			this->textBox4->TabIndex = 18;
			this->textBox4->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox4_Validated);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(340, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 20);
			this->textBox3->TabIndex = 17;
			this->textBox3->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox3_Validated);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(340, 154);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 20);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegistroProfesor::textBox2_KeyPress);
			this->textBox2->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox2_Validated);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(340, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox1_TextChanged);
			this->textBox1->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox1_Validated);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Location = System::Drawing::Point(276, 310);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 100);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de CV";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(231, 37);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Numero Empresa";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(133, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Empresa";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Codigo Minedu";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(221, 53);
			this->textBox10->MaxLength = 9;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 2;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegistroProfesor::textBox10_KeyPress);
			this->textBox10->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox10_Validated);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(115, 53);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 1;
			this->textBox9->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox9_Validated);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(9, 53);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 0;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox8_TextChanged);
			this->textBox8->Validated += gcnew System::EventHandler(this, &frmRegistroProfesor::textBox8_Validated);
			// 
			// epError
			// 
			this->epError->ContainerControl = this;
			// 
			// frmRegistroProfesor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 477);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"frmRegistroProfesor";
			this->Text = L"frmRegistroProfesor";
			this->Load += gcnew System::EventHandler(this, &frmRegistroProfesor::frmRegistroProfesor_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->epError))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	RegistroController^ objGestor = gcnew RegistroController();
	int UsuarioUsado = objGestor->VerificarSiUsuarioRepite(textBox1->Text);
	int DniUsado = objGestor->VerificarSiDniRepite(textBox2->Text);
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "") {
		String^ CodigoUsuario = "P";
		if (UsuarioUsado == 0) { // Indica que dicho nombre de usuario todavía no se ha usado
			String^ Usuario = this->textBox1->Text;
			String^ DNI = this->textBox2->Text;
			if (DniUsado == 0) { // Indica que dicho Dni todavía no se ha usado
				String^ Nombre = this->textBox3->Text;
				String^ ApellidoPaterno = this->textBox4->Text;
				String^ ApellidoMaterno = this->textBox5->Text;
				String^ Correo = this->textBox6->Text;
				if (Email_Valido(Correo) == true) {
					String^ Contrasenha = this->textBox7->Text;
					String^ CodigoMinedu = this->textBox8->Text;
					String^ Empresa = this->textBox9->Text;
					String^ NumeroEmpresa = this->textBox10->Text;
					String^ Validacion = "PorVerificar";
					Persona^ objPersona = gcnew Persona(CodigoUsuario, DNI, Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno, Nombre, Correo);
					CV^ objCV = gcnew CV(DNI, CodigoMinedu, Empresa, NumeroEmpresa, Validacion);
					RegistroController^ objRegistro = gcnew RegistroController();
					objRegistro->GuardarNuevoUsuarioEnArchivo(objPersona);
					objRegistro->GuardarNuevoCV(objCV);
					MessageBox::Show("Se ha registrado con éxito. Se revisará su CV para que se pueda loguear");
					this->Close();

				}
				else {

					MessageBox::Show("El correo ingresado no existe, por favor ingreselo nuevamente");

				}

			}
			else {
				MessageBox::Show("El DNI ingresado ya se encuentra en uso, por favor ingrese otro DNI");
			}
		}
		else { // El nombre de usuario ya fue usado
			MessageBox::Show("El nombre de Usuario ingresado ya se encuentra en uso, por favor ingrese otro nombre");
		}
	}
	else {
		MessageBox::Show(" Por favor llene todos los datos");
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Boolean Email_Valido(String^Email) {
		String^ Validando = "\\w+([-+.']\\w+)*@\\w+([-.]\\w+)*\\.\\w+([-.]\\w+)*";
		if (Regex::IsMatch(Email, Validando))
		{
			if (Regex::Replace(Email, Validando, String::Empty)->Length == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
}
	
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255)) {
		MessageBox::Show("Solo números", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		e->Handled = true;
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255)) {
		MessageBox::Show("Solo números", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		e->Handled = true;
	}
}
private: System::Void frmRegistroProfesor_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text->Trim() == "") {
		epError->SetError(textBox1, "Campo Obligatorio");
		textBox1->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox2_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox2->Text->Trim() == "") {
		epError->SetError(textBox2, "Campo Obligatorio");
		textBox2->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox3_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox3->Text->Trim() == "") {
		epError->SetError(textBox3, "Campo Obligatorio");
		textBox3->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox4_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox4->Text->Trim() == "") {
		epError->SetError(textBox4, "Campo Obligatorio");
		textBox4->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox5_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox5->Text->Trim() == "") {
		epError->SetError(textBox5, "Campo Obligatorio");
		textBox5->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox6_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox6->Text->Trim() == "") {
		epError->SetError(textBox6, "Campo Obligatorio");
		textBox6->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox7_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox7->Text->Trim() == "") {
		epError->SetError(textBox7, "Campo Obligatorio");
		textBox7->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox8_Validated(System::Object^ sender, System::EventArgs^ e) {

	   if (textBox8->Text->Trim() == "") {
		   epError->SetError(textBox8, "Campo Obligatorio");
		   textBox8->Focus();
	   }
	   else {
		   epError->Clear();
	   }
}
private: System::Void textBox9_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox9->Text->Trim() == "") {
		epError->SetError(textBox9, "Campo Obligatorio");
		textBox9->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox10_Validated(System::Object^ sender, System::EventArgs^ e) {

	if (textBox10->Text->Trim() == "") {
		epError->SetError(textBox10, "Campo Obligatorio");
		textBox10->Focus();
	}
	else {
		epError->Clear();
	}
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
