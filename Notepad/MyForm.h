#pragma once

namespace Notepad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  otwórzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszJakToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wytnijCTRLXToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  kopiujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wkleiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zawijanieWierszyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  czcionkaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  informacjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aktualizujToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  Content;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otwórzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszJakToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wytnijCTRLXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kopiujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wkleiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zawijanieWierszyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->czcionkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aktualizujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Content = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->formatToolStripMenuItem, this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->nowyToolStripMenuItem,
					this->otwórzToolStripMenuItem, this->zapiszToolStripMenuItem, this->zapiszJakToolStripMenuItem, this->toolStripMenuItem1, this->zakoñczToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"&Plik";
			this->plikToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::plikToolStripMenuItem_Click);
			// 
			// nowyToolStripMenuItem
			// 
			this->nowyToolStripMenuItem->Name = L"nowyToolStripMenuItem";
			this->nowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nowyToolStripMenuItem->Text = L"&Nowy    Ctrl+N";
			// 
			// otwórzToolStripMenuItem
			// 
			this->otwórzToolStripMenuItem->Name = L"otwórzToolStripMenuItem";
			this->otwórzToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->otwórzToolStripMenuItem->Text = L"&Otwórz...    Ctrl+O";
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapi&sz    Ctrl+S";
			// 
			// zapiszJakToolStripMenuItem
			// 
			this->zapiszJakToolStripMenuItem->Name = L"zapiszJakToolStripMenuItem";
			this->zapiszJakToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zapiszJakToolStripMenuItem->Text = L"Z&apisz jak...";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(177, 6);
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zakoñczToolStripMenuItem->Text = L"Zakoñcz";
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->wytnijCTRLXToolStripMenuItem,
					this->kopiujToolStripMenuItem, this->wkleiToolStripMenuItem
			});
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"&Edycja";
			// 
			// wytnijCTRLXToolStripMenuItem
			// 
			this->wytnijCTRLXToolStripMenuItem->Name = L"wytnijCTRLXToolStripMenuItem";
			this->wytnijCTRLXToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->wytnijCTRLXToolStripMenuItem->Text = L"&Wytnij    Ctrl+X";
			// 
			// kopiujToolStripMenuItem
			// 
			this->kopiujToolStripMenuItem->Name = L"kopiujToolStripMenuItem";
			this->kopiujToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->kopiujToolStripMenuItem->Text = L"&Kopiuj    Ctrl+C";
			// 
			// wkleiToolStripMenuItem
			// 
			this->wkleiToolStripMenuItem->Name = L"wkleiToolStripMenuItem";
			this->wkleiToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->wkleiToolStripMenuItem->Text = L"Wkl&ej    Ctrl+V";
			// 
			// formatToolStripMenuItem
			// 
			this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zawijanieWierszyToolStripMenuItem,
					this->czcionkaToolStripMenuItem
			});
			this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
			this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->formatToolStripMenuItem->Text = L"For&mat";
			// 
			// zawijanieWierszyToolStripMenuItem
			// 
			this->zawijanieWierszyToolStripMenuItem->Name = L"zawijanieWierszyToolStripMenuItem";
			this->zawijanieWierszyToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->zawijanieWierszyToolStripMenuItem->Text = L"&Zawijanie wierszy";
			// 
			// czcionkaToolStripMenuItem
			// 
			this->czcionkaToolStripMenuItem->Name = L"czcionkaToolStripMenuItem";
			this->czcionkaToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->czcionkaToolStripMenuItem->Text = L"&Czcionka...";
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"&Widok";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacjeToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomo&c";
			// 
			// informacjeToolStripMenuItem
			// 
			this->informacjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->oToolStripMenuItem,
					this->aktualizujToolStripMenuItem
			});
			this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
			this->informacjeToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->informacjeToolStripMenuItem->Text = L"I&nformacje";
			// 
			// oToolStripMenuItem
			// 
			this->oToolStripMenuItem->Name = L"oToolStripMenuItem";
			this->oToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->oToolStripMenuItem->Text = L"O p&rogramie";
			this->oToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oToolStripMenuItem_Click);
			// 
			// aktualizujToolStripMenuItem
			// 
			this->aktualizujToolStripMenuItem->Name = L"aktualizujToolStripMenuItem";
			this->aktualizujToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->aktualizujToolStripMenuItem->Text = L"&Aktualizuj";
			// 
			// Content
			// 
			this->Content->AcceptsTab = true;
			this->Content->BackColor = System::Drawing::Color::DimGray;
			this->Content->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Content->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Content->Location = System::Drawing::Point(0, 24);
			this->Content->Name = L"Content";
			this->Content->Size = System::Drawing::Size(984, 437);
			this->Content->TabIndex = 4;
			this->Content->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(984, 461);
			this->Controls->Add(this->Content);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"Notepad";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void plikToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void plikToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void oToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	
	openFileDialog1->Title = "Open Text files";
	openFileDialog1->ShowDialog();

	//String^ FilePath = openFileDialog1->FileName;
	
}
};
}
