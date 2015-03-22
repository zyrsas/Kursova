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
	private: System::Windows::Forms::ToolStripMenuItem^  Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÒÚ‚ÓËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚≥‰ÍËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Á·ÂÂ„ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÔÓœÓ„‡ÏÛToolStripMenuItem;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÚ‚ÓËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚≥‰ÍËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á·ÂÂ„ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1039, 75);
			this->panel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->Ù‡ÈÎToolStripMenuItem, 
				this->ÔÓœÓ„‡ÏÛToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1039, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ÒÚ‚ÓËÚËToolStripMenuItem, 
				this->‚≥‰ÍËÚËToolStripMenuItem, this->Á·ÂÂ„ÚËToolStripMenuItem});
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// ÔÓœÓ„‡ÏÛToolStripMenuItem
			// 
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Name = L"ÔÓœÓ„‡ÏÛToolStripMenuItem";
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ÔÓœÓ„‡ÏÛToolStripMenuItem->Text = L"œÓ ÔÓ„‡ÏÛ";
			// 
			// ÒÚ‚ÓËÚËToolStripMenuItem
			// 
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Name = L"ÒÚ‚ÓËÚËToolStripMenuItem";
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Text = L"—Ú‚ÓËÚË";
			// 
			// ‚≥‰ÍËÚËToolStripMenuItem
			// 
			this->‚≥‰ÍËÚËToolStripMenuItem->Name = L"‚≥‰ÍËÚËToolStripMenuItem";
			this->‚≥‰ÍËÚËToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->‚≥‰ÍËÚËToolStripMenuItem->Text = L"¬≥‰ÍËÚË";
			// 
			// Á·ÂÂ„ÚËToolStripMenuItem
			// 
			this->Á·ÂÂ„ÚËToolStripMenuItem->Name = L"Á·ÂÂ„ÚËToolStripMenuItem";
			this->Á·ÂÂ„ÚËToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->Á·ÂÂ„ÚËToolStripMenuItem->Text = L"«·ÂÂ„ÚË";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"—Ú‚ÓËÚË";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(107, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 69);
			this->button2->TabIndex = 1;
			this->button2->Text = L"¬≥‰ÍËÚË";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(211, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 69);
			this->button3->TabIndex = 2;
			this->button3->Text = L"«·ÂÂ„ÚË";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(431, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 69);
			this->button4->TabIndex = 3;
			this->button4->Text = L"ƒÓ‚≥‰Í‡";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &EditTestForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(535, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 69);
			this->button5->TabIndex = 4;
			this->button5->Text = L"¬Ëı≥‰";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(315, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 69);
			this->button6->TabIndex = 5;
			this->button6->Text = L"–ÂÁÛÎ¸Ú‡ÚË";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(0, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 502);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Õ‡‚≥„‡ˆ≥ˇ";
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
			this->groupBox2->Text = L"≤ÌÙÓÏ‡ˆ≥ˇ";
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
			this->groupBox3->Text = L"œËÚ‡ÌÌˇ";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &EditTestForm::groupBox3_Enter);
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
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox4->Location = System::Drawing::Point(200, 314);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(639, 287);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"¬≥‰ÔÓ‚≥‰≥";
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
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"EditTestForm";
			this->Text = L"EditTestForm";
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
