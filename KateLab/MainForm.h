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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ spravkaRichTextBox;


























	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::TextBox^ maxIterTextBox;


	private: System::Windows::Forms::TextBox^ hTextBox;

	private: System::Windows::Forms::TextBox^ epsGrTextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::TextBox^ epsTextBox;


	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::DataGridView^ outDataGridView;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ uxChart;


	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ushxChart;

	private: System::Windows::Forms::TabPage^ tabPage4;


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ iterNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ti;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u00i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2i;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ vvChart;

































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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->outDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->iterNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ti = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u00i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->uxChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->ushxChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->vvChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outDataGridView))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uxChart))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ushxChart))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vvChart))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1338, 239);
			this->panel1->TabIndex = 0;
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
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel2->Location = System::Drawing::Point(309, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(520, 213);
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
			this->startButton->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::startButton_MouseClick);
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
			this->groupBox1->Location = System::Drawing::Point(10, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(293, 224);
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
			this->groupBox2->Location = System::Drawing::Point(835, -2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(499, 236);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// spravkaRichTextBox
			// 
			this->spravkaRichTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->spravkaRichTextBox->Location = System::Drawing::Point(3, 22);
			this->spravkaRichTextBox->Name = L"spravkaRichTextBox";
			this->spravkaRichTextBox->Size = System::Drawing::Size(493, 211);
			this->spravkaRichTextBox->TabIndex = 1;
			this->spravkaRichTextBox->Tag = L"";
			this->spravkaRichTextBox->Text = L"";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->splitContainer1->Location = System::Drawing::Point(0, 239);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->outDataGridView);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(1338, 622);
			this->splitContainer1->SplitterDistance = 655;
			this->splitContainer1->TabIndex = 1;
			// 
			// outDataGridView
			// 
			this->outDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->outDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->iterNumber,
					this->ti, this->xi, this->u00i, this->hi, this->C1i, this->C2i
			});
			this->outDataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->outDataGridView->Location = System::Drawing::Point(0, 0);
			this->outDataGridView->Name = L"outDataGridView";
			this->outDataGridView->Size = System::Drawing::Size(655, 622);
			this->outDataGridView->TabIndex = 0;
			// 
			// iterNumber
			// 
			this->iterNumber->HeaderText = L"№";
			this->iterNumber->Name = L"iterNumber";
			// 
			// ti
			// 
			this->ti->HeaderText = L"t[i]";
			this->ti->Name = L"ti";
			// 
			// xi
			// 
			this->xi->HeaderText = L"x[i]";
			this->xi->Name = L"xi";
			// 
			// u00i
			// 
			this->u00i->HeaderText = L"v[i]";
			this->u00i->Name = L"u00i";
			// 
			// hi
			// 
			this->hi->HeaderText = L"h[i]";
			this->hi->Name = L"hi";
			// 
			// C1i
			// 
			this->C1i->HeaderText = L"C1[i]";
			this->C1i->Name = L"C1i";
			// 
			// C2i
			// 
			this->C2i->HeaderText = L"C2[i]";
			this->C2i->Name = L"C2i";
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
			this->tabControl1->Size = System::Drawing::Size(679, 622);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->uxChart);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(671, 589);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"u(x)";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// uxChart
			// 
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea1->AxisX->Title = L"Время x";
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea1->AxisY->Title = L"Координата u";
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->Name = L"ChartArea1";
			this->uxChart->ChartAreas->Add(chartArea1);
			this->uxChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->uxChart->Legends->Add(legend1);
			this->uxChart->Location = System::Drawing::Point(3, 3);
			this->uxChart->Name = L"uxChart";
			series1->BorderColor = System::Drawing::Color::White;
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->uxChart->Series->Add(series1);
			this->uxChart->Size = System::Drawing::Size(665, 583);
			this->uxChart->TabIndex = 0;
			this->uxChart->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Зависимость координаты от времени";
			this->uxChart->Titles->Add(title1);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->ushxChart);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(671, 589);
			this->tabPage3->TabIndex = 1;
			this->tabPage3->Text = L"u\'(x)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// ushxChart
			// 
			chartArea2->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea2->AxisX->Title = L"Время x";
			chartArea2->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea2->AxisY->Title = L"Скорость u\'";
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->Name = L"ChartArea1";
			this->ushxChart->ChartAreas->Add(chartArea2);
			this->ushxChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend2->Name = L"Legend1";
			this->ushxChart->Legends->Add(legend2);
			this->ushxChart->Location = System::Drawing::Point(3, 3);
			this->ushxChart->Name = L"ushxChart";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Red;
			series2->IsVisibleInLegend = false;
			series2->IsXValueIndexed = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->ushxChart->Series->Add(series2);
			this->ushxChart->Size = System::Drawing::Size(665, 583);
			this->ushxChart->TabIndex = 0;
			this->ushxChart->Text = L"chart2";
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"Зависимость скорости от времени";
			this->ushxChart->Titles->Add(title2);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->vvChart);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(671, 589);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"u\'(u)";
			this->tabPage4->UseVisualStyleBackColor = true;
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
			// vvChart
			// 
			chartArea3->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea3->AxisX->Title = L"Координата u";
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea3->AxisY->Title = L"Скорость u\'";
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->Name = L"ChartArea1";
			this->vvChart->ChartAreas->Add(chartArea3);
			this->vvChart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend3->IsTextAutoFit = false;
			legend3->Name = L"Legend1";
			this->vvChart->Legends->Add(legend3);
			this->vvChart->Location = System::Drawing::Point(0, 0);
			this->vvChart->Name = L"vvChart";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->IsVisibleInLegend = false;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->vvChart->Series->Add(series3);
			this->vvChart->Size = System::Drawing::Size(671, 589);
			this->vvChart->TabIndex = 0;
			this->vvChart->Text = L"vvChart";
			title3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"Title1";
			title3->Text = L"Фозовая плоскость";
			this->vvChart->Titles->Add(title3);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1338, 861);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outDataGridView))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uxChart))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ushxChart))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->vvChart))->EndInit();
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

		outDataGridView->Rows->Clear();
		table->printTable(outDataGridView);

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
};
}
