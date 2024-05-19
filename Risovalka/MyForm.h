#pragma once

namespace Risovalka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class PaintForm : public System::Windows::Forms::Form
	{
	public:
		PaintForm(void)
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
		~PaintForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::MenuStrip^ TopMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ canvasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearCanvasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ soundModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ freeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stepsToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ OuterGroupBox;
	private: System::Windows::Forms::GroupBox^ InnerRightGroupBox;

	private: System::Windows::Forms::GroupBox^ InnerLeftGroupBox;
	private: System::Windows::Forms::GroupBox^ InnerCentralGroupBox;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::Button^ ButtonRed;
	private: System::Windows::Forms::Button^ ButtonBlue;

	private: System::Windows::Forms::Button^ ButtonCyan;

	private: System::Windows::Forms::Button^ ButtonGreen;

	private: System::Windows::Forms::Button^ ButtonYellow;

	private: System::Windows::Forms::Button^ ButtonOrange;
	private: System::Windows::Forms::Button^ ButtonPurple;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownBrushSize;
	private: System::Windows::Forms::Label^ labelBrushSize;
	private: System::Windows::Forms::RadioButton^ radioButtonErase;
	private: System::Windows::Forms::RadioButton^ radioButtonDraw;
	private: System::Windows::Forms::Label^ labelMode;
	private: System::Windows::Forms::PictureBox^ pictureBoxPalette;

	private: System::Windows::Forms::PictureBox^ pictureBoxCanvas;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLength;

	private: System::Windows::Forms::Label^ labelLength;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidth;




	private: System::Windows::Forms::Label^ labelWidth;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::ComboBox^ comboBoxInstruments;

	private: System::Windows::Forms::PictureBox^ pictureBoxInstrument;
	private: System::Windows::Forms::RadioButton^ radioButtonSquare;

	private: System::Windows::Forms::RadioButton^ radioButtonCircle;
	private: System::Windows::Forms::RadioButton^ radioButtonLine;
	private: System::Windows::Forms::RadioButton^ radioButtonTriangle;
	private: System::Windows::Forms::Label^ labelShape;







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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->TopMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->canvasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearCanvasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soundModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->freeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stepsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OuterGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->InnerCentralGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->labelMode = (gcnew System::Windows::Forms::Label());
			this->radioButtonErase = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDraw = (gcnew System::Windows::Forms::RadioButton());
			this->labelBrushSize = (gcnew System::Windows::Forms::Label());
			this->numericUpDownBrushSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelWidth = (gcnew System::Windows::Forms::Label());
			this->labelLength = (gcnew System::Windows::Forms::Label());
			this->numericUpDownWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLength = (gcnew System::Windows::Forms::NumericUpDown());
			this->InnerRightGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBoxPalette = (gcnew System::Windows::Forms::PictureBox());
			this->ButtonPurple = (gcnew System::Windows::Forms::Button());
			this->ButtonBlue = (gcnew System::Windows::Forms::Button());
			this->ButtonCyan = (gcnew System::Windows::Forms::Button());
			this->ButtonGreen = (gcnew System::Windows::Forms::Button());
			this->ButtonYellow = (gcnew System::Windows::Forms::Button());
			this->ButtonOrange = (gcnew System::Windows::Forms::Button());
			this->ButtonRed = (gcnew System::Windows::Forms::Button());
			this->InnerLeftGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->comboBoxInstruments = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBoxInstrument = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCanvas = (gcnew System::Windows::Forms::PictureBox());
			this->radioButtonSquare = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCircle = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLine = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTriangle = (gcnew System::Windows::Forms::RadioButton());
			this->labelShape = (gcnew System::Windows::Forms::Label());
			this->TopMenuStrip->SuspendLayout();
			this->OuterGroupBox->SuspendLayout();
			this->InnerCentralGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->BeginInit();
			this->InnerRightGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPalette))->BeginInit();
			this->InnerLeftGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInstrument))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCanvas))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// TopMenuStrip
			// 
			this->TopMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->canvasToolStripMenuItem,
					this->soundModeToolStripMenuItem
			});
			this->TopMenuStrip->Location = System::Drawing::Point(0, 0);
			this->TopMenuStrip->Name = L"TopMenuStrip";
			this->TopMenuStrip->Size = System::Drawing::Size(1010, 24);
			this->TopMenuStrip->TabIndex = 0;
			// 
			// canvasToolStripMenuItem
			// 
			this->canvasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->createToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->openFileToolStripMenuItem, this->clearCanvasToolStripMenuItem
			});
			this->canvasToolStripMenuItem->Name = L"canvasToolStripMenuItem";
			this->canvasToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->canvasToolStripMenuItem->Text = L"Canvas";
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->createToolStripMenuItem->Text = L"Create canvas";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->openFileToolStripMenuItem->Text = L"Open file";
			// 
			// clearCanvasToolStripMenuItem
			// 
			this->clearCanvasToolStripMenuItem->Name = L"clearCanvasToolStripMenuItem";
			this->clearCanvasToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->clearCanvasToolStripMenuItem->Text = L"Clear canvas";
			// 
			// soundModeToolStripMenuItem
			// 
			this->soundModeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->freeToolStripMenuItem,
					this->stepsToolStripMenuItem
			});
			this->soundModeToolStripMenuItem->Name = L"soundModeToolStripMenuItem";
			this->soundModeToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->soundModeToolStripMenuItem->Text = L"Sound mode";
			// 
			// freeToolStripMenuItem
			// 
			this->freeToolStripMenuItem->Name = L"freeToolStripMenuItem";
			this->freeToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->freeToolStripMenuItem->Text = L"Free";
			// 
			// stepsToolStripMenuItem
			// 
			this->stepsToolStripMenuItem->Name = L"stepsToolStripMenuItem";
			this->stepsToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->stepsToolStripMenuItem->Text = L"Steps";
			// 
			// OuterGroupBox
			// 
			this->OuterGroupBox->Controls->Add(this->InnerCentralGroupBox);
			this->OuterGroupBox->Controls->Add(this->InnerRightGroupBox);
			this->OuterGroupBox->Controls->Add(this->InnerLeftGroupBox);
			this->OuterGroupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->OuterGroupBox->Location = System::Drawing::Point(0, 24);
			this->OuterGroupBox->Name = L"OuterGroupBox";
			this->OuterGroupBox->Size = System::Drawing::Size(1010, 121);
			this->OuterGroupBox->TabIndex = 1;
			this->OuterGroupBox->TabStop = false;
			// 
			// InnerCentralGroupBox
			// 
			this->InnerCentralGroupBox->Controls->Add(this->splitContainer1);
			this->InnerCentralGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InnerCentralGroupBox->Location = System::Drawing::Point(203, 16);
			this->InnerCentralGroupBox->Name = L"InnerCentralGroupBox";
			this->InnerCentralGroupBox->Size = System::Drawing::Size(454, 102);
			this->InnerCentralGroupBox->TabIndex = 2;
			this->InnerCentralGroupBox->TabStop = false;
			this->InnerCentralGroupBox->Text = L"Brush / Shapes";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 16);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->labelMode);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonErase);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonDraw);
			this->splitContainer1->Panel1->Controls->Add(this->labelBrushSize);
			this->splitContainer1->Panel1->Controls->Add(this->numericUpDownBrushSize);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->labelShape);
			this->splitContainer1->Panel2->Controls->Add(this->radioButtonTriangle);
			this->splitContainer1->Panel2->Controls->Add(this->radioButtonLine);
			this->splitContainer1->Panel2->Controls->Add(this->radioButtonCircle);
			this->splitContainer1->Panel2->Controls->Add(this->radioButtonSquare);
			this->splitContainer1->Panel2->Controls->Add(this->labelWidth);
			this->splitContainer1->Panel2->Controls->Add(this->labelLength);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDownWidth);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDownLength);
			this->splitContainer1->Size = System::Drawing::Size(448, 83);
			this->splitContainer1->SplitterDistance = 184;
			this->splitContainer1->TabIndex = 0;
			// 
			// labelMode
			// 
			this->labelMode->AutoSize = true;
			this->labelMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelMode->Location = System::Drawing::Point(44, 29);
			this->labelMode->Name = L"labelMode";
			this->labelMode->Size = System::Drawing::Size(43, 15);
			this->labelMode->TabIndex = 4;
			this->labelMode->Text = L"Mode";
			this->labelMode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButtonErase
			// 
			this->radioButtonErase->AutoSize = true;
			this->radioButtonErase->Location = System::Drawing::Point(93, 53);
			this->radioButtonErase->Name = L"radioButtonErase";
			this->radioButtonErase->Size = System::Drawing::Size(52, 17);
			this->radioButtonErase->TabIndex = 3;
			this->radioButtonErase->TabStop = true;
			this->radioButtonErase->Text = L"Erase";
			this->radioButtonErase->UseVisualStyleBackColor = true;
			// 
			// radioButtonDraw
			// 
			this->radioButtonDraw->AutoSize = true;
			this->radioButtonDraw->Location = System::Drawing::Point(93, 29);
			this->radioButtonDraw->Name = L"radioButtonDraw";
			this->radioButtonDraw->Size = System::Drawing::Size(50, 17);
			this->radioButtonDraw->TabIndex = 2;
			this->radioButtonDraw->TabStop = true;
			this->radioButtonDraw->Text = L"Draw";
			this->radioButtonDraw->UseVisualStyleBackColor = true;
			// 
			// labelBrushSize
			// 
			this->labelBrushSize->AutoSize = true;
			this->labelBrushSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelBrushSize->Location = System::Drawing::Point(13, 4);
			this->labelBrushSize->Name = L"labelBrushSize";
			this->labelBrushSize->Size = System::Drawing::Size(74, 15);
			this->labelBrushSize->TabIndex = 1;
			this->labelBrushSize->Text = L"Brush size";
			this->labelBrushSize->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownBrushSize
			// 
			this->numericUpDownBrushSize->Location = System::Drawing::Point(93, 3);
			this->numericUpDownBrushSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownBrushSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownBrushSize->Name = L"numericUpDownBrushSize";
			this->numericUpDownBrushSize->Size = System::Drawing::Size(87, 20);
			this->numericUpDownBrushSize->TabIndex = 0;
			this->numericUpDownBrushSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// labelWidth
			// 
			this->labelWidth->AutoSize = true;
			this->labelWidth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelWidth->Location = System::Drawing::Point(151, 29);
			this->labelWidth->Name = L"labelWidth";
			this->labelWidth->Size = System::Drawing::Size(43, 15);
			this->labelWidth->TabIndex = 6;
			this->labelWidth->Text = L"Width";
			this->labelWidth->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLength
			// 
			this->labelLength->AutoSize = true;
			this->labelLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelLength->Location = System::Drawing::Point(143, 4);
			this->labelLength->Name = L"labelLength";
			this->labelLength->Size = System::Drawing::Size(51, 15);
			this->labelLength->TabIndex = 5;
			this->labelLength->Text = L"Length";
			this->labelLength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownWidth
			// 
			this->numericUpDownWidth->Location = System::Drawing::Point(200, 29);
			this->numericUpDownWidth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidth->Name = L"numericUpDownWidth";
			this->numericUpDownWidth->Size = System::Drawing::Size(57, 20);
			this->numericUpDownWidth->TabIndex = 4;
			this->numericUpDownWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownLength
			// 
			this->numericUpDownLength->Location = System::Drawing::Point(200, 4);
			this->numericUpDownLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownLength->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownLength->Name = L"numericUpDownLength";
			this->numericUpDownLength->Size = System::Drawing::Size(57, 20);
			this->numericUpDownLength->TabIndex = 3;
			this->numericUpDownLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InnerRightGroupBox
			// 
			this->InnerRightGroupBox->Controls->Add(this->splitContainer2);
			this->InnerRightGroupBox->Dock = System::Windows::Forms::DockStyle::Right;
			this->InnerRightGroupBox->Location = System::Drawing::Point(657, 16);
			this->InnerRightGroupBox->Name = L"InnerRightGroupBox";
			this->InnerRightGroupBox->Size = System::Drawing::Size(350, 102);
			this->InnerRightGroupBox->TabIndex = 1;
			this->InnerRightGroupBox->TabStop = false;
			this->InnerRightGroupBox->Text = L"Palette";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 16);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->pictureBoxPalette);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->ButtonPurple);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonBlue);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonCyan);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonGreen);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonYellow);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonOrange);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonRed);
			this->splitContainer2->Size = System::Drawing::Size(344, 83);
			this->splitContainer2->SplitterDistance = 83;
			this->splitContainer2->TabIndex = 0;
			// 
			// pictureBoxPalette
			// 
			this->pictureBoxPalette->Location = System::Drawing::Point(3, 4);
			this->pictureBoxPalette->Name = L"pictureBoxPalette";
			this->pictureBoxPalette->Size = System::Drawing::Size(77, 79);
			this->pictureBoxPalette->TabIndex = 0;
			this->pictureBoxPalette->TabStop = false;
			// 
			// ButtonPurple
			// 
			this->ButtonPurple->BackColor = System::Drawing::Color::Purple;
			this->ButtonPurple->Location = System::Drawing::Point(220, 4);
			this->ButtonPurple->Name = L"ButtonPurple";
			this->ButtonPurple->Size = System::Drawing::Size(30, 30);
			this->ButtonPurple->TabIndex = 6;
			this->ButtonPurple->UseVisualStyleBackColor = false;
			// 
			// ButtonBlue
			// 
			this->ButtonBlue->BackColor = System::Drawing::Color::Blue;
			this->ButtonBlue->Location = System::Drawing::Point(184, 4);
			this->ButtonBlue->Name = L"ButtonBlue";
			this->ButtonBlue->Size = System::Drawing::Size(30, 30);
			this->ButtonBlue->TabIndex = 5;
			this->ButtonBlue->UseVisualStyleBackColor = false;
			// 
			// ButtonCyan
			// 
			this->ButtonCyan->BackColor = System::Drawing::Color::Cyan;
			this->ButtonCyan->Location = System::Drawing::Point(148, 4);
			this->ButtonCyan->Name = L"ButtonCyan";
			this->ButtonCyan->Size = System::Drawing::Size(30, 30);
			this->ButtonCyan->TabIndex = 4;
			this->ButtonCyan->UseVisualStyleBackColor = false;
			// 
			// ButtonGreen
			// 
			this->ButtonGreen->BackColor = System::Drawing::Color::Lime;
			this->ButtonGreen->Location = System::Drawing::Point(112, 4);
			this->ButtonGreen->Name = L"ButtonGreen";
			this->ButtonGreen->Size = System::Drawing::Size(30, 30);
			this->ButtonGreen->TabIndex = 3;
			this->ButtonGreen->UseVisualStyleBackColor = false;
			// 
			// ButtonYellow
			// 
			this->ButtonYellow->BackColor = System::Drawing::Color::Yellow;
			this->ButtonYellow->Location = System::Drawing::Point(76, 4);
			this->ButtonYellow->Name = L"ButtonYellow";
			this->ButtonYellow->Size = System::Drawing::Size(30, 30);
			this->ButtonYellow->TabIndex = 2;
			this->ButtonYellow->UseVisualStyleBackColor = false;
			// 
			// ButtonOrange
			// 
			this->ButtonOrange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ButtonOrange->Location = System::Drawing::Point(40, 4);
			this->ButtonOrange->Name = L"ButtonOrange";
			this->ButtonOrange->Size = System::Drawing::Size(30, 30);
			this->ButtonOrange->TabIndex = 1;
			this->ButtonOrange->UseVisualStyleBackColor = false;
			// 
			// ButtonRed
			// 
			this->ButtonRed->BackColor = System::Drawing::Color::Red;
			this->ButtonRed->Location = System::Drawing::Point(4, 4);
			this->ButtonRed->Name = L"ButtonRed";
			this->ButtonRed->Size = System::Drawing::Size(30, 30);
			this->ButtonRed->TabIndex = 0;
			this->ButtonRed->UseVisualStyleBackColor = false;
			// 
			// InnerLeftGroupBox
			// 
			this->InnerLeftGroupBox->Controls->Add(this->splitContainer3);
			this->InnerLeftGroupBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->InnerLeftGroupBox->Location = System::Drawing::Point(3, 16);
			this->InnerLeftGroupBox->Name = L"InnerLeftGroupBox";
			this->InnerLeftGroupBox->Size = System::Drawing::Size(200, 102);
			this->InnerLeftGroupBox->TabIndex = 0;
			this->InnerLeftGroupBox->TabStop = false;
			this->InnerLeftGroupBox->Text = L"Musical Instrument";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 16);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->comboBoxInstruments);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->pictureBoxInstrument);
			this->splitContainer3->Size = System::Drawing::Size(194, 83);
			this->splitContainer3->SplitterDistance = 28;
			this->splitContainer3->TabIndex = 0;
			// 
			// comboBoxInstruments
			// 
			this->comboBoxInstruments->FormattingEnabled = true;
			this->comboBoxInstruments->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Marimba", L"Piano", L"String", L"WoodWind",
					L"Nature"
			});
			this->comboBoxInstruments->Location = System::Drawing::Point(7, 4);
			this->comboBoxInstruments->Name = L"comboBoxInstruments";
			this->comboBoxInstruments->Size = System::Drawing::Size(184, 21);
			this->comboBoxInstruments->TabIndex = 0;
			// 
			// pictureBoxInstrument
			// 
			this->pictureBoxInstrument->Location = System::Drawing::Point(7, 4);
			this->pictureBoxInstrument->Name = L"pictureBoxInstrument";
			this->pictureBoxInstrument->Size = System::Drawing::Size(184, 47);
			this->pictureBoxInstrument->TabIndex = 0;
			this->pictureBoxInstrument->TabStop = false;
			// 
			// pictureBoxCanvas
			// 
			this->pictureBoxCanvas->Location = System::Drawing::Point(3, 152);
			this->pictureBoxCanvas->Name = L"pictureBoxCanvas";
			this->pictureBoxCanvas->Size = System::Drawing::Size(1004, 384);
			this->pictureBoxCanvas->TabIndex = 2;
			this->pictureBoxCanvas->TabStop = false;
			// 
			// radioButtonSquare
			// 
			this->radioButtonSquare->AutoSize = true;
			this->radioButtonSquare->Location = System::Drawing::Point(3, 29);
			this->radioButtonSquare->Name = L"radioButtonSquare";
			this->radioButtonSquare->Size = System::Drawing::Size(59, 17);
			this->radioButtonSquare->TabIndex = 7;
			this->radioButtonSquare->TabStop = true;
			this->radioButtonSquare->Text = L"Square";
			this->radioButtonSquare->UseVisualStyleBackColor = true;
			// 
			// radioButtonCircle
			// 
			this->radioButtonCircle->AutoSize = true;
			this->radioButtonCircle->Location = System::Drawing::Point(3, 53);
			this->radioButtonCircle->Name = L"radioButtonCircle";
			this->radioButtonCircle->Size = System::Drawing::Size(51, 17);
			this->radioButtonCircle->TabIndex = 8;
			this->radioButtonCircle->TabStop = true;
			this->radioButtonCircle->Text = L"Circle";
			this->radioButtonCircle->UseVisualStyleBackColor = true;
			// 
			// radioButtonLine
			// 
			this->radioButtonLine->AutoSize = true;
			this->radioButtonLine->Location = System::Drawing::Point(68, 29);
			this->radioButtonLine->Name = L"radioButtonLine";
			this->radioButtonLine->Size = System::Drawing::Size(45, 17);
			this->radioButtonLine->TabIndex = 9;
			this->radioButtonLine->TabStop = true;
			this->radioButtonLine->Text = L"Line";
			this->radioButtonLine->UseVisualStyleBackColor = true;
			// 
			// radioButtonTriangle
			// 
			this->radioButtonTriangle->AutoSize = true;
			this->radioButtonTriangle->Location = System::Drawing::Point(68, 53);
			this->radioButtonTriangle->Name = L"radioButtonTriangle";
			this->radioButtonTriangle->Size = System::Drawing::Size(63, 17);
			this->radioButtonTriangle->TabIndex = 10;
			this->radioButtonTriangle->TabStop = true;
			this->radioButtonTriangle->Text = L"Triangle";
			this->radioButtonTriangle->UseVisualStyleBackColor = true;
			// 
			// labelShape
			// 
			this->labelShape->AutoSize = true;
			this->labelShape->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelShape->Location = System::Drawing::Point(3, 5);
			this->labelShape->Name = L"labelShape";
			this->labelShape->Size = System::Drawing::Size(48, 15);
			this->labelShape->TabIndex = 5;
			this->labelShape->Text = L"Shape";
			this->labelShape->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PaintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1010, 538);
			this->Controls->Add(this->pictureBoxCanvas);
			this->Controls->Add(this->OuterGroupBox);
			this->Controls->Add(this->TopMenuStrip);
			this->MainMenuStrip = this->TopMenuStrip;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PaintForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &PaintForm::MyForm_Load);
			this->TopMenuStrip->ResumeLayout(false);
			this->TopMenuStrip->PerformLayout();
			this->OuterGroupBox->ResumeLayout(false);
			this->InnerCentralGroupBox->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->EndInit();
			this->InnerRightGroupBox->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPalette))->EndInit();
			this->InnerLeftGroupBox->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInstrument))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCanvas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
