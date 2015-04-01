#pragma once
#include <iostream>
#include <string>
#include "Question.h"
#include "EditTestSettingForm.h"
#include "Test.h"
using namespace std;

namespace Tester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditTestForm
	/// </summary>
	public ref class EditTestForm : public System::Windows::Forms::Form
	{
	public:
		int countQuestion;
		int prewIndexQuestion;

	public: 
		Test *test;
	private: System::Windows::Forms::Label^  countQestionLbl;
	private: System::Windows::Forms::Label^  ballAnswerLbl;

	private: System::Windows::Forms::Label^  authorLbl;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  anwerLbl;
	public: 
		Question *quest;

		EditTestForm(void)
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
		~EditTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^  infoBtn;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::Button^  openBtn;
	private: System::Windows::Forms::Button^  newBtn;




	private: System::Windows::Forms::Button^  closeBtn;
	private: System::Windows::Forms::Button^  rezultBtn;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RichTextBox^  questionText;


	private: System::Windows::Forms::GroupBox^  groupBox4;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  delBtn;

	private: System::Windows::Forms::Button^  addBtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  answerTextA;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  answerTextB;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  answerTextD;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  answerTextC;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ComboBox^  countAnswerBox;




	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ComboBox^  correctAnswerBox;




	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ListBox^  navigateList;
	private: System::Windows::Forms::Button^  settingBtn;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditTestForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->settingBtn = (gcnew System::Windows::Forms::Button());
			this->rezultBtn = (gcnew System::Windows::Forms::Button());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->infoBtn = (gcnew System::Windows::Forms::Button());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->openBtn = (gcnew System::Windows::Forms::Button());
			this->newBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->navigateList = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->delBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->ballAnswerLbl = (gcnew System::Windows::Forms::Label());
			this->authorLbl = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->anwerLbl = (gcnew System::Windows::Forms::Label());
			this->countQestionLbl = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->questionText = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->correctAnswerBox = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->countAnswerBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->answerTextD = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->answerTextC = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->answerTextB = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->answerTextA = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->settingBtn);
			this->panel1->Controls->Add(this->rezultBtn);
			this->panel1->Controls->Add(this->closeBtn);
			this->panel1->Controls->Add(this->infoBtn);
			this->panel1->Controls->Add(this->saveBtn);
			this->panel1->Controls->Add(this->openBtn);
			this->panel1->Controls->Add(this->newBtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1039, 75);
			this->panel1->TabIndex = 0;
			// 
			// settingBtn
			// 
			this->settingBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"settingBtn.Image")));
			this->settingBtn->Location = System::Drawing::Point(431, 2);
			this->settingBtn->Name = L"settingBtn";
			this->settingBtn->Size = System::Drawing::Size(130, 69);
			this->settingBtn->TabIndex = 6;
			this->settingBtn->Text = L"������������";
			this->settingBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->settingBtn->UseVisualStyleBackColor = true;
			this->settingBtn->Click += gcnew System::EventHandler(this, &EditTestForm::settingBtn_Click);
			// 
			// rezultBtn
			// 
			this->rezultBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rezultBtn.Image")));
			this->rezultBtn->Location = System::Drawing::Point(315, 2);
			this->rezultBtn->Name = L"rezultBtn";
			this->rezultBtn->Size = System::Drawing::Size(110, 69);
			this->rezultBtn->TabIndex = 5;
			this->rezultBtn->Text = L"����������";
			this->rezultBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->rezultBtn->UseVisualStyleBackColor = true;
			// 
			// closeBtn
			// 
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(671, 2);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(98, 69);
			this->closeBtn->TabIndex = 4;
			this->closeBtn->Text = L"�����";
			this->closeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &EditTestForm::closeBtn_Click);
			// 
			// infoBtn
			// 
			this->infoBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"infoBtn.Image")));
			this->infoBtn->Location = System::Drawing::Point(567, 2);
			this->infoBtn->Name = L"infoBtn";
			this->infoBtn->Size = System::Drawing::Size(98, 69);
			this->infoBtn->TabIndex = 3;
			this->infoBtn->Text = L"������";
			this->infoBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->infoBtn->UseVisualStyleBackColor = true;
			// 
			// saveBtn
			// 
			this->saveBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveBtn.Image")));
			this->saveBtn->Location = System::Drawing::Point(211, 3);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(98, 69);
			this->saveBtn->TabIndex = 2;
			this->saveBtn->Text = L"��������";
			this->saveBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &EditTestForm::saveBtn_Click);
			// 
			// openBtn
			// 
			this->openBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openBtn.Image")));
			this->openBtn->Location = System::Drawing::Point(107, 3);
			this->openBtn->Name = L"openBtn";
			this->openBtn->Size = System::Drawing::Size(98, 69);
			this->openBtn->TabIndex = 1;
			this->openBtn->Text = L"³������";
			this->openBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->openBtn->UseVisualStyleBackColor = true;
			// 
			// newBtn
			// 
			this->newBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newBtn.Image")));
			this->newBtn->Location = System::Drawing::Point(3, 3);
			this->newBtn->Name = L"newBtn";
			this->newBtn->Size = System::Drawing::Size(98, 69);
			this->newBtn->TabIndex = 0;
			this->newBtn->Text = L"��������";
			this->newBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->newBtn->UseVisualStyleBackColor = true;
			this->newBtn->Click += gcnew System::EventHandler(this, &EditTestForm::newBtn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->����ToolStripMenuItem, 
				this->�����������ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1039, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->��������ToolStripMenuItem, 
				this->�������ToolStripMenuItem, this->��������ToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->�������ToolStripMenuItem->Text = L"³������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditTestForm::�����������ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->navigateList);
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(0, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 502);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������";
			// 
			// navigateList
			// 
			this->navigateList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->navigateList->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->navigateList->ItemHeight = 21;
			this->navigateList->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"������� �1"});
			this->navigateList->Location = System::Drawing::Point(3, 62);
			this->navigateList->Name = L"navigateList";
			this->navigateList->Size = System::Drawing::Size(194, 437);
			this->navigateList->TabIndex = 2;
			this->navigateList->SelectedIndexChanged += gcnew System::EventHandler(this, &EditTestForm::navigateList_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->delBtn);
			this->panel2->Controls->Add(this->addBtn);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(3, 16);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(194, 46);
			this->panel2->TabIndex = 1;
			// 
			// delBtn
			// 
			this->delBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->delBtn->Location = System::Drawing::Point(120, 3);
			this->delBtn->Name = L"delBtn";
			this->delBtn->Size = System::Drawing::Size(71, 38);
			this->delBtn->TabIndex = 1;
			this->delBtn->Text = L"��������";
			this->delBtn->UseVisualStyleBackColor = true;
			this->delBtn->Click += gcnew System::EventHandler(this, &EditTestForm::delBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->addBtn->Location = System::Drawing::Point(3, 3);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(77, 38);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"��������";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &EditTestForm::addBtn_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->ballAnswerLbl);
			this->groupBox2->Controls->Add(this->authorLbl);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->anwerLbl);
			this->groupBox2->Controls->Add(this->countQestionLbl);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Location = System::Drawing::Point(839, 99);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 502);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"����������";
			// 
			// ballAnswerLbl
			// 
			this->ballAnswerLbl->AutoSize = true;
			this->ballAnswerLbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ballAnswerLbl->Location = System::Drawing::Point(154, 112);
			this->ballAnswerLbl->Name = L"ballAnswerLbl";
			this->ballAnswerLbl->Size = System::Drawing::Size(22, 26);
			this->ballAnswerLbl->TabIndex = 9;
			this->ballAnswerLbl->Text = L"1";
			// 
			// authorLbl
			// 
			this->authorLbl->AutoSize = true;
			this->authorLbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->authorLbl->Location = System::Drawing::Point(55, 146);
			this->authorLbl->Name = L"authorLbl";
			this->authorLbl->Size = System::Drawing::Size(55, 23);
			this->authorLbl->TabIndex = 8;
			this->authorLbl->Text = L"�����";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 154);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 15);
			this->label9->TabIndex = 7;
			this->label9->Text = L"�����:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 120);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 15);
			this->label8->TabIndex = 6;
			this->label8->Text = L"�-�� ���� �� �������:";
			// 
			// anwerLbl
			// 
			this->anwerLbl->AutoSize = true;
			this->anwerLbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->anwerLbl->Location = System::Drawing::Point(154, 67);
			this->anwerLbl->Name = L"anwerLbl";
			this->anwerLbl->Size = System::Drawing::Size(22, 26);
			this->anwerLbl->TabIndex = 4;
			this->anwerLbl->Text = L"1";
			// 
			// countQestionLbl
			// 
			this->countQestionLbl->AutoSize = true;
			this->countQestionLbl->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->countQestionLbl->Location = System::Drawing::Point(154, 36);
			this->countQestionLbl->Name = L"countQestionLbl";
			this->countQestionLbl->Size = System::Drawing::Size(22, 26);
			this->countQestionLbl->TabIndex = 3;
			this->countQestionLbl->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 15);
			this->label6->TabIndex = 1;
			this->label6->Text = L"������� �������: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"ʳ������ ������: ";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->questionText);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox3->Location = System::Drawing::Point(206, 105);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(627, 209);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"�������";
			// 
			// questionText
			// 
			this->questionText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->questionText->Location = System::Drawing::Point(3, 19);
			this->questionText->Name = L"questionText";
			this->questionText->Size = System::Drawing::Size(618, 184);
			this->questionText->TabIndex = 0;
			this->questionText->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox7);
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->answerTextD);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->answerTextC);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->answerTextB);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->answerTextA);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox4->Location = System::Drawing::Point(200, 314);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(639, 287);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"³�����";
			// 
			// groupBox7
			// 
			this->groupBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox7->Controls->Add(this->correctAnswerBox);
			this->groupBox7->Location = System::Drawing::Point(430, 20);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(196, 53);
			this->groupBox7->TabIndex = 10;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"��������� �������";
			// 
			// correctAnswerBox
			// 
			this->correctAnswerBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->correctAnswerBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->correctAnswerBox->FormattingEnabled = true;
			this->correctAnswerBox->ImeMode = System::Windows::Forms::ImeMode::On;
			this->correctAnswerBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"A)"});
			this->correctAnswerBox->Location = System::Drawing::Point(15, 19);
			this->correctAnswerBox->Name = L"correctAnswerBox";
			this->correctAnswerBox->Size = System::Drawing::Size(143, 25);
			this->correctAnswerBox->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->countAnswerBox);
			this->groupBox5->Location = System::Drawing::Point(15, 20);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(181, 53);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"ʳ������ ��������";
			// 
			// countAnswerBox
			// 
			this->countAnswerBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->countAnswerBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->countAnswerBox->FormattingEnabled = true;
			this->countAnswerBox->ImeMode = System::Windows::Forms::ImeMode::On;
			this->countAnswerBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->countAnswerBox->Location = System::Drawing::Point(16, 19);
			this->countAnswerBox->Name = L"countAnswerBox";
			this->countAnswerBox->Size = System::Drawing::Size(143, 25);
			this->countAnswerBox->TabIndex = 0;
			this->countAnswerBox->SelectedIndexChanged += gcnew System::EventHandler(this, &EditTestForm::countAnswerBox_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"D)";
			// 
			// answerTextD
			// 
			this->answerTextD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->answerTextD->Enabled = false;
			this->answerTextD->Location = System::Drawing::Point(47, 196);
			this->answerTextD->Name = L"answerTextD";
			this->answerTextD->Size = System::Drawing::Size(579, 33);
			this->answerTextD->TabIndex = 6;
			this->answerTextD->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"C)";
			// 
			// answerTextC
			// 
			this->answerTextC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->answerTextC->Enabled = false;
			this->answerTextC->Location = System::Drawing::Point(47, 157);
			this->answerTextC->Name = L"answerTextC";
			this->answerTextC->Size = System::Drawing::Size(579, 33);
			this->answerTextC->TabIndex = 4;
			this->answerTextC->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"B)";
			// 
			// answerTextB
			// 
			this->answerTextB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->answerTextB->Enabled = false;
			this->answerTextB->Location = System::Drawing::Point(47, 118);
			this->answerTextB->Name = L"answerTextB";
			this->answerTextB->Size = System::Drawing::Size(579, 33);
			this->answerTextB->TabIndex = 2;
			this->answerTextB->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"A)";
			// 
			// answerTextA
			// 
			this->answerTextA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->answerTextA->Location = System::Drawing::Point(48, 79);
			this->answerTextA->Name = L"answerTextA";
			this->answerTextA->Size = System::Drawing::Size(579, 33);
			this->answerTextA->TabIndex = 0;
			this->answerTextA->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// EditTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 601);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"EditTestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����� �������������";
			this->Load += gcnew System::EventHandler(this, &EditTestForm::EditTestForm_Load);
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //exit: close form)
			 Close();
		 }

