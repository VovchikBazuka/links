#pragma once
#include "DB.h"

namespace MyApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class TodoList : public System::Windows::Forms::Form
	{
	public:
		TodoList(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TodoList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_logo;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textbox_task;
	private: System::Windows::Forms::Button^ btn_add_task;








	private: System::Windows::Forms::Button^ btn_exit;




	protected:

	protected:
















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		Point pos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textbox_edit_task;
	private: System::Windows::Forms::Button^ btn_edit_task;







		   bool is_drag;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TodoList::typeid));
			   this->label_logo = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->textbox_task = (gcnew System::Windows::Forms::TextBox());
			   this->btn_add_task = (gcnew System::Windows::Forms::Button());
			   this->btn_exit = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->btn_delete = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->textbox_edit_task = (gcnew System::Windows::Forms::TextBox());
			   this->btn_edit_task = (gcnew System::Windows::Forms::Button());
			   this->panel1->SuspendLayout();
			   this->panel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // label_logo
			   // 
			   this->label_logo->AutoSize = true;
			   this->label_logo->BackColor = System::Drawing::Color::Transparent;
			   this->label_logo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_logo->ForeColor = System::Drawing::Color::White;
			   this->label_logo->Location = System::Drawing::Point(30, 84);
			   this->label_logo->Name = L"label_logo";
			   this->label_logo->Size = System::Drawing::Size(138, 62);
			   this->label_logo->TabIndex = 0;
			   this->label_logo->Text = L"Todo";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->ForeColor = System::Drawing::Color::Gray;
			   this->label2->Location = System::Drawing::Point(41, 150);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(90, 18);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Список дел";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::Transparent;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(41, 197);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(148, 24);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Добавить дело";
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->panel1->Controls->Add(this->textbox_task);
			   this->panel1->Location = System::Drawing::Point(30, 224);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(236, 53);
			   this->panel1->TabIndex = 5;
			   // 
			   // textbox_task
			   // 
			   this->textbox_task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->textbox_task->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textbox_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textbox_task->ForeColor = System::Drawing::Color::White;
			   this->textbox_task->Location = System::Drawing::Point(11, 16);
			   this->textbox_task->Name = L"textbox_task";
			   this->textbox_task->Size = System::Drawing::Size(210, 22);
			   this->textbox_task->TabIndex = 5;
			   // 
			   // btn_add_task
			   // 
			   this->btn_add_task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)));
			   this->btn_add_task->FlatAppearance->BorderSize = 0;
			   this->btn_add_task->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_add_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_add_task->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				   static_cast<System::Int32>(static_cast<System::Byte>(32)));
			   this->btn_add_task->Location = System::Drawing::Point(30, 300);
			   this->btn_add_task->Name = L"btn_add_task";
			   this->btn_add_task->Size = System::Drawing::Size(101, 43);
			   this->btn_add_task->TabIndex = 7;
			   this->btn_add_task->Text = L"Добавить";
			   this->btn_add_task->UseVisualStyleBackColor = false;
			   this->btn_add_task->Click += gcnew System::EventHandler(this, &TodoList::btn_add_task_Click);
			   // 
			   // btn_exit
			   // 
			   this->btn_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->btn_exit->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			   this->btn_exit->FlatAppearance->BorderSize = 3;
			   this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_exit->ForeColor = System::Drawing::Color::White;
			   this->btn_exit->Location = System::Drawing::Point(220, 11);
			   this->btn_exit->Name = L"btn_exit";
			   this->btn_exit->Size = System::Drawing::Size(55, 49);
			   this->btn_exit->TabIndex = 8;
			   this->btn_exit->Text = L"X";
			   this->btn_exit->UseVisualStyleBackColor = false;
			   this->btn_exit->Click += gcnew System::EventHandler(this, &TodoList::btn_exit_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(41, 361);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(136, 24);
			   this->label1->TabIndex = 9;
			   this->label1->Text = L"Ваши задания";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->comboBox1->ForeColor = System::Drawing::Color::White;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(30, 405);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(236, 33);
			   this->comboBox1->TabIndex = 10;
			   this->comboBox1->Click += gcnew System::EventHandler(this, &TodoList::comboBox1_Click);
			   // 
			   // btn_delete
			   // 
			   this->btn_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)));
			   this->btn_delete->FlatAppearance->BorderSize = 0;
			   this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_delete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				   static_cast<System::Int32>(static_cast<System::Byte>(32)));
			   this->btn_delete->Location = System::Drawing::Point(165, 300);
			   this->btn_delete->Name = L"btn_delete";
			   this->btn_delete->Size = System::Drawing::Size(101, 43);
			   this->btn_delete->TabIndex = 11;
			   this->btn_delete->Text = L"Удалить";
			   this->btn_delete->UseVisualStyleBackColor = false;
			   this->btn_delete->Click += gcnew System::EventHandler(this, &TodoList::btn_delete_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::Transparent;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(41, 467);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(180, 24);
			   this->label4->TabIndex = 12;
			   this->label4->Text = L"Изменить задание";
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->panel2->Controls->Add(this->textbox_edit_task);
			   this->panel2->Location = System::Drawing::Point(30, 503);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(236, 53);
			   this->panel2->TabIndex = 6;
			   // 
			   // textbox_edit_task
			   // 
			   this->textbox_edit_task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->textbox_edit_task->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textbox_edit_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textbox_edit_task->ForeColor = System::Drawing::Color::White;
			   this->textbox_edit_task->Location = System::Drawing::Point(11, 16);
			   this->textbox_edit_task->Name = L"textbox_edit_task";
			   this->textbox_edit_task->Size = System::Drawing::Size(210, 22);
			   this->textbox_edit_task->TabIndex = 5;
			   // 
			   // btn_edit_task
			   // 
			   this->btn_edit_task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)));
			   this->btn_edit_task->FlatAppearance->BorderSize = 0;
			   this->btn_edit_task->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_edit_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_edit_task->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				   static_cast<System::Int32>(static_cast<System::Byte>(32)));
			   this->btn_edit_task->Location = System::Drawing::Point(30, 573);
			   this->btn_edit_task->Name = L"btn_edit_task";
			   this->btn_edit_task->Size = System::Drawing::Size(101, 43);
			   this->btn_edit_task->TabIndex = 13;
			   this->btn_edit_task->Text = L"Изменить";
			   this->btn_edit_task->UseVisualStyleBackColor = false;
			   this->btn_edit_task->Click += gcnew System::EventHandler(this, &TodoList::btn_edit_task_Click);
			   // 
			   // TodoList
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::Color::Black;
			   this->ClientSize = System::Drawing::Size(289, 470);
			   this->Controls->Add(this->btn_edit_task);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->btn_delete);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->btn_exit);
			   this->Controls->Add(this->btn_add_task);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label_logo);
			   this->Controls->Add(this->panel1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"TodoList";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Программа itProger";
			   this->Load += gcnew System::EventHandler(this, &TodoList::MyForm_Load);
			   this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &TodoList::MyForm_MouseDown);
			   this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TodoList::MyForm_MouseMove);
			   this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &TodoList::MyForm_MouseUp);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		is_drag = true;
		pos.X = e->X;
		pos.Y = e->Y;
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (is_drag) {
			Point currentPos = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentPos.X - pos.X, currentPos.Y - pos.Y);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		is_drag = false;
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ActiveControl = label_logo;
	}

	private: System::Void btn_add_task_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ task = textbox_task->Text->Trim();

		if (task->Equals("")) {
			MessageBox::Show(this, "Задание не заполнен", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		DB* db = new DB;
		db->add_task(task);
		comboBox1->DataSource = db->get_tasks();
		delete db;

		textbox_task->Text = "";
		btn_add_task->Text = "Готово";
	}
	private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Height += 170;

		if (comboBox1->Items->Count > 0)
			return;

		DB* db = new DB;
		comboBox1->DataSource = db->get_tasks();
		delete db;
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == nullptr)
			return;

		String^ task_to_delete = comboBox1->GetItemText(comboBox1->SelectedValue);
		DB* db = new DB;
		db->delete_task(task_to_delete);
		comboBox1->DataSource = db->get_tasks();
		delete db;
	}

	private: System::Void btn_edit_task_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == nullptr)
			return;

		String^ task_to_update = comboBox1->GetItemText(comboBox1->SelectedValue);
		DB* db = new DB;
		db->update_task(task_to_update, textbox_edit_task->Text->Trim());
		comboBox1->DataSource = db->get_tasks();
		textbox_edit_task->Text = "";
		this->Height -= 170;
		delete db;
	}
	};
}
