#pragma once


namespace CppCLR_WinFormsProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de modificar
	/// </summary>
	public ref class modificar : public System::Windows::Forms::Form
	{
	public:
		modificar(void)
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
		~modificar()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ txt_nombre;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ txt_anio;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ txt_serie;
	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ txt_marcaa;
	private: System::Windows::Forms::Button^ btn_aceptar;
	private: System::Windows::Forms::Button^ btn_cancelar;



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
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_anio = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_serie = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_marcaa = (gcnew System::Windows::Forms::TextBox());
			this->btn_aceptar = (gcnew System::Windows::Forms::Button());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(349, 184);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(438, 47);
			this->txt_nombre->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(496, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(420, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(321, 46);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Año de fabricacion";
			// 
			// txt_anio
			// 
			this->txt_anio->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_anio->Location = System::Drawing::Point(349, 322);
			this->txt_anio->Name = L"txt_anio";
			this->txt_anio->Size = System::Drawing::Size(438, 47);
			this->txt_anio->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(516, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Serie";
			// 
			// txt_serie
			// 
			this->txt_serie->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_serie->Location = System::Drawing::Point(349, 439);
			this->txt_serie->Name = L"txt_serie";
			this->txt_serie->Size = System::Drawing::Size(438, 47);
			this->txt_serie->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(496, 520);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 46);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Marca";
			// 
			// txt_marcaa
			// 
			this->txt_marcaa->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_marcaa->Location = System::Drawing::Point(349, 569);
			this->txt_marcaa->Name = L"txt_marcaa";
			this->txt_marcaa->Size = System::Drawing::Size(438, 47);
			this->txt_marcaa->TabIndex = 6;
			// 
			// btn_aceptar
			// 
			this->btn_aceptar->BackColor = System::Drawing::Color::LimeGreen;
			this->btn_aceptar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_aceptar->Location = System::Drawing::Point(273, 673);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(248, 84);
			this->btn_aceptar->TabIndex = 8;
			this->btn_aceptar->Text = L"Accept";
			this->btn_aceptar->UseVisualStyleBackColor = false;
			this->btn_aceptar->Click += gcnew System::EventHandler(this, &modificar::btn_aceptar_Click);
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::Red;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_cancelar->Location = System::Drawing::Point(641, 673);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(251, 84);
			this->btn_cancelar->TabIndex = 9;
			this->btn_cancelar->Text = L"Cancel";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &modificar::btn_cancelar_Click);
			// 
			// modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::HotPink;
			this->ClientSize = System::Drawing::Size(1125, 896);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_aceptar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_marcaa);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_serie);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_anio);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"modificar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"modificar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btn_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Usuario actualizado correctamente");
	this->Close();
}
};
}