private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

		 //event create form
private: System::Void EditTestForm_Load(System::Object^  sender, System::EventArgs^  e) {
			this->countAnswerBox->SelectedIndex = 0;
			this->correctAnswerBox->SelectedIndex = 0;
			test = new Test();
			countQuestion = 1;
			test->setCountQuestion(countQuestion);
			//prew index for navigateList
			prewIndexQuestion = 0;
			quest = new Question[50];
		 }

String^ stringToString(string str)
{
	String^ str2 = gcnew String(str.c_str());
	return str2;
}

String^ intToString(int numb)
{
	string str = to_string(numb);
	String^ str2 = gcnew String(str.c_str());
	return str2;
}

void MarshalString (String ^ s, string& os )
{
	//convert String to string
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

private: System::Void addBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //add new question
			 this->navigateList->Items->Add("������� �" + (countQuestion + 1));
			 //create new question with default settings
			 quest[countQuestion].setQuestion("<Empty>");
			 quest[countQuestion].setCountAnswer(1);
			 quest[countQuestion].setRightAnswer(1);
			 countQuestion++;

			 //change lbl
			 this->countQestionLbl->Text = intToString(countQuestion);
		 }

//change comboBox
private: System::Void countAnswerBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 switch (countAnswerBox->SelectedIndex)
			 {
				 case 0:
					//correct answer Box
					correctAnswerBox->Items->Clear();
					correctAnswerBox->Items->Add("A)");
					correctAnswerBox->SelectedIndex = 0;
					
					//enabled richText answers
					answerTextB->Enabled = false;
					answerTextC->Enabled = false;
					answerTextD->Enabled = false;
					break;
				case 1:
					correctAnswerBox->Items->Clear();
					correctAnswerBox->Items->Add("A)");
					correctAnswerBox->Items->Add("B)");
					correctAnswerBox->SelectedIndex = 0;
					
					//enabled richText answer
					answerTextB->Enabled = true;
					answerTextC->Enabled = false;
					answerTextD->Enabled = false;
					break;
				case 2:
					correctAnswerBox->Items->Clear();
					correctAnswerBox->Items->Add("A)");
					correctAnswerBox->Items->Add("B)");
					correctAnswerBox->Items->Add("C)");
					correctAnswerBox->SelectedIndex = 0;
					
					//enabled richText answer
					answerTextB->Enabled = true;
					answerTextC->Enabled = true;
					answerTextD->Enabled = false;
					break;
				case 3:
					correctAnswerBox->Items->Clear();
					correctAnswerBox->Items->Add("A)");
					correctAnswerBox->Items->Add("B)");
					correctAnswerBox->Items->Add("C)");
					correctAnswerBox->Items->Add("D)");
					correctAnswerBox->SelectedIndex = 0;
					
					//enabled richText answer
					answerTextB->Enabled = true;
					answerTextC->Enabled = true;
					answerTextD->Enabled = true;
			 }
		 }
