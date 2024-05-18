#pragma once

namespace Risovalka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ менюЭлементовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ свободныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ступенькиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox4;







	protected:

	protected:















	protected:




	protected:

	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->менюЭлементовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->свободныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ступенькиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->действияToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->оПрограммеToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1280, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->создатьToolStripMenuItem,
					this->сохранитьКакToolStripMenuItem, this->менюЭлементовToolStripMenuItem
			});
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->действияToolStripMenuItem->Text = L"Холст";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->свободныйToolStripMenuItem,
					this->ступенькиToolStripMenuItem
			});
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(90, 20);
			this->оПрограммеToolStripMenuItem->Text = L"Режим цвета";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			// 
			// менюЭлементовToolStripMenuItem
			// 
			this->менюЭлементовToolStripMenuItem->Name = L"менюЭлементовToolStripMenuItem";
			this->менюЭлементовToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->менюЭлементовToolStripMenuItem->Text = L"Меню элементов";
			// 
			// свободныйToolStripMenuItem
			// 
			this->свободныйToolStripMenuItem->Name = L"свободныйToolStripMenuItem";
			this->свободныйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->свободныйToolStripMenuItem->Text = L"Свободный";
			// 
			// ступенькиToolStripMenuItem
			// 
			this->ступенькиToolStripMenuItem->Name = L"ступенькиToolStripMenuItem";
			this->ступенькиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ступенькиToolStripMenuItem->Text = L"Ступенчатый";
			// 
			// оПрограммеToolStripMenuItem1
			// 
			this->оПрограммеToolStripMenuItem1->Name = L"оПрограммеToolStripMenuItem1";
			this->оПрограммеToolStripMenuItem1->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem1->Text = L"О программе";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(0, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1280, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->Location = System::Drawing::Point(3, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(425, 75);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Музыкальный инструмент";
			// 
			// groupBox3
			// 
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox3->Location = System::Drawing::Point(852, 22);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(425, 75);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Палитра";
			// 
			// groupBox4
			// 
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Location = System::Drawing::Point(428, 22);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(849, 75);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Кисть / Фигура";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion











};
}
