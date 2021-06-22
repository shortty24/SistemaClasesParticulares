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
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Resumen de frmRegistro
	/// </summary>
	public ref class frmRegistroAlumno : public System::Windows::Forms::Form
	{
	public:
		frmRegistroAlumno(void)
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
		~frmRegistroAlumno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->epError = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->epError))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(342, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox1_TextChanged);
			this->textBox1->Validated += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox1_Validated);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(342, 147);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmRegistroAlumno::textBox2_KeyPress);
			this->textBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &frmRegistroAlumno::textBox2_Validating);
			this->textBox2->Validated += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox2_Validated);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(342, 173);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox3_TextChanged);
			this->textBox3->Validated += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox3_Validated);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(342, 199);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox4_TextChanged);
			this->textBox4->Validated += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox4_Validated);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(342, 225);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(130, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox5_TextChanged);
			this->textBox5->Validated += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox5_Validated);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(292, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &frmRegistroAlumno::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(309, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"DNI";
			this->label2->Click += gcnew System::EventHandler(this, &frmRegistroAlumno::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(292, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nombre";
			this->label3->Click += gcnew System::EventHandler(this, &frmRegistroAlumno::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(252, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Apellido Paterno";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(250, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Apellido Materno";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(342, 251);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox6_TextChanged);
			this->textBox6->Validated += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox6_Validated);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(297, 254);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Correo";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(342, 277);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox7_TextChanged);
			this->textBox7->Validated += gcnew System::EventHandler(this, &frmRegistroAlumno::textBox7_Validated);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(275, 280);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Contraseña";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(342, 318);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Registrarse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegistroAlumno::button1_Click);
			// 
			// epError
			// 
			this->epError->ContainerControl = this;
			// 
			// frmRegistroAlumno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 512);
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
			this->Name = L"frmRegistroAlumno";
			this->Text = L"frmRegistroAlumno";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->epError))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Boolean Email_Valido(String^ Email) {
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
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	RegistroController^ objGestor = gcnew RegistroController();
	int UsuarioUsado = objGestor->VerificarSiUsuarioRepite(textBox1->Text);
	int DniUsado = objGestor->VerificarSiDniRepite(textBox2->Text);
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "") {
		String^ CodigoUsuario = "A";
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
					Persona^ objPersona = gcnew Persona(CodigoUsuario, DNI, Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno, Nombre, Correo);
					RegistroController^ objRegistro = gcnew RegistroController();
					objRegistro->GuardarNuevoUsuarioEnArchivo(objPersona);
					MessageBox::Show("Se ha registrado con éxito");
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
		else { // El nombre de usuario ya se ha usado
			MessageBox::Show("El nombre de Usuario ingresado ya se encuentra en uso, por favor ingrese otro nombre");
		}

	}
	else {
		MessageBox::Show(" Por favor llene todos los datos");
	}
	//RegistroController^ objgestorRegistro = gcnew RegistroController();
	//RegistroNuevoAlumno(textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7);
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255)) {
		MessageBox::Show("Solo números","Alerta",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		e->Handled = true;
	}
		
}
	private: System::Void textBox2_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	
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
};
}
