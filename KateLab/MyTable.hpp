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
	out->Text = "";

	size_t size = res->getColumn("Xi").size(), maxHind = 0, minHind = 0;
	double maxOLP1 = -1.0, maxOLP2 = -1.0, maxH = res->getColumn("h")[0], minH = res->getColumn("h")[0];

	out->Text = out->Text + "Число удвоений шага:  " + System::Convert::ToString(res->getColumn("C2")[size-1]) + "\n";
	out->Text = out->Text + "Число делений шага:  " + System::Convert::ToString(res->getColumn("C1")[size - 1]) + "\n";
	out->Text = out->Text + "Общее число шагов:  " + System::Convert::ToString(size) + "\n";

	std::vector<double> OLP1 = res->getColumn("OLP1");
	std::vector<double> OLP2 = res->getColumn("OLP2");
	std::vector<double> h = res->getColumn("h");

	for (int i = 0; i < size; i++)
		if (maxOLP1 < abs(OLP1[i]))
			maxOLP1 = abs(OLP1[i]);

	for (int i = 0; i < size; i++)
		if (maxOLP2 < abs(OLP2[i]))
			maxOLP2 = abs(OLP2[i]);

	if(OLP1>=OLP2)
		out->Text = out->Text + "Макс. |ОЛП|:  " + System::Convert::ToString(maxOLP1) + "\n";
	else
		out->Text = out->Text + "Макс. |ОЛП|:  " + System::Convert::ToString(maxOLP2) + "\n";

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

	out->Text = out->Text + "Максимальный шаг:  " + System::Convert::ToString(res->getColumn("h")[maxHind]) + "\n";
	out->Text = out->Text + "Минимальный шаг:  " + System::Convert::ToString(res->getColumn("h")[minHind]) + "\n";
}