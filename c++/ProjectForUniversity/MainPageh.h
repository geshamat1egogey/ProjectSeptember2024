#pragma once
#include "MenuPage.h"

namespace ProjectForUniversity {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainPageh
	/// </summary>
	public ref class MainPageh : public System::Windows::Forms::Form
	{
	public:
		MainPageh(void)
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
		~MainPageh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(332, 297);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 16);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Вариант 20";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(385, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(380, 16);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Проверил: доцент кафедры \"Информатика\" Гуриков С. Р.\r\n";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(644, 416);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 36);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Меню ->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainPageh::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(324, 345);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 16);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Москва 2024г.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(385, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(240, 16);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Подготовила: Ушкова А. В. БМИ2301";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(156, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(432, 16);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Дисциплина: Информационные технологии и программирование";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(295, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Лабораторные работы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(287, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Кафедра \"Информатика\"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(505, 48);
			this->label1->TabIndex = 16;
			this->label1->Text = L"«МОСКОВСКИЙ ТЕХНИЧЕСКИЙ УНИВЕРСИТЕТ СВЯЗИ И ИНФОРМАТИКИ»\r\n\r\n\r\n";
			// 
			// MainPageh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 468);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainPageh";
			this->Text = L"MainPageh";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuPage^ f = gcnew MenuPage();
		f->Show();
		this->Hide();
	}
private: System::Void MainPageh_Load(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
