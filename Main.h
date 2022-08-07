#pragma once
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <algorithm>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <iostream> 
#include <cstring>
#include <limits>
#include <windows.h>
#include <string>
#include <utility>
#include <vector>
#include <windows.system.diagnostics.deviceportal.h>
#include <mshtmldiagnostics.h>


namespace loui_programming_ide {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Diagnostics;
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
          MessageBox(NULL, "connect to your discord", "click on yes");
		}

	protected:
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::Button^ xbtn;
	private:
	public: System::Windows::Forms::Button^ hidebtn;
	private: System::Windows::Forms::Button^ button1;

	private: System::ComponentModel::IContainer^ components;
	public:

	protected:


	protected:

	private:
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->xbtn = (gcnew System::Windows::Forms::Button());
			this->hidebtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(-3, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(645, 10);
			this->panel1->TabIndex = 0;
			this->xbtn->BackColor = System::Drawing::Color::Red;
			this->xbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->xbtn->ForeColor = System::Drawing::Color::White;
			this->xbtn->Location = System::Drawing::Point(599, 3);
			this->xbtn->Name = L"xbtn";
			this->xbtn->Size = System::Drawing::Size(33, 31);
			this->xbtn->TabIndex = 1;
			this->xbtn->Text = L"X";
			this->xbtn->UseVisualStyleBackColor = false;
			this->xbtn->Click += gcnew System::EventHandler(this, &Form1::xbtn_Click);
			this->hidebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->hidebtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->hidebtn->ForeColor = System::Drawing::Color::White;
			this->hidebtn->Location = System::Drawing::Point(560, 3);
			this->hidebtn->Name = L"hidebtn";
			this->hidebtn->Size = System::Drawing::Size(33, 31);
			this->hidebtn->TabIndex = 2;
			this->hidebtn->Text = L"-";
			this->hidebtn->UseVisualStyleBackColor = false;
			this->hidebtn->Click += gcnew System::EventHandler(this, &Form1::hidebtn_Click);
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
			static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 17.75F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(254, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Loui\'s IDE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
		static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->ClientSize = System::Drawing::Size(635, 315);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->hidebtn);
			this->Controls->Add(this->xbtn);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(177)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"loui's ide";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Page";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void xbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void hidebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WindowState == FormWindowState::Minimized)
		{
			Hide();
		}
	};
private: System::Void Fbutton_Click(System::Object^ sender, System::EventArgs^ e) {
//soon עוד כמה זמן הוסיף את הגירסא החדשה
}
};
}
