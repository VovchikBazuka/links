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
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
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
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textbox_login;
	private: System::Windows::Forms::TextBox^ textbox_password;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btn_register;

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
	private: System::Windows::Forms::LinkLabel^ link_rights;
	private: System::Windows::Forms::LinkLabel^ link_auth;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::Button^ btn_show_pass;
		   bool is_drag;
		   bool isVisible = true;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->label_logo = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->textbox_login = (gcnew System::Windows::Forms::TextBox());
			   this->textbox_password = (gcnew System::Windows::Forms::TextBox());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->btn_register = (gcnew System::Windows::Forms::Button());
			   this->btn_exit = (gcnew System::Windows::Forms::Button());
			   this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			   this->link_rights = (gcnew System::Windows::Forms::LinkLabel());
			   this->link_auth = (gcnew System::Windows::Forms::LinkLabel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->btn_show_pass = (gcnew System::Windows::Forms::Button());
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
			   this->label_logo->Location = System::Drawing::Point(64, 70);
			   this->label_logo->Name = L"label_logo";
			   this->label_logo->Size = System::Drawing::Size(313, 62);
			   this->label_logo->TabIndex = 0;
			   this->label_logo->Text = L"Регистрация";
			   this->label_logo->Click += gcnew System::EventHandler(this, &MyForm::label_logo_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->ForeColor = System::Drawing::Color::Gray;
			   this->label2->Location = System::Drawing::Point(75, 136);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(95, 18);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Регистрация";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::Transparent;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(75, 183);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(64, 24);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Логин";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::Transparent;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(75, 277);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(76, 24);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Пароль";
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->panel1->Controls->Add(this->textbox_login);
			   this->panel1->Location = System::Drawing::Point(64, 210);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(236, 53);
			   this->panel1->TabIndex = 5;
			   // 
			   // textbox_login
			   // 
			   this->textbox_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->textbox_login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textbox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textbox_login->ForeColor = System::Drawing::Color::White;
			   this->textbox_login->Location = System::Drawing::Point(11, 14);
			   this->textbox_login->Name = L"textbox_login";
			   this->textbox_login->Size = System::Drawing::Size(210, 22);
			   this->textbox_login->TabIndex = 5;
			   // 
			   // textbox_password
			   // 
			   this->textbox_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->textbox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textbox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textbox_password->ForeColor = System::Drawing::Color::White;
			   this->textbox_password->Location = System::Drawing::Point(11, 14);
			   this->textbox_password->Name = L"textbox_password";
			   this->textbox_password->Size = System::Drawing::Size(210, 22);
			   this->textbox_password->TabIndex = 5;
			   this->textbox_password->UseSystemPasswordChar = true;
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->panel2->Controls->Add(this->textbox_password);
			   this->panel2->Location = System::Drawing::Point(64, 304);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(236, 53);
			   this->panel2->TabIndex = 6;
			   // 
			   // btn_register
			   // 
			   this->btn_register->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)));
			   this->btn_register->FlatAppearance->BorderSize = 0;
			   this->btn_register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_register->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				   static_cast<System::Int32>(static_cast<System::Byte>(32)));
			   this->btn_register->Location = System::Drawing::Point(64, 415);
			   this->btn_register->Name = L"btn_register";
			   this->btn_register->Size = System::Drawing::Size(236, 43);
			   this->btn_register->TabIndex = 7;
			   this->btn_register->Text = L"Регистрация";
			   this->btn_register->UseVisualStyleBackColor = false;
			   this->btn_register->Click += gcnew System::EventHandler(this, &MyForm::btn_register_Click);
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
			   this->btn_exit->Location = System::Drawing::Point(828, 11);
			   this->btn_exit->Name = L"btn_exit";
			   this->btn_exit->Size = System::Drawing::Size(55, 49);
			   this->btn_exit->TabIndex = 8;
			   this->btn_exit->Text = L"X";
			   this->btn_exit->UseVisualStyleBackColor = false;
			   this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			   // 
			   // checkBox
			   // 
			   this->checkBox->AutoSize = true;
			   this->checkBox->BackColor = System::Drawing::Color::Transparent;
			   this->checkBox->Checked = true;
			   this->checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			   this->checkBox->ForeColor = System::Drawing::Color::White;
			   this->checkBox->Location = System::Drawing::Point(64, 379);
			   this->checkBox->Name = L"checkBox";
			   this->checkBox->Size = System::Drawing::Size(83, 17);
			   this->checkBox->TabIndex = 9;
			   this->checkBox->Text = L"Я прочитал";
			   this->checkBox->UseVisualStyleBackColor = false;
			   this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			   // 
			   // link_rights
			   // 
			   this->link_rights->ActiveLinkColor = System::Drawing::Color::Silver;
			   this->link_rights->AutoSize = true;
			   this->link_rights->BackColor = System::Drawing::Color::Transparent;
			   this->link_rights->LinkColor = System::Drawing::Color::White;
			   this->link_rights->Location = System::Drawing::Point(142, 380);
			   this->link_rights->Name = L"link_rights";
			   this->link_rights->Size = System::Drawing::Size(166, 13);
			   this->link_rights->TabIndex = 10;
			   this->link_rights->TabStop = true;
			   this->link_rights->Text = L"пользовательское соглашение";
			   this->link_rights->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->link_rights->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::link_rights_LinkClicked);
			   // 
			   // link_auth
			   // 
			   this->link_auth->AutoSize = true;
			   this->link_auth->BackColor = System::Drawing::Color::Transparent;
			   this->link_auth->ForeColor = System::Drawing::Color::White;
			   this->link_auth->LinkColor = System::Drawing::Color::White;
			   this->link_auth->Location = System::Drawing::Point(156, 471);
			   this->link_auth->Name = L"link_auth";
			   this->link_auth->Size = System::Drawing::Size(90, 13);
			   this->link_auth->TabIndex = 12;
			   this->link_auth->TabStop = true;
			   this->link_auth->Text = L"Авторизоваться";
			   this->link_auth->VisitedLinkColor = System::Drawing::Color::White;
			   this->link_auth->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::link_auth_LinkClicked);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(65, 471);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(80, 13);
			   this->label1->TabIndex = 11;
			   this->label1->Text = L"Есть аккаунт\?";
			   // 
			   // btn_show_pass
			   // 
			   this->btn_show_pass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				   static_cast<System::Int32>(static_cast<System::Byte>(72)));
			   this->btn_show_pass->FlatAppearance->BorderSize = 0;
			   this->btn_show_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_show_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_show_pass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(87)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				   static_cast<System::Int32>(static_cast<System::Byte>(32)));
			   this->btn_show_pass->Location = System::Drawing::Point(321, 308);
			   this->btn_show_pass->Name = L"btn_show_pass";
			   this->btn_show_pass->Size = System::Drawing::Size(113, 43);
			   this->btn_show_pass->TabIndex = 13;
			   this->btn_show_pass->Text = L"Показать";
			   this->btn_show_pass->UseVisualStyleBackColor = false;
			   this->btn_show_pass->Click += gcnew System::EventHandler(this, &MyForm::btn_show_pass_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(897, 500);
			   this->Controls->Add(this->btn_show_pass);
			   this->Controls->Add(this->link_auth);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->link_rights);
			   this->Controls->Add(this->checkBox);
			   this->Controls->Add(this->btn_exit);
			   this->Controls->Add(this->btn_register);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label_logo);
			   this->Controls->Add(this->panel1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"MyForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Программа itProger";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			   this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			   this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
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

	private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox->Checked) {
			btn_register->Enabled = true;
		}
		else {
			btn_register->Enabled = false;
			MessageBox::Show(this, "Пользовательское соглашение не установлено", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void link_rights_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		if (MessageBox::Show("Хотите перейти на сайт и прочитать пользовательское соглашение?", "Права", MessageBoxButtons::OKCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
		{
			System::Diagnostics::Process::Start("https://google.com");
			link_rights->LinkVisited = true;
		}
		else
		{
			return;
		}
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ActiveControl = label_logo;
	}
	private: System::Void link_auth_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void btn_register_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = textbox_login->Text->Trim();
		String^ password = textbox_password->Text->Trim();

		if (login->Equals("")) {
			MessageBox::Show(this, "Логин не заполнен", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (password->Equals("")) {
			MessageBox::Show(this, "Пароль не заполнен", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		DB* db = new DB;
		db->add_user(login, password);
		delete db;

		textbox_login->Text = "";
		textbox_password->Text = "";
		btn_register->Text = "Все готово!";

	}
	private: System::Void btn_show_pass_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (isVisible)
		{
			isVisible = false;
			textbox_password->UseSystemPasswordChar = isVisible;
		}
		else
		{
			isVisible = true;
			textbox_password->UseSystemPasswordChar = isVisible;
		}
	}
private: System::Void label_logo_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
