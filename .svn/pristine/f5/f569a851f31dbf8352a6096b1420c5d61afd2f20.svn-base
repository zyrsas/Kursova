#pragma once

namespace Tester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestCompleteForm
	/// </summary>
	public ref class TestCompleteForm : public System::Windows::Forms::Form
	{
	public:
		TestCompleteForm(void)
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
		~TestCompleteForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  closeBtn;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TestCompleteForm::typeid));
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// closeBtn
			// 
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(338, 69);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(110, 27);
			this->closeBtn->TabIndex = 0;
			this->closeBtn->Text = L"Закрити";
			this->closeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &TestCompleteForm::closeBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 57);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Вітаємо! \r\nВи пройшли тест, Ваш результат збережений!\r\nДякуємо!";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(122, 65);
			this->panel1->TabIndex = 2;
			// 
			// TestCompleteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 101);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->closeBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TestCompleteForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вітаємо!";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}


	};
}