private: System::Void delBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (navigateList->SelectedIndex != countQuestion - 1)
			 {
				this->navigateList->Items->RemoveAt(countQuestion - 1);
				countQuestion--;
				//change lbl
				this->countQestionLbl->Text = intToString(countQuestion);
			 }
		 }

private: System::Void navigateList_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
/*
//String^ str2 = gcnew String(str.c_str()); convert string to String
//MarshalString(str, stroka);               convert String to string
*/
			 this->anwerLbl->Text = intToString(navigateList->SelectedIndex + 1);

			 //write in prew index question
			 String^ tmpQestion = this->questionText->Text;
			 string tmpStr;
			 MarshalString(tmpQestion, tmpStr);
			 //set prew quest
			 quest[prewIndexQuestion].setQuestion(tmpStr);
			 quest[prewIndexQuestion].setCountAnswer(this->countAnswerBox->SelectedIndex + 1);
			 quest[prewIndexQuestion].setRightAnswer(this->correctAnswerBox->SelectedIndex + 1);
			 //options A set
			 if (this->answerTextA->Enabled)
			 {
				tmpQestion = this->answerTextA->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 0);
			 }
			 //options B set
			 if (this->answerTextB->Enabled)
			 {
				tmpQestion = this->answerTextB->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 1);
			 }
			 //options C set
			 if (this->answerTextC->Enabled)
			 {
				tmpQestion = this->answerTextC->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 2);
			 }
			 //options D set
			 if (this->answerTextD->Enabled)
			 {
				tmpQestion = this->answerTextD->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 3);
			 }
			 //===========prew = selected index=====
			 prewIndexQuestion = navigateList->SelectedIndex;
			 //=====
		     //question set
			 tmpStr = quest[navigateList->SelectedIndex].getQuestion();
			 this->questionText->Text = stringToString(tmpStr);
			 //set countAnswerBox
			 this->countAnswerBox->SelectedIndex = quest[navigateList->SelectedIndex].getCountAnswer() - 1; 
			 //set correctAnswerBox
			 this->correctAnswerBox->SelectedIndex = quest[navigateList->SelectedIndex].getRightAnswer() - 1; 
			 //==Set options A
			 tmpStr = quest[navigateList->SelectedIndex].getOptions(0);
			 this->answerTextA->Text = stringToString(tmpStr);
			 //==set Options B
			 tmpStr = quest[navigateList->SelectedIndex].getOptions(1);
			 this->answerTextB->Text = stringToString(tmpStr);
			 //===setOptions C
			 tmpStr = quest[navigateList->SelectedIndex].getOptions(2);
			 this->answerTextC->Text = stringToString(tmpStr);
			 //====setOptions D
			 tmpStr = quest[navigateList->SelectedIndex].getOptions(3);
			 this->answerTextD->Text = stringToString(tmpStr);
			// setQuestion();
		 };

