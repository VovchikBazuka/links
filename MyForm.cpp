#include "MyForm.h"
#include "AuthForm.h"
#include "TodoList.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MyApplication;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyForm form;
	Application::Run(% form);
}

System::Void MyForm::link_auth_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	AuthForm^ form = gcnew AuthForm(this);
	form->ShowDialog();
	this->Close();
}