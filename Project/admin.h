#pragma once
#include <string.h>
#include <stdlib.h>
#include "msclr\marshal.h"
#include "Header.h"

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
	/// Сводка для admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
		{
			InitializeComponent();
			MyMembersInitText();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: array<TextBox^>^ tb;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(52, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(402, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(52, 204);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Prev";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &admin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(138, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Створити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &admin::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(230, 258);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Редагувати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &admin::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(326, 258);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Видалити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &admin::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(435, 249);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &admin::button5_Click);
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 297);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"admin";
			this->Text = L"admin";
			this->Load += gcnew System::EventHandler(this, &admin::admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void MyMembersInitText()
		{
			tb = gcnew cli::array<TextBox^>(5);
			for (int i = 0; i < tb->Length; i++)
			{
				tb[i] = gcnew TextBox();
				tb[i]->Location = System::Drawing::Point(65, 60 + 25 * i);
				tb[i]->Size = System::Drawing::Size(200, 20);
				this->Controls->Add(tb[i]);
			}
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

		/*void displayElement(array <RadioButton^>^ rb, list* temp)
		{
			for (int i = 0; i < rb->Length; i++)
			{
				rb[i]->Text = gcnew String(temp->data.answer[i], 0, strlen(temp->data.answer[i]));
			}
			label1->Text = gcnew String(temp->data.question, 0, strlen(temp->data.question));
		}*/
		void displayElement(array <TextBox^>^ tb, list* temp)
		{
			for (int i = 0; i < tb->Length; i++)
				tb[i]->Text = gcnew String(temp->data.answer[i], 0, strlen(temp->data.answer[i]));
			textBox1->Text = gcnew String(temp->data.question, 0, strlen(temp->data.question));
			textBox2->Text = temp->data.rightAnswer.ToString();
			return;
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
				displayElement(tb, cur);
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
					displayElement(tb, cur);
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
			if (cur->next == NULL && cur->prev == NULL) //1 element in list
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
				displayElement(tb, cur);
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

		list* readModifiedElement(list* cur)
		{
			strcpy(cur->data.answer[0], (char*)(void*)Marshal::StringToHGlobalAnsi(tb[0]->Text));
			strcpy(cur->data.answer[1], (char*)(void*)Marshal::StringToHGlobalAnsi(tb[1]->Text));
			strcpy(cur->data.answer[2], (char*)(void*)Marshal::StringToHGlobalAnsi(tb[2]->Text));
			strcpy(cur->data.answer[3], (char*)(void*)Marshal::StringToHGlobalAnsi(tb[3]->Text));
			strcpy(cur->data.answer[4], (char*)(void*)Marshal::StringToHGlobalAnsi(tb[4]->Text));

			strcpy(cur->data.question, (char*)(void*)Marshal::StringToHGlobalAnsi(textBox1->Text));
			cur->data.rightAnswer = Convert::ToInt16(textBox2->Text);
			return cur;
		}

#pragma endregion
		list* head = NULL;
		list* cur;
		bool ifPressedNext = false;
		bool button2WasClicked = false;

	private: System::Void admin_Load(System::Object^ sender, System::EventArgs^ e) {
		head = readFromFile();
		displayElement(tb, head);

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	cur = prev(head, cur);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	cur = next(head, cur);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tb[0]->Text != "" && tb[1]->Text != "" && tb[2]->Text != "" && tb[3]->Text != "" && tb[4]->Text != "" &&
		textBox1->Text != "" && textBox2->Text != "")
	{
		cur = readModifiedElement(cur);
		save(head);
		MessageBox::Show("Питання збережено");
	}
	else
	{
		MessageBox::Show(this, "Заповніть всі поля");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ message = "Видалити елемент";
	String^ caption = "Видалення";
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result;
	result = MessageBox::Show(this, message, caption, buttons);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		cur = deleteCurrentElement(cur);
		save(head);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button2WasClicked == false)
	{
		button1->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;

		for (int i = 0; i < tb->Length; i++)
		{
			tb[i]->Text = "";
		}
		textBox1->Text = "";
		textBox2->Text = "";
		button2->Text = "Зберегти";
		button2WasClicked = true;
	}
	else
	{
		list* temp;
		Ddata dat;
		if (tb[0]->Text != "" && tb[1]->Text != "" && tb[2]->Text != "" && tb[3]->Text != "" && tb[4]->Text != "" &&
			textBox1->Text != "" && textBox2->Text != "")
		{
			strcpy(dat.question, (char*)(void*)Marshal::StringToHGlobalAnsi(textBox1->Text));
			dat.rightAnswer = Convert::ToInt16(textBox2->Text);
			for (int i = 0; i < tb->Length; i++)
			{
				strcpy(dat.answer[i], (char*)(void*)Marshal::StringToHGlobalAnsi(tb[i]->Text));
			}
			temp = createelement(dat);
			addToEnd(temp);
			save(head);
			MessageBox::Show("Питання створено");
			while (cur->next != NULL)
			{
				cur = cur->next;
			}
			displayElement(tb, cur);

			button1->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button2->Text = "Створити";
			button2WasClicked = false;
		}
		else
		{
			MessageBox::Show(this, "Заповніть всі поля");
		}
	}
}
};
}
