#pragma once
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <MathLibrary.h> //Dll-library

using namespace std;

namespace exam {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: Thread^ thr1; //created a thread
	private: Thread^ thr2;
	private: Thread^ thr3;
	private: Thread^ thr4;
	private: Thread^ thr5;
	private: Thread^ thr6;
	private: Thread^ thr7;
	private: Thread^ thr8;
	private: Thread^ thr9;
	private: Thread^ thr10;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(299, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(424, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Alyakhunov A.T.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Исходный текст";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Итоговый текст";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(352, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Сортировка: итоговый файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(161, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Разделить по векторам";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 36);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(525, 231);
			this->textBox1->TabIndex = 2;
			this->textBox1->MultilineChanged += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 315);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(525, 231);
			this->textBox2->TabIndex = 2;
			this->textBox2->MultilineChanged += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(550, 562);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		//start of functions for writing vectors to file

		void writeTo(const std::vector<char>& data)
		{
			ofstream filestream("sort.txt", ios::app);
			copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream));
			filestream << " ";
			filestream.close();
		}

		void writeTo2(const std::string& filepath, const vector<char>& data)
		{
			ofstream filestream("fail.txt", ios::app);
			copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream));
			filestream.close();
		}

		//end of functions for writing vectors to file

	//start filling vectors

	public: void vv1() {
		char values; //created an array to store data
		ifstream f; //created a variable to read and write data to a file
		std::vector<char> v1; //created new vector
		f.open("kizary.txt"); //opened the file 
		for (int i = 0; i < 10; i++) //created a loop to iterate over letters
		{
			f >> values; //put into an array
			v1.push_back(values); //put from array into vector
		}
		sort(v1.begin(), v1.end()); //sorted alphabetically
		writeTo(v1); //put into the file
		f.close(); //close file
	}

	public: void vv2() {
		char values;
		ifstream f;
		std::vector<char> v2;
		f.open("kizary.txt");
		for (int i = 0; i < 10; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v2.push_back(values);
		}
		sort(v2.begin(), v2.end());
		writeTo(v2);
		f.close();
	}

	public: void vv3() {
		char values;
		ifstream f;
		std::vector<char> v3;
		f.open("kizary.txt");
		for (int i = 0; i < 20; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v3.push_back(values);
		}
		sort(v3.begin(), v3.end());
		writeTo(v3);
		f.close();
	}

	public: void vv4() {
		char values;
		ifstream f;
		std::vector<char> v4;
		f.open("kizary.txt");
		for (int i = 0; i < 30; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v4.push_back(values);
		}
		sort(v4.begin(), v4.end());
		writeTo(v4);
		f.close();
	}

	public: void vv5() {
		char values;
		ifstream f;
		std::vector<char> v5;
		f.open("kizary.txt");
		for (int i = 0; i < 40; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v5.push_back(values);
		}
		sort(v5.begin(), v5.end());
		writeTo(v5);
		f.close();
	}

	public: void vv6() {
		char values;
		ifstream f;
		std::vector<char> v6;
		f.open("kizary.txt");
		for (int i = 0; i < 50; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v6.push_back(values);
		}
		sort(v6.begin(), v6.end());
		writeTo(v6);
		f.close();
	}

	public: void vv7() {
		char values;
		ifstream f;
		std::vector<char> v7;
		f.open("kizary.txt");
		for (int i = 0; i < 60; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v7.push_back(values);
		}
		sort(v7.begin(), v7.end());
		writeTo(v7);
		f.close();
	}

	public: void vv8() {
		char values;
		ifstream f;
		std::vector<char> v8;
		f.open("kizary.txt");
		for (int i = 0; i < 70; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v8.push_back(values);
		}
		sort(v8.begin(), v8.end());
		writeTo(v8);
		f.close();
	}

	public: void vv9() {
		char values;
		ifstream f;
		std::vector<char> v9;
		f.open("kizary.txt");
		for (int i = 0; i < 80; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v9.push_back(values);
		}
		sort(v9.begin(), v9.end());
		writeTo(v9);
		f.close();
	}

	public: void vv10() {
		char values;
		ifstream f;
		std::vector<char> v10;
		f.open("kizary.txt");
		for (int i = 0; i < 90; i++)
		{
			f >> values;
		}
		for (int i = 0; i < 10; i++)
		{
			f >> values;
			v10.push_back(values);
		}
		sort(v10.begin(), v10.end());
		writeTo(v10);
		f.close();
	}

	//end of filling vectors

	//start of time function

	private: System::Void MyForm_Load_1(System::Object^  sender, System::EventArgs^  e) 
	{
		struct tm* date;
		char Current_date[100];
		const time_t timer = time(NULL);
		date = localtime(&timer);
		strftime(Current_date, 100, "%d.%m.%Y %H:%M", date);
		System::String^ strCLR = gcnew System::String(Current_date);
		label1->Text += strCLR;

	//end of time function

	//start putting letters in a textbox

		ifstream f;
		f.open("kizary.txt");
		String^ Filename = "kizary.txt";
		StreamReader^ file = File::OpenText(Filename); //reading a file
		textBox1->Text = file->ReadToEnd();

	//end of putting letters in a textbox

	}

	//start outputting vectors in a textbox through threads

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ofstream filestream("sort.txt", ios::app);
		filestream.close();
		thr1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv1)); //describe thread
		thr2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv2));
		thr3 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv3));
		thr4 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv4));
		thr5 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv5));
		thr6 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv6));
		thr7 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv7));
		thr8 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv8));
		thr9 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv9));
		thr10 = gcnew Thread(gcnew ThreadStart(this, &MyForm::vv10));

		thr1->Start(); //start thread
		_sleep(50);
		thr2->Start();
		_sleep(10);
		thr3->Start();
		_sleep(10);
		thr4->Start();
		_sleep(10);
		thr5->Start();
		_sleep(10);
		thr6->Start();
		_sleep(10);
		thr7->Start();
		_sleep(10);
		thr8->Start();
		_sleep(10);
		thr9->Start();
		_sleep(10);
		thr10->Start();
		_sleep(50);

		String^ Filename = "sort.txt";
		StreamReader^ file = File::OpenText(Filename);
		textBox2->Text = file->ReadToEnd();
	}

	//end of outputting vectors in a textbox through threads

	//start creating sorted read only final file

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		char values;
		std::vector<char> v11;
		ifstream fp;
		fp.open("sort.txt");
		for (int i = 0; i < 100; i++)
		{
			fp >> values;
			v11.push_back(values);
		}
		sort(v11.begin(), v11.end());
		writeTo2("fail.txt", v11);
		fp.close();
		SetFileAttributesA("fail.txt", FILE_ATTRIBUTE_READONLY);
	}

	//end of creating sorted readonly final file
};
}
