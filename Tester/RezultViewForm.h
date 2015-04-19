#pragma once
#include "Student.h"
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
	/// Summary for RezultViewForm
	/// </summary>
	public ref class RezultViewForm : public System::Windows::Forms::Form
	{
	public:
		RezultViewForm(void)
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
		~RezultViewForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 





	private: System::Windows::Forms::Button^  closeBtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameStudent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  groupStudent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameTest;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rezultStudent;
	private: System::Windows::Forms::Button^  clearBtn;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RezultViewForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nameStudent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupStudent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameTest = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rezultStudent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->nameStudent, 
				this->groupStudent, this->nameTest, this->rezultStudent});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(654, 316);
			this->dataGridView1->TabIndex = 0;
			// 
			// nameStudent
			// 
			this->nameStudent->HeaderText = L"Ім\'я";
			this->nameStudent->Name = L"nameStudent";
			this->nameStudent->ReadOnly = true;
			this->nameStudent->Width = 210;
			// 
			// groupStudent
			// 
			this->groupStudent->HeaderText = L"Група";
			this->groupStudent->Name = L"groupStudent";
			this->groupStudent->ReadOnly = true;
			// 
			// nameTest
			// 
			this->nameTest->HeaderText = L"Назва тесту";
			this->nameTest->Name = L"nameTest";
			this->nameTest->ReadOnly = true;
			this->nameTest->Width = 200;
			// 
			// rezultStudent
			// 
			this->rezultStudent->HeaderText = L"Результат";
			this->rezultStudent->Name = L"rezultStudent";
			this->rezultStudent->ReadOnly = true;
			// 
			// closeBtn
			// 
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(498, 322);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(144, 35);
			this->closeBtn->TabIndex = 1;
			this->closeBtn->Text = L"Закрити";
			this->closeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &RezultViewForm::closeBtn_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"clearBtn.Image")));
			this->clearBtn->Location = System::Drawing::Point(12, 322);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(144, 35);
			this->clearBtn->TabIndex = 2;
			this->clearBtn->Text = L"Очистити";
			this->clearBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &RezultViewForm::clearBtn_Click);
			// 
			// RezultViewForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 359);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"RezultViewForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Результати тестування";
			this->Load += gcnew System::EventHandler(this, &RezultViewForm::RezultViewForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		
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


private: System::Void RezultViewForm_Load(System::Object^  sender, System::EventArgs^  e) {
	Student* student = new Student[100];
	int n = student->setStudentRezult(student);
	for (int i = 0; i < n; i++)
		{
			this->dataGridView1->Rows->Add();
			this->dataGridView1->Rows[i]->Cells[0]->Value = stringToString(student[i].getName()); 
			this->dataGridView1->Rows[i]->Cells[1]->Value = stringToString(student[i].getGroup()); 
			this->dataGridView1->Rows[i]->Cells[2]->Value = stringToString(student[i].getNameTest()); 
			this->dataGridView1->Rows[i]->Cells[3]->Value = intToString(student[i].getRezult()); 
		}
}

//close form
private: System::Void closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

//clear rezults students
private: System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->dataGridView1->Rows->Clear();
	Student student;
	student.clearRezult();
}

};
}
