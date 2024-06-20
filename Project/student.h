#pragma once
#include"Header.h"
#include <stdlib.h>
#include <string.h>
#include "msclr\marshal.h"
#include <time.h>

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для student
	/// </summary>
	public ref class student : public System::Windows::Forms::Form
	{
		String^ studName;
	public:
		student(String^ s)
		{

			InitializeComponent();
			myMembersInit();
			studName = s;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ тестуванняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ навчальнийМатеріалToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: array<RadioButton^>^ rb;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->тестуванняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->навчальнийМатеріалToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(65, 41);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(376, 290);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->тестуванняToolStripMenuItem,
					this->навчальнийМатеріалToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(497, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// тестуванняToolStripMenuItem
			// 
			this->тестуванняToolStripMenuItem->Name = L"тестуванняToolStripMenuItem";
			this->тестуванняToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->тестуванняToolStripMenuItem->Text = L"Тестування";
			this->тестуванняToolStripMenuItem->Click += gcnew System::EventHandler(this, &student::тестуванняToolStripMenuItem_Click);
			// 
			// навчальнийМатеріалToolStripMenuItem
			// 
			this->навчальнийМатеріалToolStripMenuItem->Name = L"навчальнийМатеріалToolStripMenuItem";
			this->навчальнийМатеріалToolStripMenuItem->Size = System::Drawing::Size(139, 20);
			this->навчальнийМатеріалToolStripMenuItem->Text = L"Навчальний матеріал";
			this->навчальнийМатеріалToolStripMenuItem->Click += gcnew System::EventHandler(this, &student::навчальнийМатеріалToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &student::вихідToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(38, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(447, 290);
			this->panel1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(312, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(269, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(194, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Answer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &student::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(315, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &student::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Prev";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &student::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &student::timer1_Tick);
			// 
			// student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 343);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"student";
			this->Text = L"student";
			this->Load += gcnew System::EventHandler(this, &student::student_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void myMembersInit()
		{
			int RadioButtonsLocation[5] = { 60, 85, 110, 135, 160 };
			int RandomRadioButtonsLocation[5];
			int k = 5;
			randAnswer(RadioButtonsLocation, k, RandomRadioButtonsLocation);
			rb = gcnew cli::array<RadioButton^>(5);
			for (int i = 0; i < rb->Length; i++)
			{
				rb[i] = gcnew RadioButton();
				rb[i]->AutoSize = true;
				//rb[i]->Location = System::Drawing::Point(26, 60 + 25 * i);
				rb[i]->Location = System::Drawing::Point(26, RandomRadioButtonsLocation[i]);
				rb[i]->Size = System::Drawing::Size(85, 17);
				panel1->Controls->Add(rb[i]);
			}
		}
#pragma endregion
		list* head = NULL;
		list* cur;
		bool ifPressedNext = false;
		int CountRightAnswer = 0;
		public: int min = 3, sec = 0;

			  list* init()
			  {
				  list* head = (list*)malloc(sizeof(list));

				  strcpy(head->data.question, "Який вигляд має змінна типу int");

				  strcpy(head->data.answer[0], "1.1");
				  strcpy(head->data.answer[1], "1");
				  strcpy(head->data.answer[2], "11,5");
				  strcpy(head->data.answer[3], "a");
				  strcpy(head->data.answer[4], "asdfg");
				  head->data.rightAnswer = 1;

				  head->next = NULL;
				  head->prev = NULL;

				  list* temp = (list*)malloc(sizeof(list));

				  strcpy(temp->data.question, "Яка функція відповідає знаходженню кореня числа");

				  strcpy(temp->data.answer[0], "sqrt()");
				  strcpy(temp->data.answer[1], "korin()");
				  strcpy(temp->data.answer[2], "sqr()");
				  strcpy(temp->data.answer[3], "a()");
				  strcpy(temp->data.answer[4], "pow()");
				  temp->data.rightAnswer = 0;

				  head->next = temp;
				  //
				  head->prev = NULL;
				  //
				  temp->prev = head;
				  temp->next = NULL;

				  list* temp1 = (list*)malloc(sizeof(list));

				  strcpy(temp1->data.question, "Яка функція відповідає піднесеню до степеня числа");

				  strcpy(temp1->data.answer[0], "pow()");
				  strcpy(temp1->data.answer[1], "sqrt()");
				  strcpy(temp1->data.answer[2], "**");
				  strcpy(temp1->data.answer[3], "fabs()");
				  strcpy(temp1->data.answer[4], "p()");
				  temp1->data.rightAnswer = 0;

				  temp->next = temp1;
				  temp1->prev = temp;
				  temp1->next = NULL;

				  list* temp2 = (list*)malloc(sizeof(list));
				  strcpy(temp2->data.question, "Яка функція відповідає за знахождення модуля числа");
				  strcpy(temp2->data.answer[0], "fabs()");
				  strcpy(temp2->data.answer[1], "sqrt()");
				  strcpy(temp2->data.answer[2], "| |");
				  strcpy(temp2->data.answer[3], "pow()");
				  strcpy(temp2->data.answer[4], "p()");
				  temp2->data.rightAnswer = 0;

				  temp1->next = temp2;
				  temp2->prev = temp1;
				  temp2->next = NULL;

				  list* temp3 = (list*)malloc(sizeof(list));
				  strcpy(temp3->data.question, "Як оголошується символьний тип даних");
				  strcpy(temp3->data.answer[0], "float");
				  strcpy(temp3->data.answer[1], "double");
				  strcpy(temp3->data.answer[2], "char");
				  strcpy(temp3->data.answer[3], "int");
				  strcpy(temp3->data.answer[4], "printf");
				  temp3->data.rightAnswer = 2;

				  temp2->next = temp3;
				  temp3->prev = temp2;
				  temp3->next = NULL;

				  list* temp4 = (list*)malloc(sizeof(list));
				  strcpy(temp4->data.question, "Яка функція використовується для виведення інформації у мові С");
				  strcpy(temp4->data.answer[0], "scanf");
				  strcpy(temp4->data.answer[1], "printf");
				  strcpy(temp4->data.answer[2], "char");
				  strcpy(temp4->data.answer[3], "fscanf");
				  strcpy(temp4->data.answer[4], "string");
				  temp4->data.rightAnswer = 1;

				  temp3->next = temp4;
				  temp4->prev = temp3;
				  temp4->next = NULL;

				  list* temp5 = (list*)malloc(sizeof(list));
				  strcpy(temp5->data.question, "Який елемент графічного інтерфейсу використовується для випадаючого списку");
				  strcpy(temp5->data.answer[0], "label");
				  strcpy(temp5->data.answer[1], "radiobutton");
				  strcpy(temp5->data.answer[2], "listbox");
				  strcpy(temp5->data.answer[3], "combobox");
				  strcpy(temp5->data.answer[4], "button");
				  temp5->data.rightAnswer = 3;

				  temp4->next = temp5;
				  temp5->prev = temp4;
				  temp5->next = NULL;

				  list* temp6 = (list*)malloc(sizeof(list));
				  strcpy(temp6->data.question, "Яка функція слугує для виведення інформації у файл");
				  strcpy(temp6->data.answer[0], "fprintf");
				  strcpy(temp6->data.answer[1], "fscanf");
				  strcpy(temp6->data.answer[2], "scanf");
				  strcpy(temp6->data.answer[3], "printf");
				  strcpy(temp6->data.answer[4], "cout");
				  temp6->data.rightAnswer = 0;

				  temp5->next = temp6;
				  temp6->prev = temp5;
				  temp6->next = NULL;

				  list* temp7 = (list*)malloc(sizeof(list));
				  strcpy(temp7->data.question, "Який тип даних використовується для цілочисельних значень");
				  strcpy(temp7->data.answer[0], "int");
				  strcpy(temp7->data.answer[1], "float");
				  strcpy(temp7->data.answer[2], "char");
				  strcpy(temp7->data.answer[3], "string");
				  strcpy(temp7->data.answer[4], "double");
				  temp7->data.rightAnswer = 0;

				  temp6->next = temp7;
				  temp7->prev = temp6;
				  temp7->next = NULL;

				  list* temp8 = (list*)malloc(sizeof(list));
				  strcpy(temp8->data.question, "Який з наведених варіантів правильний для запису циклу for");
				  strcpy(temp8->data.answer[0], "for(i=0; i<5; i++)");
				  strcpy(temp8->data.answer[1], "for(i++)");
				  strcpy(temp8->data.answer[2], "for(i=n; i++)");
				  strcpy(temp8->data.answer[3], "for(i<n; i++)");
				  strcpy(temp8->data.answer[4], "for(i; i++)");
				  temp8->data.rightAnswer = 0;

				  temp7->next = temp8;
				  temp8->prev = temp7;
				  temp8->next = NULL;

				  return head;
			  }

			  void save(list* head)
			  {
				  FILE* f;
				  f = fopen("kurs.txt", "wb");
				  while (head != NULL)
				  {
					  fwrite(&head->data, sizeof(Ddata), 1, f);
					  head = head->next;
				  }
				  fclose(f);
				  return;
			  }

			  list* createelement(Ddata data)
			  {
				  list* newElement = (list*)malloc(sizeof(list));
				  for (int i = 0; i < 5; i++)
				  {
					  strcpy(newElement->data.answer[i], data.answer[i]);
				  }
				  strcpy(newElement->data.question, data.question);
				  newElement->data.rightAnswer = data.rightAnswer;

				  newElement->next = NULL;
				  newElement->prev = NULL;
				  return newElement;
			  }

			  void addToEnd(list* newElement)
			  {
				  if (head == NULL)
				  {
					  head = newElement;
				  }
				  else
				  {
					  list* temp = head;
					  while (temp->next != NULL)
						  temp = temp->next;

					  temp->next = newElement;
					  newElement->prev = temp;
				  }
			  }

			  list* readFromFile()
			  {
				  FILE* f;
				  Ddata data;
				  list* temp;
				  f = fopen("kurs.txt", "rb");
				  fread(&data, sizeof(Ddata), 1, f);
				  while (!feof(f))
				  {
					  temp = createelement(data);
					  addToEnd(temp);
					  fread(&data, sizeof(Ddata), 1, f);
				  }
				  fclose(f);
				  return head;
			  }

			  void displayElement(array <RadioButton^>^ rb, list* temp)
			  {
				  for (int i = 0; i < rb->Length; i++)
				  {
					  rb[i]->Text = gcnew String(temp->data.answer[i], 0, strlen(temp->data.answer[i]));
				  }
				  label1->Text = gcnew String(temp->data.question, 0, strlen(temp->data.question));
			  }

			  list* next(list* head, list* cur)
			  {
				  if (ifPressedNext == false)
				  {
					  cur = head;
					  ifPressedNext = true;
				  }

				  if (cur->next != NULL)
				  {
					  cur = cur->next;
					  displayElement(rb, cur);
				  }
				  else
				  {
					  //2 or 3
					 // button2->Enabled = true;
					  MessageBox::Show("це остання питання");
				  }
				  return cur;
			  }

			  list* prev(list* head, list* cur)
			  {
				  if (ifPressedNext == true)
				  {
					  if (cur->prev == NULL)
					  {
						  MessageBox::Show("це перше питання");
						  return head;
					  }
					  else
					  {
						  cur = cur->next;
						  displayElement(rb, cur);
					  }
				  }
				  else
				  {
					  MessageBox::Show("це перше питання!");
					  return head;
				  }
				  return cur;
			  }

			  list* deleteCurrentElement(list* cur)
			  {
				  if (cur->next == NULL && cur->prev==NULL) //1 element in list
				  {
					  free(cur);
					  MessageBox::Show("Список порожній");
					  head = NULL;
				  }
				  else if (cur->next == NULL) //last element
				  {
					  cur = prev(head, cur);
					  free(cur->next);
					  cur->next == NULL;
				  }
				  else if (cur == head) //first element
				  {
					  head = head->next;
					  free(head->prev);
					  head->prev = NULL;
					  cur = head;
					  displayElement(rb, cur);
					  return head;
				  }
				  else //budiakyj element
				  {
					  list* previous;
					  list* temp = cur;

					  previous = cur->prev;
					  cur = next(head, cur);
					  previous->next = cur;
					  cur->prev = previous;
					  free(temp);
				  }
				  return cur;
			  }

			  void clearRb(array <RadioButton^>^ rb)
			  {
				  for (int i = 0; i < 5; i++)
				  {
					  rb[i]->Checked = false;
				  }
			  }

			  void MinAndSec(int* min, int* sec)
			  {
				  *sec = *sec - 1;
				  if (*sec == -1)
				  {
					  *min = *min - 1;
					  *sec = 59;
				  }
			  }

			  void writeinformation(String^ studName, int CountRightAnswer)
			  {
				  FILE* f;
				  f = fopen("mark.txt", "a");

				  fprintf(f, "\n%s %i", (char*)(void*)Marshal::StringToHGlobalAnsi(studName), CountRightAnswer);
				  fclose(f);
			  }

			  int* randAnswer(int* m, int k, int* result)
			  {
				  srand(time(NULL));
				  int a = rand() % k;
				  int* t = (int*)malloc(sizeof(int) * (k - 1));
				  for (int i = 0, j = 0; i < k; i++)
				  {
					  if (i == a)
					  {
						  result[k - 1] = m[a];
						  continue;
					  }
					  t[j++] = m[i];
				  }
				  if (k > 1)
				  {
					  randAnswer(t, k - 1, result);
				  }
				  free(t);
				  return result;
			  }

private: System::Void student_Load(System::Object^ sender, System::EventArgs^ e) {
/*	head = init();
	save(head);*/
}
private: System::Void тестуванняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Visible = false;
	panel1->Visible = true;
	навчальнийМатеріалToolStripMenuItem->Enabled = false;

	timer1->Start();
	head = readFromFile();
	cur = head;

	displayElement(rb, cur);
}
private: System::Void навчальнийМатеріалToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	richTextBox1->LoadFile("file.txt", RichTextBoxStreamType::PlainText);
	//richTextBox1->Text = "Windows Forms — інтерфейс програмування додатків (API), відповідальний за графічний інтерфейс користувача і є частиною Microsoft .NET Framework. Даний інтерфейс спрощує доступ до елементів інтерфейсу Microsoft Windows за допомогою створення обгортки для Win32 API в керованому коді.\nВсередині.NET Framework, Windows Forms реалізується в межах простору імен System.Windows.Forms.\nОсновні елементи управління Windows Forms.\nButton являє стандартну кнопку, яку користувач може натиснути для виконання дій.\nComboBox відображає дані в випадаючому полі зі списком.\nDataGridView надає гнучку, расширяемую систему для відображення і редагування табличних даних.\nLabel відображає текст, який не може бути змінений користувачем.\nRadioButton представляє набір з двох або більше взаємовиключних варіантів вибору для користувача.";		
		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	cur = next(head, cur);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	cur = prev(head, cur);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (rb[0]->Checked || rb[1]->Checked || rb[2]->Checked || rb[3]->Checked || rb[4]->Checked)
	{
		for (int i = 0; i < 5; i++)
		{
			if (rb[i]->Checked && cur->data.rightAnswer == i)
			{
				CountRightAnswer++;
			//	MessageBox::Show()
			}
		}
		cur = deleteCurrentElement(cur);
		clearRb(rb);
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	pin_ptr<int> managed_sec = &sec;
	pin_ptr<int> managed_min = &min;
	MinAndSec(managed_min, managed_sec);

	label2->Text = min.ToString();
	label3->Text = sec.ToString();

	if (sec == 0 && min == 0) // час закінчився
	{
		timer1->Stop();
		cur = head;
		while (head!=NULL)
		{
			cur = deleteCurrentElement(cur);
		}
		head = NULL;
		MessageBox::Show("Кількість вірних відповідей " + CountRightAnswer.ToString());
		writeinformation(studName, CountRightAnswer);
		student::Close();
	}
	else if (head == NULL) // список порожній а час ще є
	{
		timer1->Stop();
		MessageBox::Show("Кількість вірних відповідей " + CountRightAnswer.ToString());
		writeinformation(studName, CountRightAnswer);
		student::Close();
	}
	
}
private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	student::Close();
}
};
}
