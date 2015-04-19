#pragma once

namespace Tester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpTestForm
	/// </summary>
	public ref class HelpTestForm : public System::Windows::Forms::Form
	{
	public:
		HelpTestForm(void)
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
		~HelpTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  okBtn;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpTestForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->okBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(12, 32);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(152, 154);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(230, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tester v1.0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(476, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Автор програми:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(517, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"студент 243 групи";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(517, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Журик Олександр В.";
			// 
			// okBtn
			// 
			this->okBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->okBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"okBtn.Image")));
			this->okBtn->Location = System::Drawing::Point(296, 192);
			this->okBtn->Name = L"okBtn";
			this->okBtn->Size = System::Drawing::Size(105, 36);
			this->okBtn->TabIndex = 5;
			this->okBtn->Text = L"Ok";
			this->okBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->okBtn->UseVisualStyleBackColor = true;
			this->okBtn->Click += gcnew System::EventHandler(this, &HelpTestForm::okBtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(179, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(493, 90);
			this->label5->TabIndex = 6;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// HelpTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 244);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->okBtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"HelpTestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Довідка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void okBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

};
}
