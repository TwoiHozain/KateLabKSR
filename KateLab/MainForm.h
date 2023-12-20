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


	private: System::Windows::Forms::Button^ startButton;







	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ mTextBox;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ kTextBox;



	private: System::Windows::Forms::Label^ label22;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ cTextBox;



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




private: System::Windows::Forms::TextBox^ x0TextBox;
private: System::Windows::Forms::TextBox^ u00TtextBox;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ xTextBox;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ u01TextBox;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::TextBox^ nTextBox;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::CheckBox^ constStepCheckBox;
private: System::Windows::Forms::TextBox^ maxIterTextBox;
private: System::Windows::Forms::TextBox^ epsTextBox;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TextBox^ hTextBox;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ epsGrTextBox;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::ComponentModel::IContainer^ components;









































































































































































































	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->iterNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->outVDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ti = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi_v2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->outVshDdataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->uxChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->ushxChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->vvChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->mTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->kTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->cTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->spravkaRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->webBrowser2 = (gcnew System::Windows::Forms::WebBrowser());
			this->x0TextBox = (gcnew System::Windows::Forms::TextBox());
			this->u00TtextBox = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->xTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->u01TextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->nTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->constStepCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->maxIterTextBox = (gcnew System::Windows::Forms::TextBox());
			this->epsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->epsGrTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
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
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->groupBox3->SuspendLayout();
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
			this->tabPage5->Text = L"Программа";
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
			// i
			// 
			dataGridViewCellStyle6->NullValue = nullptr;
			this->i->DefaultCellStyle = dataGridViewCellStyle6;
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
			chartArea16->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea16->AxisX->Title = L"Время x";
			chartArea16->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea16->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea16->AxisY->Title = L"Координата u";
			chartArea16->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea16->Name = L"ChartArea1";
			this->uxChart->ChartAreas->Add(chartArea16);
			this->uxChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend16->Name = L"Legend1";
			this->uxChart->Legends->Add(legend16);
			this->uxChart->Location = System::Drawing::Point(3, 3);
			this->uxChart->Name = L"uxChart";
			series16->BorderColor = System::Drawing::Color::White;
			series16->BorderWidth = 2;
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series16->Color = System::Drawing::Color::Red;
			series16->IsVisibleInLegend = false;
			series16->Legend = L"Legend1";
			series16->Name = L"Series1";
			this->uxChart->Series->Add(series16);
			this->uxChart->Size = System::Drawing::Size(656, 551);
			this->uxChart->TabIndex = 0;
			this->uxChart->Text = L"chart1";
			title16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title16->Name = L"Title1";
			title16->Text = L"Зависимость координаты от времени";
			this->uxChart->Titles->Add(title16);
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
			chartArea17->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea17->AxisX->Title = L"Время x";
			chartArea17->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea17->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea17->AxisY->Title = L"Скорость u\'";
			chartArea17->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea17->Name = L"ChartArea1";
			this->ushxChart->ChartAreas->Add(chartArea17);
			this->ushxChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend17->Name = L"Legend1";
			this->ushxChart->Legends->Add(legend17);
			this->ushxChart->Location = System::Drawing::Point(3, 3);
			this->ushxChart->Name = L"ushxChart";
			series17->BorderWidth = 2;
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series17->Color = System::Drawing::Color::Red;
			series17->IsVisibleInLegend = false;
			series17->IsXValueIndexed = true;
			series17->Legend = L"Legend1";
			series17->Name = L"Series1";
			this->ushxChart->Series->Add(series17);
			this->ushxChart->Size = System::Drawing::Size(656, 551);
			this->ushxChart->TabIndex = 0;
			this->ushxChart->Text = L"chart2";
			title17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title17->Name = L"Title1";
			title17->Text = L"Зависимость скорости от времени";
			this->ushxChart->Titles->Add(title17);
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
			chartArea18->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea18->AxisX->Title = L"Координата u";
			chartArea18->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea18->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea18->AxisY->Title = L"Скорость u\'";
			chartArea18->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea18->Name = L"ChartArea1";
			this->vvChart->ChartAreas->Add(chartArea18);
			this->vvChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend18->IsTextAutoFit = false;
			legend18->Name = L"Legend1";
			this->vvChart->Legends->Add(legend18);
			this->vvChart->Location = System::Drawing::Point(0, 0);
			this->vvChart->Name = L"vvChart";
			series18->BorderWidth = 2;
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series18->Color = System::Drawing::Color::Red;
			series18->IsVisibleInLegend = false;
			series18->Legend = L"Legend1";
			series18->Name = L"Series1";
			this->vvChart->Series->Add(series18);
			this->vvChart->Size = System::Drawing::Size(662, 557);
			this->vvChart->TabIndex = 0;
			this->vvChart->Text = L"vvChart";
			title18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title18->Name = L"Title1";
			title18->Text = L"Фозовая плоскость";
			this->vvChart->Titles->Add(title18);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1324, 228);
			this->panel1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->x0TextBox);
			this->groupBox1->Controls->Add(this->u00TtextBox);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->xTextBox);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->u01TextBox);
			this->groupBox1->Controls->Add(this->startButton);
			this->groupBox1->Controls->Add(this->mTextBox);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->kTextBox);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->cTextBox);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(10, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(293, 218);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры";
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(51, 165);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(185, 47);
			this->startButton->TabIndex = 57;
			this->startButton->Text = L"Старт";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MainForm::startButton_Click);
			// 
			// mTextBox
			// 
			this->mTextBox->Location = System::Drawing::Point(33, 28);
			this->mTextBox->Name = L"mTextBox";
			this->mTextBox->Size = System::Drawing::Size(100, 26);
			this->mTextBox->TabIndex = 49;
			this->mTextBox->Text = L"1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(7, 66);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 20);
			this->label21->TabIndex = 42;
			this->label21->Text = L"c";
			// 
			// kTextBox
			// 
			this->kTextBox->Location = System::Drawing::Point(33, 98);
			this->kTextBox->Name = L"kTextBox";
			this->kTextBox->Size = System::Drawing::Size(100, 26);
			this->kTextBox->TabIndex = 51;
			this->kTextBox->Text = L"1";
			// 
			// label22
			// 
			this->label22->AccessibleDescription = L"Поапаоао";
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(7, 31);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(22, 20);
			this->label22->TabIndex = 41;
			this->label22->Text = L"m";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(8, 101);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 20);
			this->label19->TabIndex = 43;
			this->label19->Text = L"k";
			// 
			// cTextBox
			// 
			this->cTextBox->Location = System::Drawing::Point(33, 63);
			this->cTextBox->Name = L"cTextBox";
			this->cTextBox->Size = System::Drawing::Size(100, 26);
			this->cTextBox->TabIndex = 50;
			this->cTextBox->Text = L"1";
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
			this->tabPage6->Text = L"Постановка задачи";
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
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->webBrowser2);
			this->tabPage9->Location = System::Drawing::Point(4, 33);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(1330, 824);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"Информация о методе";
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
			// x0TextBox
			// 
			this->x0TextBox->Location = System::Drawing::Point(178, 28);
			this->x0TextBox->Name = L"x0TextBox";
			this->x0TextBox->Size = System::Drawing::Size(100, 26);
			this->x0TextBox->TabIndex = 62;
			this->x0TextBox->Text = L"0";
			// 
			// u00TtextBox
			// 
			this->u00TtextBox->Location = System::Drawing::Point(178, 98);
			this->u00TtextBox->Name = L"u00TtextBox";
			this->u00TtextBox->Size = System::Drawing::Size(100, 26);
			this->u00TtextBox->TabIndex = 64;
			this->u00TtextBox->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(147, 101);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 20);
			this->label20->TabIndex = 59;
			this->label20->Text = L"u0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(143, 136);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(30, 20);
			this->label17->TabIndex = 60;
			this->label17->Text = L"u\'0";
			// 
			// xTextBox
			// 
			this->xTextBox->Location = System::Drawing::Point(178, 63);
			this->xTextBox->Name = L"xTextBox";
			this->xTextBox->Size = System::Drawing::Size(100, 26);
			this->xTextBox->TabIndex = 63;
			this->xTextBox->Text = L"10";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(148, 31);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(25, 20);
			this->label23->TabIndex = 58;
			this->label23->Text = L"x0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(152, 63);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(16, 20);
			this->label18->TabIndex = 61;
			this->label18->Text = L"x";
			// 
			// u01TextBox
			// 
			this->u01TextBox->Location = System::Drawing::Point(178, 133);
			this->u01TextBox->Name = L"u01TextBox";
			this->u01TextBox->Size = System::Drawing::Size(100, 26);
			this->u01TextBox->TabIndex = 65;
			this->u01TextBox->Text = L"3";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->nTextBox);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->constStepCheckBox);
			this->groupBox3->Controls->Add(this->maxIterTextBox);
			this->groupBox3->Controls->Add(this->epsTextBox);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->hTextBox);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->epsGrTextBox);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(309, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(520, 218);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры счета";
			// 
			// nTextBox
			// 
			this->nTextBox->Location = System::Drawing::Point(350, 175);
			this->nTextBox->Name = L"nTextBox";
			this->nTextBox->Size = System::Drawing::Size(45, 26);
			this->nTextBox->TabIndex = 70;
			this->nTextBox->Text = L"100";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(236, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 20);
			this->label5->TabIndex = 69;
			this->label5->Text = L"Число шагов";
			// 
			// constStepCheckBox
			// 
			this->constStepCheckBox->AutoSize = true;
			this->constStepCheckBox->Location = System::Drawing::Point(75, 177);
			this->constStepCheckBox->Name = L"constStepCheckBox";
			this->constStepCheckBox->Size = System::Drawing::Size(155, 24);
			this->constStepCheckBox->TabIndex = 68;
			this->constStepCheckBox->Text = L"Постоянный шаг";
			this->toolTip1->SetToolTip(this->constStepCheckBox, L"Чтобы вычислить шаг интегрирования \r\nпри постоянном шаге нужно разделить\r\nдлинну "
				L"отрезка на число шагов\r\n");
			this->constStepCheckBox->UseVisualStyleBackColor = true;
			// 
			// maxIterTextBox
			// 
			this->maxIterTextBox->Location = System::Drawing::Point(271, 120);
			this->maxIterTextBox->Name = L"maxIterTextBox";
			this->maxIterTextBox->Size = System::Drawing::Size(218, 26);
			this->maxIterTextBox->TabIndex = 67;
			this->maxIterTextBox->Text = L"100000";
			// 
			// epsTextBox
			// 
			this->epsTextBox->Location = System::Drawing::Point(26, 121);
			this->epsTextBox->Name = L"epsTextBox";
			this->epsTextBox->Size = System::Drawing::Size(218, 26);
			this->epsTextBox->TabIndex = 62;
			this->epsTextBox->Text = L"0,001";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 20);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Точность выхода на границу";
			// 
			// hTextBox
			// 
			this->hTextBox->Location = System::Drawing::Point(271, 56);
			this->hTextBox->Name = L"hTextBox";
			this->hTextBox->Size = System::Drawing::Size(218, 26);
			this->hTextBox->TabIndex = 66;
			this->hTextBox->Text = L"0,0001";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 20);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Контроль лок. погрешности";
			// 
			// epsGrTextBox
			// 
			this->epsGrTextBox->Location = System::Drawing::Point(26, 57);
			this->epsGrTextBox->Name = L"epsGrTextBox";
			this->epsGrTextBox->Size = System::Drawing::Size(218, 26);
			this->epsGrTextBox->TabIndex = 65;
			this->epsGrTextBox->Text = L"0,001";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(267, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 20);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Шаг интегрирования";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(267, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(222, 20);
			this->label4->TabIndex = 64;
			this->label4->Text = L"Максимальное число шагов";
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 50;
			this->toolTip1->AutoPopDelay = 50000;
			this->toolTip1->InitialDelay = 50;
			this->toolTip1->ReshowDelay = 10;
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
			this->Text = L"Семашко Е. М.,  гр. 3821Б1ПМоп2, задание 11, вариант 4";
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
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		MyTable* table;

		if (constStepCheckBox->Checked)
		{
			table = rk4ConstStep
			(
				{ &function1,&function2 },
				Convert::ToDouble(x0TextBox->Text),/*x0*/
				{ Convert::ToDouble(u00TtextBox->Text),Convert::ToDouble(u01TextBox->Text) },/*(u0,u'0)*/
				{ Convert::ToDouble(cTextBox->Text),Convert::ToDouble(kTextBox->Text),Convert::ToDouble(mTextBox->Text) },
				Convert::ToDouble(nTextBox->Text),
				Convert::ToDouble(xTextBox->Text),
				Convert::ToInt32(maxIterTextBox->Text)
			);
		}
		else
		{
			table = rk4VariableStep
			(
				{ &function1,&function2 },
				Convert::ToDouble(x0TextBox->Text),/*x0*/
				{ Convert::ToDouble(u00TtextBox->Text),Convert::ToDouble(u01TextBox->Text) },/*(u0,u'0)*/
				{ Convert::ToDouble(cTextBox->Text),Convert::ToDouble(kTextBox->Text),Convert::ToDouble(mTextBox->Text) },
				Convert::ToDouble(hTextBox->Text),
				Convert::ToDouble(xTextBox->Text),
				Convert::ToDouble(epsTextBox->Text),
				Convert::ToDouble(epsGrTextBox->Text),
				Convert::ToInt32(maxIterTextBox->Text)
			);
		}

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

		spravkaRichTextBox->Text = "Задание 11, вариант 4\nМетод Рунге-Кутта явный порядка p = 4\n\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Параметры системы:\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Масса груза m = " + mTextBox->Text+" кг\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Коэффициент демпфирования c = " + cTextBox->Text + " Н/см\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Жесткость пружины k = " + kTextBox->Text + " Нс/см^2\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "\n";

		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Параметры задачи Коши:\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "u(0) = " + System::Convert::ToString(table->getColumn("Vi1")[0]) + "\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "u'(0) = " + System::Convert::ToString(table->getColumn("Vi2")[0]) + "\n\n";

		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Условия остановки счета:\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Максимальное время счета х = " + xTextBox->Text + " сек.\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Эпсилон граничное: " + epsGrTextBox->Text + "\n\n";

		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Максимальное число шагов метода: " + maxIterTextBox->Text + "\n";
		spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Начальный шаг интегрирования: " + hTextBox->Text + " сек.\n\n";

		if (constStepCheckBox->Checked)
		{

			spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Контоль погрешности отключен\n\n";
		}
		else
		{
			spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Контоль погрешности включен\n";
			spravkaRichTextBox->Text = spravkaRichTextBox->Text + "Контроль локальной погрешности: " + epsTextBox->Text + "\n\n";
		}

		spravka(table, spravkaRichTextBox, Convert::ToDouble(xTextBox->Text));
	}
	catch (FormatException^ exc)
	{
		MessageBox::Show(Convert::ToString(exc->Message));
	}
}
};
}
