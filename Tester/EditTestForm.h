#pragma once

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
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñòâîðèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  â³äêðèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çáåðåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïðîÏðîãðàìóToolStripMenuItem;
	private: System::Windows::Forms::Button^  infoBtn;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::Button^  openBtn;
	private: System::Windows::Forms::Button^  newBtn;




	private: System::Windows::Forms::Button^  closeBtn;
	private: System::Windows::Forms::Button^  rezultBtn;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  delBtn;

	private: System::Windows::Forms::Button^  addBtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ComboBox^  countAnswer;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;





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
			this->rezultBtn = (gcnew System::Windows::Forms::Button());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->infoBtn = (gcnew System::Windows::Forms::Button());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->openBtn = (gcnew System::Windows::Forms::Button());
			this->newBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòâîðèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêðèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåðåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðîÏðîãðàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->delBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->countAnswer = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			// rezultBtn
			// 
			this->rezultBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rezultBtn.Image")));
			this->rezultBtn->Location = System::Drawing::Point(315, 2);
			this->rezultBtn->Name = L"rezultBtn";
			this->rezultBtn->Size = System::Drawing::Size(110, 69);
			this->rezultBtn->TabIndex = 5;
			this->rezultBtn->Text = L"Ðåçóëüòàòè";
			this->rezultBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->rezultBtn->UseVisualStyleBackColor = true;
			// 
			// closeBtn
			// 
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(535, 2);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(98, 69);
			this->closeBtn->TabIndex = 4;
			this->closeBtn->Text = L"Âèõ³ä";
			this->closeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &EditTestForm::closeBtn_Click);
			// 
			// infoBtn
			// 
			this->infoBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"infoBtn.Image")));
			this->infoBtn->Location = System::Drawing::Point(431, 3);
			this->infoBtn->Name = L"infoBtn";
			this->infoBtn->Size = System::Drawing::Size(98, 69);
			this->infoBtn->TabIndex = 3;
			this->infoBtn->Text = L"Äîâ³äêà";
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
			this->saveBtn->Text = L"Çáåðåãòè";
			this->saveBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->saveBtn->UseVisualStyleBackColor = true;
			// 
			// openBtn
			// 
			this->openBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openBtn.Image")));
			this->openBtn->Location = System::Drawing::Point(107, 3);
			this->openBtn->Name = L"openBtn";
			this->openBtn->Size = System::Drawing::Size(98, 69);
			this->openBtn->TabIndex = 1;
			this->openBtn->Text = L"Â³äêðèòè";
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
			this->newBtn->Text = L"Ñòâîðèòè";
			this->newBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->newBtn->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ôàéëToolStripMenuItem, 
				this->ïðîÏðîãðàìóToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1039, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ñòâîðèòèToolStripMenuItem, 
				this->â³äêðèòèToolStripMenuItem, this->çáåðåãòèToolStripMenuItem});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñòâîðèòèToolStripMenuItem
			// 
			this->ñòâîðèòèToolStripMenuItem->Name = L"ñòâîðèòèToolStripMenuItem";
			this->ñòâîðèòèToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->ñòâîðèòèToolStripMenuItem->Text = L"Ñòâîðèòè";
			// 
			// â³äêðèòèToolStripMenuItem
			// 
			this->â³äêðèòèToolStripMenuItem->Name = L"â³äêðèòèToolStripMenuItem";
			this->â³äêðèòèToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->â³äêðèòèToolStripMenuItem->Text = L"Â³äêðèòè";
			// 
			// çáåðåãòèToolStripMenuItem
			// 
			this->çáåðåãòèToolStripMenuItem->Name = L"çáåðåãòèToolStripMenuItem";
			this->çáåðåãòèToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->çáåðåãòèToolStripMenuItem->Text = L"Çáåðåãòè";
			// 
			// ïðîÏðîãðàìóToolStripMenuItem
			// 
			this->ïðîÏðîãðàìóToolStripMenuItem->Name = L"ïðîÏðîãðàìóToolStripMenuItem";
			this->ïðîÏðîãðàìóToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ïðîÏðîãðàìóToolStripMenuItem->Text = L"Ïðî ïðîãðàìó";
			this->ïðîÏðîãðàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditTestForm::ïðîÏðîãðàìóToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Controls->Add(this->listView1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(0, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 502);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Íàâ³ãàö³ÿ";
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
			this->delBtn->Text = L"Âèäàëèòè";
			this->delBtn->UseVisualStyleBackColor = true;
			// 
			// addBtn
			// 
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->addBtn->Location = System::Drawing::Point(3, 3);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(77, 38);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"Äîáàâèòè";
			this->addBtn->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(3, 16);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(194, 483);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Location = System::Drawing::Point(839, 99);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 502);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"²íôîðìàö³ÿ";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->richTextBox1);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox3->Location = System::Drawing::Point(206, 105);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(627, 209);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ïèòàííÿ";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(3, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(618, 184);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox8);
			this->groupBox4->Controls->Add(this->groupBox7);
			this->groupBox4->Controls->Add(this->groupBox6);
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->richTextBox5);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->richTextBox4);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->richTextBox3);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->richTextBox2);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox4->Location = System::Drawing::Point(200, 314);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(639, 287);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Â³äïîâ³ä³";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->Location = System::Drawing::Point(48, 79);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(579, 33);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
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
			// richTextBox3
			// 
			this->richTextBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox3->Location = System::Drawing::Point(47, 118);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(579, 33);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
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
			// richTextBox4
			// 
			this->richTextBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox4->Location = System::Drawing::Point(47, 157);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(579, 33);
			this->richTextBox4->TabIndex = 4;
			this->richTextBox4->Text = L"";
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
			// richTextBox5
			// 
			this->richTextBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox5->Location = System::Drawing::Point(47, 196);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(579, 33);
			this->richTextBox5->TabIndex = 6;
			this->richTextBox5->Text = L"";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->countAnswer);
			this->groupBox5->Location = System::Drawing::Point(15, 20);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(181, 53);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ê³ëüê³ñòü â³äïîâ³äåé";
			// 
			// countAnswer
			// 
			this->countAnswer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->countAnswer->FormattingEnabled = true;
			this->countAnswer->ImeMode = System::Windows::Forms::ImeMode::On;
			this->countAnswer->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->countAnswer->Location = System::Drawing::Point(15, 19);
			this->countAnswer->Name = L"countAnswer";
			this->countAnswer->Size = System::Drawing::Size(143, 25);
			this->countAnswer->TabIndex = 0;
			this->countAnswer->Text = L"1";
			// 
			// groupBox6
			// 
			this->groupBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox6->Controls->Add(this->comboBox1);
			this->groupBox6->Location = System::Drawing::Point(433, 20);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(195, 53);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"×àñ íà âèêîíàííÿ òåñòó (õâèëèí)";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"3", L"5", L"10", L"15", L"20", L"25", L"30"});
			this->comboBox1->Location = System::Drawing::Point(15, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 25);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"3";
			// 
			// groupBox7
			// 
			this->groupBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox7->Controls->Add(this->comboBox2);
			this->groupBox7->Location = System::Drawing::Point(215, 20);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(196, 53);
			this->groupBox7->TabIndex = 10;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Ïðàâåëüíà â³äïîâ³äü";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->ImeMode = System::Windows::Forms::ImeMode::On;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"A)", L"B)", L"C)", L"D)"});
			this->comboBox2->Location = System::Drawing::Point(15, 19);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(143, 25);
			this->comboBox2->TabIndex = 0;
			this->comboBox2->Text = L"A)";
			// 
			// groupBox8
			// 
			this->groupBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox8->Controls->Add(this->textBox1);
			this->groupBox8->Location = System::Drawing::Point(279, 235);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(347, 49);
			this->groupBox8->TabIndex = 10;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Àâòîð òåñòó";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(16, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(325, 26);
			this->textBox1->TabIndex = 0;
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
			this->Text = L"Ðåæèì àäì³í³ñòðàòîðà";
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //exit: close form)
			 Close();
		 }
private: System::Void ïðîÏðîãðàìóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}