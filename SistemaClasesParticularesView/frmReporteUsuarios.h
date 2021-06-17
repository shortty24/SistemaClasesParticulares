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
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Resumen de frmReporteUsuarios
	/// </summary>
	public ref class frmReporteUsuarios : public System::Windows::Forms::Form
	{
	public:
		frmReporteUsuarios(void)
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
		~frmReporteUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	protected:

	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(126, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(350, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &frmReporteUsuarios::chart1_Click_2);
			// 
			// frmReporteUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 344);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteUsuarios";
			this->Text = L"frmReporteUsuarios";
			this->Load += gcnew System::EventHandler(this, &frmReporteUsuarios::frmReporteUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chart1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmReporteUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
		
		ReporteController^ objGestorReporte = gcnew ReporteController();
		objGestorReporte->CargarPersonasDesdeArchivo();
		//Los vectores con los datos
		array<String^>^ series = { "Alumnos","Profesores"};
		array<int>^ cantidades = { objGestorReporte->ObtenerCantidadAlumnos(),objGestorReporte->ObtenerCantidadProfesores() };
		//cambiar la combinación de colores
		chart1->Palette = ChartColorPalette::Pastel;
		chart1->Titles->Add("Cantidad de Usuarios");
		for (int i = 0; i < series->Length; i++) {
			//titulos
			Series^ serie = chart1->Series->Add(series[i]);
			//cantidades
			serie->Label = Convert::ToString(cantidades[i]);

			serie->Points->Add(cantidades[i]);
		
		}
	}
	private: System::Void chart1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
