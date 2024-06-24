#pragma once

namespace Practica2sem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar3;

	private: System::Windows::Forms::TrackBar^ trackBar2;
	protected:


	private: System::Windows::Forms::TrackBar^ trackBar4;









	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: cli::array<cli::array<PictureBox^>^>^ Field;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(1785, 44);
			this->trackBar1->Margin = System::Windows::Forms::Padding(0);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(339, 69);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TabStop = false;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 25;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBar1_ValueChanged);
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(1785, 260);
			this->trackBar3->Margin = System::Windows::Forms::Padding(0);
			this->trackBar3->Maximum = 14;
			this->trackBar3->Minimum = 1;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(339, 69);
			this->trackBar3->TabIndex = 1;
			this->trackBar3->TabStop = false;
			this->trackBar3->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar3->Value = 8;
			this->trackBar3->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBar3_ValueChanged);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(1785, 148);
			this->trackBar2->Margin = System::Windows::Forms::Padding(0);
			this->trackBar2->Maximum = 14;
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(339, 69);
			this->trackBar2->TabIndex = 2;
			this->trackBar2->TabStop = false;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar2->Value = 7;
			this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBar2_ValueChanged);
			// 
			// trackBar4
			// 
			this->trackBar4->Location = System::Drawing::Point(1785, 364);
			this->trackBar4->Maximum = 50;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(339, 69);
			this->trackBar4->TabIndex = 3;
			this->trackBar4->TabStop = false;
			this->trackBar4->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar4->Value = 15;
			this->trackBar4->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBar4_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Location = System::Drawing::Point(2043, 329);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 32);
			this->label4->TabIndex = 13;
			this->label4->Text = L"0,00";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label3->Location = System::Drawing::Point(2043, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 32);
			this->label3->TabIndex = 14;
			this->label3->Text = L"0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Location = System::Drawing::Point(2043, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 32);
			this->label2->TabIndex = 15;
			this->label2->Text = L"1";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(2043, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 32);
			this->label1->TabIndex = 16;
			this->label1->Text = L"0,00";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::Window;
			this->label7->Location = System::Drawing::Point(1715, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(319, 29);
			this->label7->TabIndex = 17;
			this->label7->Text = L"¬еро€тность заражени€:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::Window;
			this->label8->Location = System::Drawing::Point(1715, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(314, 29);
			this->label8->TabIndex = 18;
			this->label8->Text = L"»нкубационный период:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(1715, 217);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(263, 29);
			this->label9->TabIndex = 19;
			this->label9->Text = L"¬рем€ заболевани€:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::Window;
			this->label10->Location = System::Drawing::Point(1715, 329);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(287, 29);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Ћетальность болезни:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(2136, 1082);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->trackBar1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ёпидеми€";
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MainForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		int size = 11;
		int listsize = 51;
		cli::array<PictureBox^, 2>^ Field = gcnew cli::array<PictureBox^, 2>(100,100);
		label4->Text = System::Convert::ToString(trackBar4->Value / 100.0);
		label3->Text = System::Convert::ToString(trackBar3->Value);
		label2->Text = System::Convert::ToString(trackBar2->Value);
		label1->Text = System::Convert::ToString(trackBar1->Value / 100.0);
		for (int i = 0; i<listsize; i++)
			for (int j = 0; j < listsize; j++)
			{
				Field[i,j] = gcnew PictureBox();
				Field[i,j]->Location = Point(200 + ((j*1.15)*size), 25 + ((i*1.15)*size));
				Field[i,j]->BackColor = Color::White;
				Field[i,j]->Width = size;
				Field[i,j]->Height = size;
				this->Controls->Add(Field[i,j]);
			}
	}
private: System::Void trackBar4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = System::Convert::ToString(trackBar4->Value / 100.0);
}
private: System::Void trackBar3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = System::Convert::ToString(trackBar3->Value);
}
private: System::Void trackBar2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	label2->Text = System::Convert::ToString(trackBar2->Value);
}
private: System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = System::Convert::ToString(trackBar1->Value / 100.0);
}
};
}
