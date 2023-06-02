#include "pch.h"
#include "DB.h"

DB::DB()
{
	this->connectionString = "datasource=localhost; username=root; password=""; database=vehiculo;";
	this->conn = gcnew MySqlConnection(this->connectionString);

}

void DB::AbrirConexion()
{
	this->conn->Open();
}

void DB::CerrarConexion()
{
	this->conn->Close();
}

DataTable^ DB::getData()
{
	String^ sql = "select * from vehiculo";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
void DB::insertar(String^ name, String^ a, String^ ma, String^ s)
{
	String^ sql = "insert into vehiculo(Nombre, Año_de_fabricacion, Marca, Serie) values ('"+name+"', "+a+", '"+ma+"', '"+s+"')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
void DB::modificar(String^ name, String^ a, String^ ma, String^ s, String^ ref)
{
	String^ sql = "update vehiculo set Nombre = '" + name + "', Año_de_fabricacion = '" + a + "', Marca = '" + ma + "', Serie = '" + s + "' where Nombre = '" + ref + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}
void DB::eliminar(String^ nombre)
{
	String^ sql = "delete from vehiculo where Nombre = '" + nombre + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(L"Eliminado correctamente!");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}