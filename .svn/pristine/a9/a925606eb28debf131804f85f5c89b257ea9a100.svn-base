#pragma once
#include "EditTestForm.h"

namespace Tester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PasswordForm
	/// </summary>
	public ref class PasswordForm : public System::Windows::Forms::Form
	{
	public:
		PasswordForm(void)
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
		~PasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  passText;
	protected: 

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  loginText;

	private: System::Windows::Forms::Button^  enterBtn;

	private: System::Windows::Forms::Button^  cancelBtn;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PasswordForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->loginText = (gcnew System::Windows::Forms::TextBox());
			this->enterBtn = (gcnew System::Windows::Forms::Button());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин";
			// 
			// passText
			// 
			this->passText->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->passText->Location = System::Drawing::Point(101, 57);
			this->passText->Name = L"passText";
			this->passText->Size = System::Drawing::Size(218, 26);
			this->passText->TabIndex = 1;
			this->passText->Text = L"Test";
			this->passText->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(20, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль";
			// 
			// loginText
			// 
			this->loginText->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->loginText->Location = System::Drawing::Point(101, 14);
			this->loginText->MaxLength = 20;
			this->loginText->Name = L"loginText";
			this->loginText->Size = System::Drawing::Size(218, 26);
			this->loginText->TabIndex = 3;
			this->loginText->Text = L"Test";
			// 
			// enterBtn
			// 
			this->enterBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->enterBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"enterBtn.Image")));
			this->enterBtn->Location = System::Drawing::Point(202, 106);
			this->enterBtn->Name = L"enterBtn";
			this->enterBtn->Size = System::Drawing::Size(117, 32);
			this->enterBtn->TabIndex = 4;
			this->enterBtn->Text = L"Увійти";
			this->enterBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->enterBtn->UseVisualStyleBackColor = true;
			this->enterBtn->Click += gcnew System::EventHandler(this, &PasswordForm::enterBtn_Click);
			// 
			// cancelBtn
			// 
			this->cancelBtn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->cancelBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"cancelBtn.Image")));
			this->cancelBtn->Location = System::Drawing::Point(24, 106);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(124, 32);
			this->cancelBtn->TabIndex = 5;
			this->cancelBtn->Text = L"Скасувати";
			this->cancelBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->cancelBtn->UseVisualStyleBackColor = true;
			this->cancelBtn->Click += gcnew System::EventHandler(this, &PasswordForm::cancelBtn_Click);
			// 
			// PasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 159);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->enterBtn);
			this->Controls->Add(this->loginText);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passText);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PasswordForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вхід";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//event click enter button
private: System::Void enterBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //check login and password
			 if (this->loginText->Text == "Test" && this->passText->Text == "Test")
			 {
				 //correct login or password, show EditForm
				 EditTestForm^ secondForm = gcnew EditTestForm();
				 secondForm->Show();
				 Close();
			 }
			 else
				//incorrect login or password, show MessageBox
				 MessageBox::Show("Неправельний логін або пароль! Перевірте будь ласка дані, і спробуйте знову!", "Помилка",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
			 
}
//event click cancel button
private: System::Void cancelBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //close form
			 Close();
		 }
};
}
