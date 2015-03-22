#pragma once
#include "EditTestForm.h"
#include "PasswordForm.h"

namespace Tester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  okBtn;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  chooseBox;


	private: System::Windows::Forms::Button^  exitBtn;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->okBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chooseBox = (gcnew System::Windows::Forms::ComboBox());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// okBtn
			// 
			this->okBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->okBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"okBtn.Image")));
			this->okBtn->Location = System::Drawing::Point(246, 148);
			this->okBtn->Name = L"okBtn";
			this->okBtn->Size = System::Drawing::Size(89, 34);
			this->okBtn->TabIndex = 0;
			this->okBtn->Text = L"Ok";
			this->okBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->okBtn->UseVisualStyleBackColor = true;
			this->okBtn->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(60, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Виберіть режим запуску";
			// 
			// chooseBox
			// 
			this->chooseBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->chooseBox->FormattingEnabled = true;
			this->chooseBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->chooseBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Адміністратор", L"Користувач"});
			this->chooseBox->Location = System::Drawing::Point(74, 86);
			this->chooseBox->Name = L"chooseBox";
			this->chooseBox->Size = System::Drawing::Size(249, 30);
			this->chooseBox->TabIndex = 2;
			this->chooseBox->Text = L"Виберіть режим";
			// 
			// exitBtn
			// 
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->exitBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitBtn.Image")));
			this->exitBtn->Location = System::Drawing::Point(65, 148);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(89, 34);
			this->exitBtn->TabIndex = 3;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MainForm::exitBtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 194);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->chooseBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->okBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//event click Ok btn
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Form administrator show for create or edit tests
				 PasswordForm^ secondForm = gcnew PasswordForm();
				 secondForm->Show();
			 }

	//event click exit Button
	private: System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 //close program
				 Close();
			 }
};
}
