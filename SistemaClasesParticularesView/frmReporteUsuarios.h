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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(73, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(350, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &frmReporteUsuarios::chart1_Click_2);
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(470, 12);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(350, 300);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// frmReporteUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(869, 447);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"frmReporteUsuarios";
			this->Text = L"frmReporteUsuarios";
			this->Load += gcnew System::EventHandler(this, &frmReporteUsuarios::frmReporteUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
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
		objGestorReporte->CargarQuejasDesdeArchivo();
		//Los vectores con los datos
		array<String^>^ series1 = { "Alumnos","Profesores"};
		array<String^>^ series2 = { "Resueltas","No Resueltas" };
		array<int>^ cantidades1 = { objGestorReporte->ObtenerCantidadAlumnos(),objGestorReporte->ObtenerCantidadProfesores() };
		array<int>^ cantidades2 = { objGestorReporte->ObtenerCantidadQuejasResueltas(),objGestorReporte->ObtenerCantidadQuejasNoResueltas() };
		//cambiar la combinación de colores
		chart1->Palette = ChartColorPalette::Pastel;
		chart1->Titles->Add("Cantidad de Usuarios");
		chart2->Palette = ChartColorPalette::Pastel;
		chart2->Titles->Add("Cantidad de Quejas");
		for (int i = 0; i < series1->Length; i++) {
			//titulos
			Series^ serie1 = chart1->Series->Add(series1[i]);
			//cantidades
			serie1->Label = Convert::ToString(cantidades1[i]);

			serie1->Points->Add(cantidades1[i]);
		
		}
		for (int i = 0; i < series2->Length; i++) {
			//titulos
			Series^ serie2 = chart2->Series->Add(series2[i]);
			//cantidades
			serie2->Label = Convert::ToString(cantidades2[i]);

			serie2->Points->Add(cantidades2[i]);

		}
	}
	private: System::Void chart1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
