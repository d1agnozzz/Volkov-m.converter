#pragma once
#include <string>
#include <sstream>

namespace MoneyConverter {

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tBrate;

	private: System::Windows::Forms::TextBox^  tBsum;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  rBtnRtoD;

	private: System::Windows::Forms::RadioButton^  rBtnDtoR;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  lbl_out;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lbl_in;
	private: System::Windows::Forms::TextBox^  tBans;
	private: System::Windows::Forms::TextBox^  tBin;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  lblComm;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tBrate = (gcnew System::Windows::Forms::TextBox());
			this->tBsum = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rBtnRtoD = (gcnew System::Windows::Forms::RadioButton());
			this->rBtnDtoR = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_out = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_in = (gcnew System::Windows::Forms::Label());
			this->tBans = (gcnew System::Windows::Forms::TextBox());
			this->tBin = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblComm = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tBrate);
			this->groupBox1->Controls->Add(this->tBsum);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox1->Location = System::Drawing::Point(8, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(245, 77);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные Данные";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Курс обмена (₽/$):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(6, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сумма для конвертации:";
			// 
			// tBrate
			// 
			this->tBrate->Location = System::Drawing::Point(155, 43);
			this->tBrate->Name = L"tBrate";
			this->tBrate->Size = System::Drawing::Size(83, 22);
			this->tBrate->TabIndex = 1;
			this->tBrate->Text = L"0";
			this->tBrate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tBsum
			// 
			this->tBsum->Location = System::Drawing::Point(155, 17);
			this->tBsum->Name = L"tBsum";
			this->tBsum->Size = System::Drawing::Size(83, 22);
			this->tBsum->TabIndex = 0;
			this->tBsum->Text = L"0";
			this->tBsum->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rBtnRtoD);
			this->groupBox2->Controls->Add(this->rBtnDtoR);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox2->Location = System::Drawing::Point(262, 8);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(172, 77);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Направление конвертации";
			// 
			// rBtnRtoD
			// 
			this->rBtnRtoD->AutoSize = true;
			this->rBtnRtoD->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rBtnRtoD->Location = System::Drawing::Point(6, 45);
			this->rBtnRtoD->Name = L"rBtnRtoD";
			this->rBtnRtoD->Size = System::Drawing::Size(120, 20);
			this->rBtnRtoD->TabIndex = 1;
			this->rBtnRtoD->Text = L"Рубли в Доллары";
			this->rBtnRtoD->UseVisualStyleBackColor = true;
			this->rBtnRtoD->CheckedChanged += gcnew System::EventHandler(this, &Form1::rBtnRtoD_CheckedChanged);
			// 
			// rBtnDtoR
			// 
			this->rBtnDtoR->AutoSize = true;
			this->rBtnDtoR->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rBtnDtoR->Location = System::Drawing::Point(6, 19);
			this->rBtnDtoR->Name = L"rBtnDtoR";
			this->rBtnDtoR->Size = System::Drawing::Size(120, 20);
			this->rBtnDtoR->TabIndex = 0;
			this->rBtnDtoR->Text = L"Доллары в Рубли";
			this->rBtnDtoR->UseVisualStyleBackColor = true;
			this->rBtnDtoR->CheckedChanged += gcnew System::EventHandler(this, &Form1::rBtnDtoR_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lbl_out);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->lbl_in);
			this->groupBox3->Controls->Add(this->tBans);
			this->groupBox3->Controls->Add(this->tBin);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox3->Location = System::Drawing::Point(10, 86);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(242, 56);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Результат конвертации";
			// 
			// lbl_out
			// 
			this->lbl_out->AutoSize = true;
			this->lbl_out->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_out->Location = System::Drawing::Point(222, 26);
			this->lbl_out->Name = L"lbl_out";
			this->lbl_out->Size = System::Drawing::Size(0, 16);
			this->lbl_out->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(126, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 16);
			this->label4->TabIndex = 2;
			this->label4->Text = L"=";
			// 
			// lbl_in
			// 
			this->lbl_in->AutoSize = true;
			this->lbl_in->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_in->Location = System::Drawing::Point(88, 26);
			this->lbl_in->Name = L"lbl_in";
			this->lbl_in->Size = System::Drawing::Size(0, 16);
			this->lbl_in->TabIndex = 1;
			// 
			// tBans
			// 
			this->tBans->Location = System::Drawing::Point(147, 23);
			this->tBans->Name = L"tBans";
			this->tBans->Size = System::Drawing::Size(69, 22);
			this->tBans->TabIndex = 0;
			// 
			// tBin
			// 
			this->tBin->Location = System::Drawing::Point(13, 23);
			this->tBin->Name = L"tBin";
			this->tBin->Size = System::Drawing::Size(69, 22);
			this->tBin->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(262, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 22);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Конвертировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(368, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 22);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// lblComm
			// 
			this->lblComm->AutoSize = true;
			this->lblComm->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lblComm->ForeColor = System::Drawing::Color::Maroon;
			this->lblComm->Location = System::Drawing::Point(253, 98);
			this->lblComm->Name = L"lblComm";
			this->lblComm->Size = System::Drawing::Size(0, 16);
			this->lblComm->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 148);
			this->Controls->Add(this->lblComm);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


void twoDig(float x, int y) {
	std::string strnum;
	float b = int(x*100 +0.5) / 100.00;
	std::ostringstream strs;
		strs << b;
		strnum = strs.str();
		if (strnum.find(",") == -1) {
			strnum += ",00";
		}
		else if (strnum.rfing("," == 1) {
			strnum += "0";
		}
		String^ str2 = gcnew String(strnum.c_str());
	if (y == 0) {
		//tBin->Text = Convert::ToString(b);
		
		this->tBin->Text = str2;

		
	}
	if (y == 1) {
		//tBans->Text = Convert::ToString(b);
		this->tBans->Text = str2;
	}
}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 float sum, rate, ans;
				 sum = Convert::ToSingle(tBsum->Text);
				 rate = Convert::ToSingle(tBrate->Text);
				 

				 if (Convert::ToSingle(tBsum->Text) <= 0||Convert::ToSingle(tBrate->Text)<=0) {
					 lblComm->Text = "Введены неверные исходные данные!";
				 }

				 else {
					 lblComm->Text = "";
					 twoDig(sum, 0);

					 if (rBtnDtoR->Checked == 1) {
					 //tBin->Text = Convert::ToString(sum);
					 ans = sum * rate;
					 //tBans->Text = Convert::ToString(ans);
					 //twoDig(ans, 1)
				 }
					else if (rBtnRtoD->Checked == 1) {
						//tBin->Text = Convert::ToString(sum);
						ans = sum / rate;
						//tBans->Text = Convert::ToString(ans);
				 }
					twoDig(ans, 1);
				 }
			 }
private: System::Void rBtnDtoR_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tBin->Text = "";
			 tBans->Text = "";
			 lbl_in->Text = L"$";
			 lbl_out->Text = L"₽";
		 }
private: System::Void rBtnRtoD_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tBin->Text = "";
			 tBans->Text = "";
			 lbl_in->Text = L"₽";
			 lbl_out->Text = L"$";
		 }
};
}

