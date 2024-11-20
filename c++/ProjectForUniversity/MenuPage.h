#pragma once
#include "lab1.h"
#include "lab2.h"
#include "lab3.h"
#include "task1.h"

namespace ProjectForUniversity {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MenuPage
	/// </summary>
	public ref class MenuPage : public System::Windows::Forms::Form
	{
	public:
		MenuPage(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MenuPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(219, 129);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(375, 38);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Пошаговая детализация";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuPage::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(219, 251);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(375, 38);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Лабораторная работа №3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuPage::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(219, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(375, 38);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Лабораторная работа №2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuPage::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(375, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Лабораторная работа №1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuPage::button1_Click);
			// 
			// MenuPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 468);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MenuPage";
			this->Text = L"MenuPage";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		lab1^ f = gcnew lab1();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		task1^ f = gcnew task1();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	lab2^ f = gcnew lab2();
	f->Owner = this;
	f->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	lab3^ f = gcnew lab3();
	f->Owner = this;
	f->Show();
	this->Hide();
}
private: System::Void MenuPage_Load(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