private: System::Void settingBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 EditTestSettingForm^ secondForm = gcnew EditTestSettingForm();
			 secondForm->Show();
		 }

void setQuestion(int index)
{
	/*
//String^ str2 = gcnew String(str.c_str()); convert string to String
//MarshalString(str, stroka);               convert String to string
*/
			 //write in prew index question
			 String^ tmpQestion = this->questionText->Text;
			 string tmpStr;
			 MarshalString(tmpQestion, tmpStr);
			 prewIndexQuestion = index;
			 //set prew quest
			 quest[prewIndexQuestion].setQuestion(tmpStr);
			 quest[prewIndexQuestion].setCountAnswer(this->countAnswerBox->SelectedIndex + 1);
			 quest[prewIndexQuestion].setRightAnswer(this->correctAnswerBox->SelectedIndex + 1);
			 //options A set
			 if (this->answerTextA->Enabled)
			 {
				tmpQestion = this->answerTextA->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 0);
			 }
			 //options B set
			 if (this->answerTextB->Enabled)
			 {
				tmpQestion = this->answerTextB->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 1);
			 }
			 //options C set
			 if (this->answerTextC->Enabled)
			 {
				tmpQestion = this->answerTextC->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 2);
			 }
			 //options D set
			 if (this->answerTextD->Enabled)
			 {
				tmpQestion = this->answerTextD->Text;
				MarshalString(tmpQestion, tmpStr);
				quest[prewIndexQuestion].setOptions(tmpStr, 3);
			 }
}

