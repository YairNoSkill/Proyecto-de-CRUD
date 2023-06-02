#pragma once
#include "DB.h"
#include "modificar.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
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
	public: System::Windows::Forms::TextBox^ txt_marca;


	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ txt_anio;

	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ txt_serie;

	private: System::Windows::Forms::Button^ btn_guardar;
	private: System::Windows::Forms::DataGridView^ datagrid;
	private: DB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Label^ label_nombre;






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_marca = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_anio = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_serie = (gcnew System::Windows::Forms::TextBox());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->datagrid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->label_nombre = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagrid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Location = System::Drawing::Point(90, 329);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(484, 38);
			this->txt_nombre->TabIndex = 0;
			this->txt_nombre->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(252, 269);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 40);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(278, 554);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 40);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Marca";
			// 
			// txt_marca
			// 
			this->txt_marca->Location = System::Drawing::Point(90, 608);
			this->txt_marca->Name = L"txt_marca";
			this->txt_marca->Size = System::Drawing::Size(490, 38);
			this->txt_marca->TabIndex = 2;
			this->txt_marca->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(160, 414);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 40);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Año de fabricacion";
			// 
			// txt_anio
			// 
			this->txt_anio->Location = System::Drawing::Point(84, 471);
			this->txt_anio->Name = L"txt_anio";
			this->txt_anio->Size = System::Drawing::Size(490, 38);
			this->txt_anio->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(290, 684);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 40);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Serie";
			// 
			// txt_serie
			// 
			this->txt_serie->Location = System::Drawing::Point(90, 727);
			this->txt_serie->Name = L"txt_serie";
			this->txt_serie->Size = System::Drawing::Size(490, 38);
			this->txt_serie->TabIndex = 6;
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.900001F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_guardar->Location = System::Drawing::Point(195, 841);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(279, 71);
			this->btn_guardar->TabIndex = 8;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Form1::btn_guardar_Click);
			// 
			// datagrid
			// 
			this->datagrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->datagrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->datagrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->datagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->datagrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->datagrid->Location = System::Drawing::Point(732, 137);
			this->datagrid->Name = L"datagrid";
			this->datagrid->ReadOnly = true;
			this->datagrid->RowHeadersVisible = false;
			this->datagrid->RowHeadersWidth = 102;
			this->datagrid->RowTemplate->Height = 40;
			this->datagrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->datagrid->Size = System::Drawing::Size(1301, 775);
			this->datagrid->TabIndex = 9;
			this->datagrid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::datagrid_CellClick);
			this->datagrid->DoubleClick += gcnew System::EventHandler(this, &Form1::datagrid_DoubleClick);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::Red;
			this->btn_eliminar->FlatAppearance->BorderSize = 0;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_eliminar->Location = System::Drawing::Point(1015, 967);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(508, 67);
			this->btn_eliminar->TabIndex = 10;
			this->btn_eliminar->Text = L"Eliminar Vehiculo";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Form1::btn_eliminar_Click);
			// 
			// label_nombre
			// 
			this->label_nombre->AutoSize = true;
			this->label_nombre->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.900001F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nombre->Location = System::Drawing::Point(1540, 978);
			this->label_nombre->Name = L"label_nombre";
			this->label_nombre->Size = System::Drawing::Size(270, 46);
			this->label_nombre->TabIndex = 11;
			this->label_nombre->Text = L"Seleccionando a:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(2045, 1084);
			this->Controls->Add(this->label_nombre);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->datagrid);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_serie);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_anio);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_marca);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datagrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}
	   public: void Consulta()
	   {
		   this->data->AbrirConexion();
		   this->datagrid->DataSource = this->data->getData();
		   this->data->CerrarConexion();
	   }



private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	this->data->insertar(this->txt_nombre->Text, this->txt_anio->Text, this->txt_marca->Text, this->txt_serie->Text);
	this->data->CerrarConexion();
	this->Consulta();
	MessageBox::Show(L"Vehiculo agregado a la lista correctamente!");
}
private: System::Void id_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void datagrid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	String^ id = Convert::ToString(datagrid->SelectedRows[0]->Cells[0]->Value);
	String^ nombre = Convert::ToString(datagrid->SelectedRows[0]->Cells[1]->Value);
	String^ anio = Convert::ToString(datagrid->SelectedRows[0]->Cells[2]->Value);
	String^ marca = Convert::ToString(datagrid->SelectedRows[0]->Cells[3]->Value);
	String^ serie = Convert::ToString(datagrid->SelectedRows[0]->Cells[4]->Value);
	CppCLR_WinFormsProject1::modificar^ form = gcnew CppCLR_WinFormsProject1::modificar();
	
	form->txt_nombre->Text = nombre;
	form->txt_anio->Text = anio;
	form->txt_serie->Text = serie;
	form->txt_marcaa->Text = marca;
	form->ShowDialog();

	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->modificar(form->txt_nombre->Text, form->txt_anio->Text, form->txt_serie->Text, form->txt_marcaa->Text, nombre);
	data->CerrarConexion();
	this->Consulta();

	
}
private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = Convert::ToString(datagrid->SelectedRows[0]->Cells[0]->Value);
	String^ nombre = Convert::ToString(datagrid->SelectedRows[0]->Cells[1]->Value);
	String^ anio = Convert::ToString(datagrid->SelectedRows[0]->Cells[2]->Value);
	String^ marca = Convert::ToString(datagrid->SelectedRows[0]->Cells[3]->Value);
	String^ serie = Convert::ToString(datagrid->SelectedRows[0]->Cells[4]->Value);
	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->eliminar(nombre);
	data->CerrarConexion();
	this->Consulta();

}
private: System::Void datagrid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ nombre = Convert::ToString(datagrid->SelectedRows[0]->Cells[1]->Value);
	label_nombre->Text = "Seleccionado: " + nombre;
}
};
}
