#pragma once

namespace SistemaClasesParticularesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmProfesor
	/// </summary>
	public ref class frmProfesor : public System::Windows::Forms::Form
	{
	public:
		frmProfesor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmProfesor()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// frmProfesor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 481);
			this->Name = L"frmProfesor";
			this->Text = L"frmProfesor";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void calendarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