private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //fixed 
			 if (countQuestion == 1)
				 setQuestion(0);
			 else
				 setQuestion(navigateList->SelectedIndex);
			 test->setCountQuestion(countQuestion);
			 test->writeInFile(quest, countQuestion);
			 
		 }

private: System::Void newBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->navigateList->Items->Clear();
			 this->countAnswerBox->SelectedIndex = 0;
			 this->correctAnswerBox->SelectedIndex = 0;
			 this->questionText->Clear();
			 this->answerTextA->Clear();
			 this->answerTextB->Clear();
			 this->answerTextC->Clear();
			 this->answerTextD->Clear();
			 
			 test = new Test();
			 countQuestion = 0;
			 test->setCountQuestion(countQuestion);
			 //prew index for navigateList
			 prewIndexQuestion = 0;
			 quest = new Question[50];
			 
			 this->navigateList->Items->Add("������� �" + (countQuestion + 1));
			 //create new question with default settings
			 quest[countQuestion].setQuestion("<Empty>");
			 quest[countQuestion].setCountAnswer(1);
			 quest[countQuestion].setRightAnswer(1);
			 countQuestion++;

			 //change lbl
			 this->countQestionLbl->Text = intToString(countQuestion);
			 this->anwerLbl->Text = intToString(1);
		 }
};
}