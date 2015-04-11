#pragma once
#include "Login.h"
#include "Encrypt.h"
#include <string>
using namespace std; 

namespace Tester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditTestSettingForm
	/// </summary>
	public ref class EditTestSettingForm : public System::Windows::Forms::Form
	{
	public:
		Login *login;
		EditTestSettingForm(void)
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
		~EditTestSettingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  timeBox;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  loginText;


	private: System::Windows::Forms::TextBox^  passText;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  applyBtn;
	private: System::Windows::Forms::Button^  saveBtn;


	protected: 


















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditTestSettingForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->applyBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timeBox = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->loginText = (gcnew System::Windows::Forms::TextBox());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(476, 236);
			this->tabControl1->TabIndex = 16;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->applyBtn);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(468, 210);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"��������� �����";
			// 
			// applyBtn
			// 
			this->applyBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"applyBtn.Image")));
			this->applyBtn->Location = System::Drawing::Point(326, 166);
			this->applyBtn->Name = L"applyBtn";
			this->applyBtn->Size = System::Drawing::Size(121, 36);
			this->applyBtn->TabIndex = 17;
			this->applyBtn->Text = L"��������";
			this->applyBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->applyBtn->UseVisualStyleBackColor = true;
			this->applyBtn->Click += gcnew System::EventHandler(this, &EditTestSettingForm::applyBtn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->timeBox);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(462, 157);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(301, 59);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(143, 26);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"����� �����";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(126, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(318, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"���� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ʳ������ ���� �� ��������� �������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"��� �� ��������� �����";
			// 
			// timeBox
			// 
			this->timeBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->timeBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->timeBox->FormattingEnabled = true;
			this->timeBox->ImeMode = System::Windows::Forms::ImeMode::On;
			this->timeBox->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"3", L"5", L"10", L"15", L"20", L"25", L"30"});
			this->timeBox->Location = System::Drawing::Point(205, 21);
			this->timeBox->Name = L"timeBox";
			this->timeBox->Size = System::Drawing::Size(143, 27);
			this->timeBox->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->saveBtn);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(468, 210);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"���� ������";
			// 
			// saveBtn
			// 
			this->saveBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveBtn.Image")));
			this->saveBtn->Location = System::Drawing::Point(339, 166);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(121, 36);
			this->saveBtn->TabIndex = 18;
			this->saveBtn->Text = L"��������";
			this->saveBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &EditTestSettingForm::saveBtn_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->loginText);
			this->groupBox2->Controls->Add(this->passText);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(8, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(452, 100);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			// 
			// loginText
			// 
			this->loginText->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->loginText->Location = System::Drawing::Point(96, 23);
			this->loginText->Name = L"loginText";
			this->loginText->Size = System::Drawing::Size(218, 26);
			this->loginText->TabIndex = 5;
			this->loginText->Text = L"Test";
			// 
			// passText
			// 
			this->passText->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->passText->Location = System::Drawing::Point(96, 68);
			this->passText->Name = L"passText";
			this->passText->Size = System::Drawing::Size(218, 26);
			this->passText->TabIndex = 4;
			this->passText->Text = L"Test";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(13, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 19);
			this->label5->TabIndex = 1;
			this->label5->Text = L"������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 19);
			this->label4->TabIndex = 0;
			this->label4->Text = L"����";
			// 
			// EditTestSettingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 236);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"EditTestSettingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������������";
			this->Load += gcnew System::EventHandler(this, &EditTestSettingForm::EditTestSettingForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

String^ stringToString(string str)
{
	String^ str2 = gcnew String(str.c_str());
	return str2;
}

private: System::Void EditTestSettingForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->timeBox->SelectedIndex = 0;
			 login = new Login();
			 login->setInFile();
			
			 this->loginText->Text = stringToString(login->getLogin());
			 this->passText->Text = stringToString(login->getPassword());
}

void MarshalString (String ^ s, string& os )
{
	//convert String to string
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

private: System::Void applyBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		 string strTmp;
		 String^ str;
		
		 
		 str = this->loginText->Text;
		 MarshalString(str, strTmp);
		 login->setLogin(strTmp);
		 MessageBox::Show(stringToString(strTmp));
		 str = this->passText->Text;
		 MarshalString(str, strTmp);
		 login->setPassword(strTmp);
		 MessageBox::Show(stringToString(strTmp));
		 login->saveInFile();
		 Close();
		 }
};
}
