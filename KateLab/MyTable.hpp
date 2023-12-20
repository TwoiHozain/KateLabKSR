#pragma once
#include <ios>
#include <iomanip>
#include <iostream>
#include <iomanip>
#include <fstream>

#include <vector>
#include <string>

class MyTable
{
	std::vector<std::string> columnNames;
	std::vector<std::vector<double>> columns;
public:
	MyTable() {}

	MyTable(const std::vector<std::string>& rowNames)
	{
		this->columnNames = rowNames;
		columns = std::vector<std::vector<double>>(rowNames.size());
	}

	MyTable(size_t vSize)
	{
		columnNames.push_back("Xi");

		if (vSize == 1)
		{
			columnNames.push_back("Vi");
			columnNames.push_back("V2i");
			columnNames.push_back("Vi-V2i");
			columnNames.push_back("OLP");
		}
		else
		{
			for (size_t i = 0; i < vSize; i++)
				columnNames.push_back("Vi" + std::to_string(i + 1));

			for (size_t i = 0; i < vSize; i++)
				columnNames.push_back("V2i" + std::to_string(i + 1));

			for (size_t i = 0; i < vSize; i++)
				columnNames.push_back("Vi" + std::to_string(i + 1) + "-" + "V2i" + std::to_string(i + 1));

			for (size_t i = 0; i < vSize; i++)
				columnNames.push_back("OLP" + std::to_string(i + 1));
		}

		columnNames.push_back("h");
		columnNames.push_back("C1");
		columnNames.push_back("C2");

		columns = std::vector<std::vector<double>>(columnNames.size());
	}

	void addRow(const std::vector<double>& row)
	{
		for (int i = 0; i < columns.size(); i++)
			columns[i].push_back(row[i]);
	}

	void addRow(double x, const std::vector<double>& v, const std::vector<double>& v2, double h, double C1, double C2)
	{
		columns[0].push_back(x);

		int i = 1;
		for (int j = 0; j < v.size(); i++, j++)
			columns[i].push_back(v[j]);

		for (int j = 0; j < v.size(); i++, j++)
			columns[i].push_back(v2[j]);

		for (int j = 0; j < v.size(); i++, j++)
			columns[i].push_back(v2[j] - v[j]);

		for (int j = 0; j < v.size(); i++, j++)
			columns[i].push_back(16.0 * (v2[j] - v[j]) / 15.0);

		columns[i].push_back(h);
		columns[++i].push_back(C1);
		columns[++i].push_back(C2);
	}

	void addColumn(std::string columnName, std::vector<double> values)
	{
		columnNames.push_back(columnName);
		columns.push_back(values);
	}

	void printTable1(System::Windows::Forms::DataGridView^ dataGridView)
	{
		System::Data::DataTable^ dataTable = gcnew System::Data::DataTable();

		size_t size = columns[0].size();
		for(int i=0;i<size;i++)
			dataGridView->Rows->Add(i,columns[0][i], columns[1][i], columns[3][i], columns[9][i], columns[5][i], columns[7][i], columns[10][i], columns[11][i]);
	}

	void printTable2(System::Windows::Forms::DataGridView^ dataGridView)
	{
		System::Data::DataTable^ dataTable = gcnew System::Data::DataTable();

		size_t size = columns[0].size();
		for (int i = 0; i < size; i++)
			dataGridView->Rows->Add(i, columns[0][i], columns[2][i], columns[4][i], columns[9][i], columns[6][i], columns[8][i], columns[10][i], columns[11][i]);
	}

	std::vector<double> getColumn(std::string columnName)
	{
		size_t columnInd;

		for (size_t i = 0; i < columnNames.size(); i++)
			if (columnNames[i] == columnName)
				columnInd = i;

		return columns[columnInd];
	}

	~MyTable();
};

void spravka(MyTable* res, System::Windows::Forms::RichTextBox^ out, double b)
{
	size_t size = res->getColumn("Xi").size(), maxHind = 0, minHind = 0;

	out->Text = out->Text + "Результаты счета:\n";
	out->Text = out->Text + "N = "+ res->getColumn("Vi1").size() + "\n";
	out->Text = out->Text + "Расстояние до правой границы счета: " + System::Convert::ToString(b - System::Convert::ToDouble(res->getColumn("Xi")[size - 1])) + "\n";
	out->Text = out->Text + "Последний шаг метода: " + res->getColumn("h")[size - 2] + "\n";
	out->Text = out->Text + "Последяя найденная точка численной траектории: " + res->getColumn("Xi")[size - 1] + "\n";

	size_t OLP1ind = 0, OLP2ind = 0;
	double maxH = res->getColumn("h")[0], minH = res->getColumn("h")[0];

	out->Text = out->Text + "Число удвоений шага:  " + System::Convert::ToString(res->getColumn("C2")[size-1]) + "\n";
	out->Text = out->Text + "Число делений шага:  " + System::Convert::ToString(res->getColumn("C1")[size - 1]) + "\n";

	std::vector<double> OLP1 = res->getColumn("OLP1");
	std::vector<double> OLP2 = res->getColumn("OLP2");
	std::vector<double> h = res->getColumn("h");

	for (int i = 0; i < size; i++)
		if (abs(OLP1[i]) > abs(OLP1[OLP1ind]))
			OLP1ind = i;

	for (int i = 0; i < size; i++)
		if (abs(OLP2[i]) > abs(OLP2[OLP2ind]))
			OLP2ind = i;

	if (abs(OLP1[OLP1ind]) > abs(OLP2[OLP2ind]))
		out->Text = out->Text + "Макс. |ОЛП|:  " + System::Convert::ToString(abs(OLP1[OLP1ind])) + " при x =" + res->getColumn("Xi")[OLP1ind] + "\n";
	else
		out->Text = out->Text + "Макс. |ОЛП|:  " + System::Convert::ToString(abs(OLP2[OLP2ind])) + " при x =" + res->getColumn("Xi")[OLP2ind] + "\n";

	OLP1ind = 0;
	OLP2ind = 0;

	for (int i = 1; i < size; i++)
		if (abs(OLP1[i]) < abs(OLP1[OLP1ind]))
			OLP1ind = i;

	for (int i = 1; i < size; i++)
		if (abs(OLP2[i]) < abs(OLP2[OLP2ind]))
			OLP2ind = i;

	if (abs(OLP1[OLP1ind]) < abs(OLP2[OLP2ind]))
		out->Text = out->Text + "Мин. |ОЛП|:  " + System::Convert::ToString(abs(OLP1[OLP1ind])) + " при x =" + res->getColumn("Xi")[OLP1ind] + "\n";
	else
		out->Text = out->Text + "Мин. |ОЛП|:  " + System::Convert::ToString(abs(OLP2[OLP2ind])) + " при x =" + res->getColumn("Xi")[OLP2ind]+"\n";

	for (int i = 1; i < size; i++)
	{
		if (maxH < h[i])
		{
			maxH = h[i];
			maxHind = i;
		}

		if (minH > h[i])
		{
			minH = h[i];
			minHind = i;
		}
	}

	out->Text = out->Text + "Максимальный шаг:  " + System::Convert::ToString(res->getColumn("h")[maxHind]) + " при x = "+ System::Convert::ToString(res->getColumn("Xi")[maxHind])+"\n";
	out->Text = out->Text + "Минимальный шаг:  " + System::Convert::ToString(res->getColumn("h")[minHind]) + " при x = " + System::Convert::ToString(res->getColumn("Xi")[minHind]) + "\n";
}