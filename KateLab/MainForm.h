#pragma once
#include "RK4.hpp"
#include <exception>

double function1(double x, const vector<double>& u, const vector<double>& consts) { return u[1]; }
double function2(double x, const vector<double>& u, const vector<double>& consts) { return ((-1.0) * consts[0] * u[1] - consts[1]*u[0]) / consts[2]; }

namespace KateLab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage2;
	protected:











































	private: System::Windows::Forms::DataGridViewTextBoxColumn^ iterNumber;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ maxIterTextBox;
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::TextBox^ epsTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ hTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ epsGrTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ x0TextBox;
	private: System::Windows::Forms::TextBox^ mTextBox;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ kTextBox;
	private: System::Windows::Forms::TextBox^ u00TtextBox;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ xTextBox;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ cTextBox;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ u01TextBox;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RichTextBox^ spravkaRichTextBox;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::DataGridView^ outVDataGridView;







	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ uxChart;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ushxChart;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ vvChart;
private: System::Windows::Forms::TabControl^ tabControl3;
private: System::Windows::Forms::TabPage^ tabPage7;






private: System::Windows::Forms::TabPage^ tabPage8;






private: System::Windows::Forms::DataGridView^ outVshDdataGridView;



































private: System::Windows::Forms::WebBrowser^ webBrowser1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ti;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ vi_v2i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::WebBrowser^ webBrowser2;









































































































































































































	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->iterNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->outVDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->outVshDdataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->uxChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->ushxChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->vvChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->maxIterTextBox = (gcnew System::Windows::Forms::TextBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->epsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->epsGrTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->x0TextBox = (gcnew System::Windows::Forms::TextBox());
			this->mTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->kTextBox = (gcnew System::Windows::Forms::TextBox());
			this->u00TtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->xTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->cTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->u01TextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->spravkaRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ti = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi_v2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser2 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outVDataGridView))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outVshDdataGridView))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uxChart))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ushxChart))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vvChart))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(0, 0);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(200, 100);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"tabPage2";
			// 
			// iterNumber
			// 
			this->iterNumber->HeaderText = L"№";
			this->iterNumber->Name = L"iterNumber";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(0, 0);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1338, 861);
			this->tabControl2->TabIndex = 2;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->splitContainer1);
			this->tabPage5->Controls->Add(this->panel1);
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage5->Location = System::Drawing::Point(4, 33);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1330, 824);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Вычислить";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->splitContainer1->Location = System::Drawing::Point(3, 231);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tabControl3);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(1324, 590);
			this->splitContainer1->SplitterDistance = 650;
			this->splitContainer1->TabIndex = 2;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl3->Location = System::Drawing::Point(0, 0);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(650, 590);
			this->tabControl3->TabIndex = 1;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->outVDataGridView);
			this->tabPage7->Location = System::Drawing::Point(4, 29);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(642, 557);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Таблица 1";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// outVDataGridView
			// 
			this->outVDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->outVDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->i, this->ti,
					this->xi, this->Column7, this->hi, this->vi_v2i, this->OLP1, this->Column8, this->Column9
			});
			this->outVDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->outVDataGridView->Location = System::Drawing::Point(3, 3);
			this->outVDataGridView->Name = L"outVDataGridView";
			this->outVDataGridView->Size = System::Drawing::Size(636, 551);
			this->outVDataGridView->TabIndex = 0;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->outVshDdataGridView);
			this->tabPage8->Location = System::Drawing::Point(4, 29);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(642, 557);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Таблица 2";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// outVshDdataGridView
			// 
			this->outVshDdataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->outVshDdataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->dataGridViewTextBoxColumn1, this->Column4, this->Column5, this->Column6, this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn3
			});
			this->outVshDdataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->outVshDdataGridView->Location = System::Drawing::Point(3, 3);
			this->outVshDdataGridView->Name = L"outVshDdataGridView";
			this->outVshDdataGridView->Size = System::Drawing::Size(636, 551);
			this->outVshDdataGridView->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(670, 590);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->uxChart);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(662, 557);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"v(x)";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// uxChart
			// 
			chartArea10->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea10->AxisX->Title = L"Время x";
			chartArea10->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea10->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea10->AxisY->Title = L"Координата u";
			chartArea10->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea10->Name = L"ChartArea1";
			this->uxChart->ChartAreas->Add(chartArea10);
			this->uxChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend10->Name = L"Legend1";
			this->uxChart->Legends->Add(legend10);
			this->uxChart->Location = System::Drawing::Point(3, 3);
			this->uxChart->Name = L"uxChart";
			series10->BorderColor = System::Drawing::Color::White;
			series10->BorderWidth = 2;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Color = System::Drawing::Color::Red;
			series10->IsVisibleInLegend = false;
			series10->Legend = L"Legend1";
			series10->Name = L"Series1";
			this->uxChart->Series->Add(series10);
			this->uxChart->Size = System::Drawing::Size(656, 551);
			this->uxChart->TabIndex = 0;
			this->uxChart->Text = L"chart1";
			title10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title10->Name = L"Title1";
			title10->Text = L"Зависимость координаты от времени";
			this->uxChart->Titles->Add(title10);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->ushxChart);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(662, 557);
			this->tabPage3->TabIndex = 1;
			this->tabPage3->Text = L"v\'(x)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// ushxChart
			// 
			chartArea11->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea11->AxisX->Title = L"Время x";
			chartArea11->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea11->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea11->AxisY->Title = L"Скорость u\'";
			chartArea11->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea11->Name = L"ChartArea1";
			this->ushxChart->ChartAreas->Add(chartArea11);
			this->ushxChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend11->Name = L"Legend1";
			this->ushxChart->Legends->Add(legend11);
			this->ushxChart->Location = System::Drawing::Point(3, 3);
			this->ushxChart->Name = L"ushxChart";
			series11->BorderWidth = 2;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Color = System::Drawing::Color::Red;
			series11->IsVisibleInLegend = false;
			series11->IsXValueIndexed = true;
			series11->Legend = L"Legend1";
			series11->Name = L"Series1";
			this->ushxChart->Series->Add(series11);
			this->ushxChart->Size = System::Drawing::Size(656, 551);
			this->ushxChart->TabIndex = 0;
			this->ushxChart->Text = L"chart2";
			title11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title11->Name = L"Title1";
			title11->Text = L"Зависимость скорости от времени";
			this->ushxChart->Titles->Add(title11);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->vvChart);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(662, 557);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"v\'(v)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// vvChart
			// 
			chartArea12->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea12->AxisX->Title = L"Координата u";
			chartArea12->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea12->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea12->AxisY->Title = L"Скорость u\'";
			chartArea12->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea12->Name = L"ChartArea1";
			this->vvChart->ChartAreas->Add(chartArea12);
			this->vvChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend12->IsTextAutoFit = false;
			legend12->Name = L"Legend1";
			this->vvChart->Legends->Add(legend12);
			this->vvChart->Location = System::Drawing::Point(0, 0);
			this->vvChart->Name = L"vvChart";
			series12->BorderWidth = 2;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Color = System::Drawing::Color::Red;
			series12->IsVisibleInLegend = false;
			series12->Legend = L"Legend1";
			series12->Name = L"Series1";
			this->vvChart->Series->Add(series12);
			this->vvChart->Size = System::Drawing::Size(662, 557);
			this->vvChart->TabIndex = 0;
			this->vvChart->Text = L"vvChart";
			title12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title12->Name = L"Title1";
			title12->Text = L"Фозовая плоскость";
			this->vvChart->Titles->Add(title12);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1324, 228);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->maxIterTextBox);
			this->panel2->Controls->Add(this->startButton);
			this->panel2->Controls->Add(this->epsTextBox);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->hTextBox);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->epsGrTextBox);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(309, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(520, 209);
			this->panel2->TabIndex = 58;
			// 
			// maxIterTextBox
			// 
			this->maxIterTextBox->Location = System::Drawing::Point(278, 111);
			this->maxIterTextBox->Name = L"maxIterTextBox";
			this->maxIterTextBox->Size = System::Drawing::Size(218, 26);
			this->maxIterTextBox->TabIndex = 56;
			this->maxIterTextBox->Text = L"100000";
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(167, 152);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(185, 47);
			this->startButton->TabIndex = 57;
			this->startButton->Text = L"Старт";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MainForm::startButton_Click);
			// 
			// epsTextBox
			// 
			this->epsTextBox->Location = System::Drawing::Point(33, 112);
			this->epsTextBox->Name = L"epsTextBox";
			this->epsTextBox->Size = System::Drawing::Size(218, 26);
			this->epsTextBox->TabIndex = 48;
			this->epsTextBox->Text = L"0,00001";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(29, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Точность выхода на границу";
			// 
			// hTextBox
			// 
			this->hTextBox->Location = System::Drawing::Point(278, 47);
			this->hTextBox->Name = L"hTextBox";
			this->hTextBox->Size = System::Drawing::Size(218, 26);
			this->hTextBox->TabIndex = 55;
			this->hTextBox->Text = L"0,0001";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(29, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Контроль лок. погрешности";
			// 
			// epsGrTextBox
			// 
			this->epsGrTextBox->Location = System::Drawing::Point(33, 48);
			this->epsGrTextBox->Name = L"epsGrTextBox";
			this->epsGrTextBox->Size = System::Drawing::Size(218, 26);
			this->epsGrTextBox->TabIndex = 54;
			this->epsGrTextBox->Text = L"0,001";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(274, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 20);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Шаг интегрирования";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(274, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(222, 20);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Максимальное число шагов";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->x0TextBox);
			this->groupBox1->Controls->Add(this->mTextBox);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->kTextBox);
			this->groupBox1->Controls->Add(this->u00TtextBox);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->xTextBox);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->cTextBox);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->u01TextBox);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(10, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(293, 218);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры системы";
			// 
			// x0TextBox
			// 
			this->x0TextBox->Location = System::Drawing::Point(38, 44);
			this->x0TextBox->Name = L"x0TextBox";
			this->x0TextBox->Size = System::Drawing::Size(100, 26);
			this->x0TextBox->TabIndex = 44;
			this->x0TextBox->Text = L"0";
			// 
			// mTextBox
			// 
			this->mTextBox->Location = System::Drawing::Point(180, 61);
			this->mTextBox->Name = L"mTextBox";
			this->mTextBox->Size = System::Drawing::Size(100, 26);
			this->mTextBox->TabIndex = 49;
			this->mTextBox->Text = L"1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(154, 99);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 20);
			this->label21->TabIndex = 42;
			this->label21->Text = L"c";
			// 
			// kTextBox
			// 
			this->kTextBox->Location = System::Drawing::Point(180, 131);
			this->kTextBox->Name = L"kTextBox";
			this->kTextBox->Size = System::Drawing::Size(100, 26);
			this->kTextBox->TabIndex = 51;
			this->kTextBox->Text = L"1";
			// 
			// u00TtextBox
			// 
			this->u00TtextBox->Location = System::Drawing::Point(38, 114);
			this->u00TtextBox->Name = L"u00TtextBox";
			this->u00TtextBox->Size = System::Drawing::Size(100, 26);
			this->u00TtextBox->TabIndex = 46;
			this->u00TtextBox->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 117);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 20);
			this->label20->TabIndex = 37;
			this->label20->Text = L"u0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 152);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(30, 20);
			this->label17->TabIndex = 38;
			this->label17->Text = L"u\'0";
			// 
			// label22
			// 
			this->label22->AccessibleDescription = L"Поапаоао";
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(154, 64);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(22, 20);
			this->label22->TabIndex = 41;
			this->label22->Text = L"m";
			// 
			// xTextBox
			// 
			this->xTextBox->Location = System::Drawing::Point(38, 79);
			this->xTextBox->Name = L"xTextBox";
			this->xTextBox->Size = System::Drawing::Size(100, 26);
			this->xTextBox->TabIndex = 45;
			this->xTextBox->Text = L"1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(155, 134);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 20);
			this->label19->TabIndex = 43;
			this->label19->Text = L"k";
			// 
			// cTextBox
			// 
			this->cTextBox->Location = System::Drawing::Point(180, 96);
			this->cTextBox->Name = L"cTextBox";
			this->cTextBox->Size = System::Drawing::Size(100, 26);
			this->cTextBox->TabIndex = 50;
			this->cTextBox->Text = L"1";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(8, 47);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(25, 20);
			this->label23->TabIndex = 36;
			this->label23->Text = L"x0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(12, 79);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 20);
			this->label18->TabIndex = 39;
			this->label18->Text = L"x";
			// 
			// u01TextBox
			// 
			this->u01TextBox->Location = System::Drawing::Point(38, 149);
			this->u01TextBox->Name = L"u01TextBox";
			this->u01TextBox->Size = System::Drawing::Size(100, 26);
			this->u01TextBox->TabIndex = 47;
			this->u01TextBox->Text = L"3";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->spravkaRichTextBox);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(835, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(482, 220);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// spravkaRichTextBox
			// 
			this->spravkaRichTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->spravkaRichTextBox->Location = System::Drawing::Point(3, 22);
			this->spravkaRichTextBox->Name = L"spravkaRichTextBox";
			this->spravkaRichTextBox->Size = System::Drawing::Size(476, 195);
			this->spravkaRichTextBox->TabIndex = 1;
			this->spravkaRichTextBox->Tag = L"";
			this->spravkaRichTextBox->Text = L"";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->webBrowser1);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage6->Location = System::Drawing::Point(4, 33);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1330, 824);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"О программе";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(3, 3);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1324, 818);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->Url = (gcnew System::Uri(L"", System::UriKind::Relative));
			// 
			// i
			// 
			dataGridViewCellStyle4->NullValue = nullptr;
			this->i->DefaultCellStyle = dataGridViewCellStyle4;
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			// 
			// ti
			// 
			this->ti->HeaderText = L"x[i]";
			this->ti->Name = L"ti";
			// 
			// xi
			// 
			this->xi->HeaderText = L"v[i]";
			this->xi->Name = L"xi";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"v^[i]";
			this->Column7->Name = L"Column7";
			// 
			// hi
			// 
			this->hi->HeaderText = L"h[i]";
			this->hi->Name = L"hi";
			// 
			// vi_v2i
			// 
			this->vi_v2i->HeaderText = L"v^[i]-v[i]";
			this->vi_v2i->Name = L"vi_v2i";
			// 
			// OLP1
			// 
			this->OLP1->HeaderText = L"ОЛП";
			this->OLP1->Name = L"OLP1";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C1";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"C2";
			this->Column9->Name = L"Column9";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x[i]";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"v\'[i]";
			this->Column3->Name = L"Column3";
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"v\'^[i]";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"h[i]";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"v\'^[i]-v\'[i]";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"ОЛП";
			this->Column6->Name = L"Column6";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->webBrowser2);
			this->tabPage9->Location = System::Drawing::Point(4, 33);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(1330, 824);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"Теоретические сведения";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// webBrowser2
			// 
			this->webBrowser2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser2->Location = System::Drawing::Point(0, 0);
			this->webBrowser2->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser2->Name = L"webBrowser2";
			this->webBrowser2->Size = System::Drawing::Size(1330, 824);
			this->webBrowser2->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1338, 861);
			this->Controls->Add(this->tabControl2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outVDataGridView))->EndInit();
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outVshDdataGridView))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uxChart))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ushxChart))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vvChart))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void startButton_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	try
	{
		MyTable* table = rk4VariableStep
		(
			{ &function1,&function2 },
			Convert::ToDouble(x0TextBox->Text),/*x0*/
			{ Convert::ToDouble(u00TtextBox->Text),Convert::ToDouble(u01TextBox->Text) },/*(u0,u'0)*/
			{ Convert::ToDouble(cTextBox->Text),Convert::ToDouble(kTextBox->Text),Convert::ToDouble(mTextBox->Text) },
			Convert::ToDouble(hTextBox->Text),
			Convert::ToDouble(xTextBox->Text),
			Convert::ToDouble(epsTextBox->Text),
			Convert::ToDouble(epsGrTextBox->Text)
		);

		outVDataGridView->Rows->Clear();
		table->printTable1(outVDataGridView);

		vector<double> Xi = table->getColumn("Xi");
		vector<double> Vi1 = table->getColumn("Vi1");
		vector<double> Vi2 = table->getColumn("Vi2");

		uxChart->Series[0]->Points->Clear();
		ushxChart->Series[0]->Points->Clear();
		vvChart->Series[0]->Points->Clear();

		for(int i=0;i<Xi.size();i++)
			uxChart->Series[0]->Points->AddXY(Xi[i],Vi1[i]);

		for (int i = 0; i < Xi.size(); i++)
			ushxChart->Series[0]->Points->AddXY(Xi[i], Vi2[i]);

		for (int i = 0; i < Xi.size(); i++)
			vvChart->Series[0]->Points->AddXY(Vi1[i], Vi2[i]);

		spravka(table, spravkaRichTextBox, Convert::ToDouble(xTextBox->Text));
	}
	catch (FormatException^ exc)
	{
		MessageBox::Show(Convert::ToString(exc->Message));
	}
}
private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		MyTable* table = rk4VariableStep
		(
			{ &function1,&function2 },
			Convert::ToDouble(x0TextBox->Text),/*x0*/
			{ Convert::ToDouble(u00TtextBox->Text),Convert::ToDouble(u01TextBox->Text) },/*(u0,u'0)*/
			{ Convert::ToDouble(cTextBox->Text),Convert::ToDouble(kTextBox->Text),Convert::ToDouble(mTextBox->Text) },
			Convert::ToDouble(hTextBox->Text),
			Convert::ToDouble(xTextBox->Text),
			Convert::ToDouble(epsTextBox->Text),
			Convert::ToDouble(epsGrTextBox->Text)
		);

		outVDataGridView->Rows->Clear();
		table->printTable1(outVDataGridView);

		outVshDdataGridView->Rows->Clear();
		table->printTable2(outVshDdataGridView);

		vector<double> Xi = table->getColumn("Xi");
		vector<double> Vi1 = table->getColumn("Vi1");
		vector<double> Vi2 = table->getColumn("Vi2");

		uxChart->Series[0]->Points->Clear();
		ushxChart->Series[0]->Points->Clear();
		vvChart->Series[0]->Points->Clear();

		for (int i = 0; i < Xi.size(); i++)
			uxChart->Series[0]->Points->AddXY(Xi[i], Vi1[i]);

		for (int i = 0; i < Xi.size(); i++)
			ushxChart->Series[0]->Points->AddXY(Xi[i], Vi2[i]);

		for (int i = 0; i < Xi.size(); i++)
			vvChart->Series[0]->Points->AddXY(Vi1[i], Vi2[i]);

		spravka(table, spravkaRichTextBox, Convert::ToDouble(xTextBox->Text));
	}
	catch (FormatException^ exc)
	{
		MessageBox::Show(Convert::ToString(exc->Message));
	}
}
};
}
