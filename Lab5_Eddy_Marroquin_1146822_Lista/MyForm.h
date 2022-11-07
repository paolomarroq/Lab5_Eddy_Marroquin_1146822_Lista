#pragma once
#pragma once
#include "List.h"
#include <iostream>
#include <sstream>
#include <windows.h>
#include <string.h>


namespace Lab5EddyMarroquin1146822 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lblList1;
	private: System::Windows::Forms::Label^ lblList2;
	private: System::Windows::Forms::Label^ lblList3;
	private: System::Windows::Forms::Label^ lblList4;
	private: System::Windows::Forms::Label^ lblList5;
	private: System::Windows::Forms::Label^ lblList6;
	private: System::Windows::Forms::Label^ lblList7;
	private: System::Windows::Forms::Label^ lblList8;
	private: System::Windows::Forms::Label^ lblList9;
	private: System::Windows::Forms::Label^ lblList10;
	private: System::Windows::Forms::GroupBox^ agregaralista;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ tBoxModValor;
	private: System::Windows::Forms::Button^ btnMod;
	private: System::Windows::Forms::TextBox^ tBoxModPos;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tBoxInsertarValor;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::TextBox^ tBoxInsertarPos;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ tBoxAgregar;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ buscarenlista;
	private: System::Windows::Forms::Label^ lblSiEsta;






	private: System::Windows::Forms::Label^ label22;


	private: System::Windows::Forms::TextBox^ tBoxBuscarValor;




	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ tBoxBuscar;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ lblBuscarValorValor;


	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ lblBuscarValorPos;



	private: System::Windows::Forms::Button^ btnBuscarValor;
	private: System::Windows::Forms::Label^ lblLastPos;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ lblLastValor;
	private: System::Windows::Forms::Button^ btnLast;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ tBoxLast;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ lblBuscarPosPos;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ lblBuscarPosValor;
	private: System::Windows::Forms::Button^ btnBuscarPos;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ tBoxBuscarPos;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::GroupBox^ eliminardelista;
	private: System::Windows::Forms::Button^ btnEliminarEn;
	private: System::Windows::Forms::TextBox^ tBoxEliminarEn;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::TextBox^ tBoxEliminar;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::GroupBox^ contadordelista;
	private: System::Windows::Forms::Label^ lblElementos;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Button^ btnContador;

	private: System::Windows::Forms::Button^ btnSalir;
private: System::Windows::Forms::Label^ lblEliminao;
private: System::Windows::Forms::Button^ btnVaciar;

private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ lblError;
private: System::Windows::Forms::Label^ lblNoEsta;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblList1 = (gcnew System::Windows::Forms::Label());
			this->lblList2 = (gcnew System::Windows::Forms::Label());
			this->lblList3 = (gcnew System::Windows::Forms::Label());
			this->lblList4 = (gcnew System::Windows::Forms::Label());
			this->lblList5 = (gcnew System::Windows::Forms::Label());
			this->lblList6 = (gcnew System::Windows::Forms::Label());
			this->lblList7 = (gcnew System::Windows::Forms::Label());
			this->lblList8 = (gcnew System::Windows::Forms::Label());
			this->lblList9 = (gcnew System::Windows::Forms::Label());
			this->lblList10 = (gcnew System::Windows::Forms::Label());
			this->agregaralista = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tBoxModValor = (gcnew System::Windows::Forms::TextBox());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->tBoxModPos = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tBoxInsertarValor = (gcnew System::Windows::Forms::TextBox());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->tBoxInsertarPos = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->tBoxAgregar = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->buscarenlista = (gcnew System::Windows::Forms::GroupBox());
			this->lblNoEsta = (gcnew System::Windows::Forms::Label());
			this->lblLastPos = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->lblLastValor = (gcnew System::Windows::Forms::Label());
			this->btnLast = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->tBoxLast = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarPosPos = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarPosValor = (gcnew System::Windows::Forms::Label());
			this->btnBuscarPos = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tBoxBuscarPos = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarValorValor = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->lblBuscarValorPos = (gcnew System::Windows::Forms::Label());
			this->btnBuscarValor = (gcnew System::Windows::Forms::Button());
			this->lblSiEsta = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tBoxBuscarValor = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->tBoxBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->eliminardelista = (gcnew System::Windows::Forms::GroupBox());
			this->lblEliminao = (gcnew System::Windows::Forms::Label());
			this->btnVaciar = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->btnEliminarEn = (gcnew System::Windows::Forms::Button());
			this->tBoxEliminarEn = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->tBoxEliminar = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->contadordelista = (gcnew System::Windows::Forms::GroupBox());
			this->lblElementos = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnContador = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->agregaralista->SuspendLayout();
			this->buscarenlista->SuspendLayout();
			this->eliminardelista->SuspendLayout();
			this->contadordelista->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(387, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(324, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PRUEBA DE LISTAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Posicion:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(115, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(148, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(181, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(216, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(249, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(287, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(319, 162);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"7";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(350, 162);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 16);
			this->label10->TabIndex = 9;
			this->label10->Text = L"8";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(383, 162);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 16);
			this->label11->TabIndex = 10;
			this->label11->Text = L"9";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(412, 162);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"10";
			// 
			// lblList1
			// 
			this->lblList1->AutoSize = true;
			this->lblList1->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList1->Location = System::Drawing::Point(114, 187);
			this->lblList1->Name = L"lblList1";
			this->lblList1->Size = System::Drawing::Size(0, 24);
			this->lblList1->TabIndex = 12;
			// 
			// lblList2
			// 
			this->lblList2->AutoSize = true;
			this->lblList2->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList2->Location = System::Drawing::Point(147, 187);
			this->lblList2->Name = L"lblList2";
			this->lblList2->Size = System::Drawing::Size(0, 24);
			this->lblList2->TabIndex = 13;
			// 
			// lblList3
			// 
			this->lblList3->AutoSize = true;
			this->lblList3->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList3->Location = System::Drawing::Point(180, 187);
			this->lblList3->Name = L"lblList3";
			this->lblList3->Size = System::Drawing::Size(0, 24);
			this->lblList3->TabIndex = 14;
			// 
			// lblList4
			// 
			this->lblList4->AutoSize = true;
			this->lblList4->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList4->Location = System::Drawing::Point(215, 187);
			this->lblList4->Name = L"lblList4";
			this->lblList4->Size = System::Drawing::Size(0, 24);
			this->lblList4->TabIndex = 15;
			// 
			// lblList5
			// 
			this->lblList5->AutoSize = true;
			this->lblList5->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList5->Location = System::Drawing::Point(248, 187);
			this->lblList5->Name = L"lblList5";
			this->lblList5->Size = System::Drawing::Size(0, 24);
			this->lblList5->TabIndex = 16;
			// 
			// lblList6
			// 
			this->lblList6->AutoSize = true;
			this->lblList6->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList6->Location = System::Drawing::Point(286, 187);
			this->lblList6->Name = L"lblList6";
			this->lblList6->Size = System::Drawing::Size(0, 24);
			this->lblList6->TabIndex = 17;
			// 
			// lblList7
			// 
			this->lblList7->AutoSize = true;
			this->lblList7->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList7->Location = System::Drawing::Point(318, 187);
			this->lblList7->Name = L"lblList7";
			this->lblList7->Size = System::Drawing::Size(0, 24);
			this->lblList7->TabIndex = 18;
			// 
			// lblList8
			// 
			this->lblList8->AutoSize = true;
			this->lblList8->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList8->Location = System::Drawing::Point(349, 187);
			this->lblList8->Name = L"lblList8";
			this->lblList8->Size = System::Drawing::Size(0, 24);
			this->lblList8->TabIndex = 19;
			// 
			// lblList9
			// 
			this->lblList9->AutoSize = true;
			this->lblList9->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList9->Location = System::Drawing::Point(382, 187);
			this->lblList9->Name = L"lblList9";
			this->lblList9->Size = System::Drawing::Size(0, 24);
			this->lblList9->TabIndex = 20;
			// 
			// lblList10
			// 
			this->lblList10->AutoSize = true;
			this->lblList10->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList10->Location = System::Drawing::Point(411, 187);
			this->lblList10->Name = L"lblList10";
			this->lblList10->Size = System::Drawing::Size(0, 24);
			this->lblList10->TabIndex = 21;
			// 
			// agregaralista
			// 
			this->agregaralista->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->agregaralista->Controls->Add(this->label17);
			this->agregaralista->Controls->Add(this->label18);
			this->agregaralista->Controls->Add(this->tBoxModValor);
			this->agregaralista->Controls->Add(this->btnMod);
			this->agregaralista->Controls->Add(this->tBoxModPos);
			this->agregaralista->Controls->Add(this->label19);
			this->agregaralista->Controls->Add(this->label16);
			this->agregaralista->Controls->Add(this->label15);
			this->agregaralista->Controls->Add(this->tBoxInsertarValor);
			this->agregaralista->Controls->Add(this->btnInsertar);
			this->agregaralista->Controls->Add(this->tBoxInsertarPos);
			this->agregaralista->Controls->Add(this->label14);
			this->agregaralista->Controls->Add(this->btnAgregar);
			this->agregaralista->Controls->Add(this->tBoxAgregar);
			this->agregaralista->Controls->Add(this->label13);
			this->agregaralista->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agregaralista->Location = System::Drawing::Point(50, 259);
			this->agregaralista->Name = L"agregaralista";
			this->agregaralista->Size = System::Drawing::Size(268, 327);
			this->agregaralista->TabIndex = 22;
			this->agregaralista->TabStop = false;
			this->agregaralista->Text = L"Agregar a la lista";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(100, 251);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 17);
			this->label17->TabIndex = 35;
			this->label17->Text = L"Posicion:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(119, 225);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(46, 17);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Valor:";
			// 
			// tBoxModValor
			// 
			this->tBoxModValor->Location = System::Drawing::Point(169, 219);
			this->tBoxModValor->Name = L"tBoxModValor";
			this->tBoxModValor->Size = System::Drawing::Size(58, 23);
			this->tBoxModValor->TabIndex = 33;
			// 
			// btnMod
			// 
			this->btnMod->BackColor = System::Drawing::Color::YellowGreen;
			this->btnMod->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnMod->Location = System::Drawing::Point(144, 277);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(83, 27);
			this->btnMod->TabIndex = 30;
			this->btnMod->Text = L"Guardar";
			this->btnMod->UseVisualStyleBackColor = false;
			this->btnMod->Click += gcnew System::EventHandler(this, &MyForm::btnMod_Click);
			// 
			// tBoxModPos
			// 
			this->tBoxModPos->Location = System::Drawing::Point(169, 248);
			this->tBoxModPos->Name = L"tBoxModPos";
			this->tBoxModPos->Size = System::Drawing::Size(58, 23);
			this->tBoxModPos->TabIndex = 31;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(13, 197);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(110, 17);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Modificar Valor:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(98, 132);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 17);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Posicion:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(117, 103);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 17);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Valor:";
			// 
			// tBoxInsertarValor
			// 
			this->tBoxInsertarValor->Location = System::Drawing::Point(169, 100);
			this->tBoxInsertarValor->Name = L"tBoxInsertarValor";
			this->tBoxInsertarValor->Size = System::Drawing::Size(58, 23);
			this->tBoxInsertarValor->TabIndex = 27;
			// 
			// btnInsertar
			// 
			this->btnInsertar->BackColor = System::Drawing::Color::YellowGreen;
			this->btnInsertar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnInsertar->Location = System::Drawing::Point(194, 158);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(33, 23);
			this->btnInsertar->TabIndex = 24;
			this->btnInsertar->Text = L"+";
			this->btnInsertar->UseVisualStyleBackColor = false;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &MyForm::btnInsertar_Click);
			// 
			// tBoxInsertarPos
			// 
			this->tBoxInsertarPos->Location = System::Drawing::Point(169, 129);
			this->tBoxInsertarPos->Name = L"tBoxInsertarPos";
			this->tBoxInsertarPos->Size = System::Drawing::Size(58, 23);
			this->tBoxInsertarPos->TabIndex = 25;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 80);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(147, 17);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Agregar por Posicion:";
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::YellowGreen;
			this->btnAgregar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAgregar->Location = System::Drawing::Point(186, 35);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(33, 23);
			this->btnAgregar->TabIndex = 23;
			this->btnAgregar->Text = L"+";
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MyForm::btnAgregar_Click);
			// 
			// tBoxAgregar
			// 
			this->tBoxAgregar->Location = System::Drawing::Point(122, 35);
			this->tBoxAgregar->Name = L"tBoxAgregar";
			this->tBoxAgregar->Size = System::Drawing::Size(58, 23);
			this->tBoxAgregar->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 38);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 17);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Ingresar valor: ";
			// 
			// buscarenlista
			// 
			this->buscarenlista->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->buscarenlista->Controls->Add(this->lblNoEsta);
			this->buscarenlista->Controls->Add(this->lblLastPos);
			this->buscarenlista->Controls->Add(this->label23);
			this->buscarenlista->Controls->Add(this->lblLastValor);
			this->buscarenlista->Controls->Add(this->btnLast);
			this->buscarenlista->Controls->Add(this->label30);
			this->buscarenlista->Controls->Add(this->tBoxLast);
			this->buscarenlista->Controls->Add(this->label31);
			this->buscarenlista->Controls->Add(this->lblBuscarPosPos);
			this->buscarenlista->Controls->Add(this->label21);
			this->buscarenlista->Controls->Add(this->lblBuscarPosValor);
			this->buscarenlista->Controls->Add(this->btnBuscarPos);
			this->buscarenlista->Controls->Add(this->label24);
			this->buscarenlista->Controls->Add(this->tBoxBuscarPos);
			this->buscarenlista->Controls->Add(this->label27);
			this->buscarenlista->Controls->Add(this->lblBuscarValorValor);
			this->buscarenlista->Controls->Add(this->label29);
			this->buscarenlista->Controls->Add(this->lblBuscarValorPos);
			this->buscarenlista->Controls->Add(this->btnBuscarValor);
			this->buscarenlista->Controls->Add(this->lblSiEsta);
			this->buscarenlista->Controls->Add(this->label22);
			this->buscarenlista->Controls->Add(this->tBoxBuscarValor);
			this->buscarenlista->Controls->Add(this->label25);
			this->buscarenlista->Controls->Add(this->btnBuscar);
			this->buscarenlista->Controls->Add(this->tBoxBuscar);
			this->buscarenlista->Controls->Add(this->label26);
			this->buscarenlista->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buscarenlista->Location = System::Drawing::Point(340, 259);
			this->buscarenlista->Name = L"buscarenlista";
			this->buscarenlista->Size = System::Drawing::Size(358, 327);
			this->buscarenlista->TabIndex = 36;
			this->buscarenlista->TabStop = false;
			this->buscarenlista->Text = L"Buscar";
			// 
			// lblNoEsta
			// 
			this->lblNoEsta->AutoSize = true;
			this->lblNoEsta->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoEsta->ForeColor = System::Drawing::Color::Firebrick;
			this->lblNoEsta->Location = System::Drawing::Point(15, 61);
			this->lblNoEsta->Name = L"lblNoEsta";
			this->lblNoEsta->Size = System::Drawing::Size(158, 19);
			this->lblNoEsta->TabIndex = 56;
			this->lblNoEsta->Text = L"Numero no encontrado.";
			// 
			// lblLastPos
			// 
			this->lblLastPos->AutoSize = true;
			this->lblLastPos->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLastPos->Location = System::Drawing::Point(181, 266);
			this->lblLastPos->Name = L"lblLastPos";
			this->lblLastPos->Size = System::Drawing::Size(17, 17);
			this->lblLastPos->TabIndex = 55;
			this->lblLastPos->Text = L"X";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(153, 266);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(21, 17);
			this->label23->TabIndex = 54;
			this->label23->Text = L"es";
			// 
			// lblLastValor
			// 
			this->lblLastValor->AutoSize = true;
			this->lblLastValor->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLastValor->Location = System::Drawing::Point(130, 266);
			this->lblLastValor->Name = L"lblLastValor";
			this->lblLastValor->Size = System::Drawing::Size(17, 17);
			this->lblLastValor->TabIndex = 53;
			this->lblLastValor->Text = L"X";
			// 
			// btnLast
			// 
			this->btnLast->BackColor = System::Drawing::Color::Teal;
			this->btnLast->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnLast->Location = System::Drawing::Point(272, 228);
			this->btnLast->Name = L"btnLast";
			this->btnLast->Size = System::Drawing::Size(67, 23);
			this->btnLast->TabIndex = 52;
			this->btnLast->Text = L"Buscar";
			this->btnLast->UseVisualStyleBackColor = false;
			this->btnLast->Click += gcnew System::EventHandler(this, &MyForm::btnLast_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(21, 266);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(101, 17);
			this->label30->TabIndex = 51;
			this->label30->Text = L"La Posicion de";
			// 
			// tBoxLast
			// 
			this->tBoxLast->Location = System::Drawing::Point(208, 231);
			this->tBoxLast->Name = L"tBoxLast";
			this->tBoxLast->Size = System::Drawing::Size(58, 23);
			this->tBoxLast->TabIndex = 50;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(13, 234);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(187, 17);
			this->label31->TabIndex = 49;
			this->label31->Text = L"Ultima Ocurrencia de Valor:";
			// 
			// lblBuscarPosPos
			// 
			this->lblBuscarPosPos->AutoSize = true;
			this->lblBuscarPosPos->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarPosPos->Location = System::Drawing::Point(180, 197);
			this->lblBuscarPosPos->Name = L"lblBuscarPosPos";
			this->lblBuscarPosPos->Size = System::Drawing::Size(17, 17);
			this->lblBuscarPosPos->TabIndex = 48;
			this->lblBuscarPosPos->Text = L"X";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(152, 197);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 17);
			this->label21->TabIndex = 47;
			this->label21->Text = L"es";
			// 
			// lblBuscarPosValor
			// 
			this->lblBuscarPosValor->AutoSize = true;
			this->lblBuscarPosValor->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarPosValor->Location = System::Drawing::Point(129, 197);
			this->lblBuscarPosValor->Name = L"lblBuscarPosValor";
			this->lblBuscarPosValor->Size = System::Drawing::Size(17, 17);
			this->lblBuscarPosValor->TabIndex = 46;
			this->lblBuscarPosValor->Text = L"X";
			// 
			// btnBuscarPos
			// 
			this->btnBuscarPos->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarPos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBuscarPos->Location = System::Drawing::Point(271, 159);
			this->btnBuscarPos->Name = L"btnBuscarPos";
			this->btnBuscarPos->Size = System::Drawing::Size(67, 23);
			this->btnBuscarPos->TabIndex = 45;
			this->btnBuscarPos->Text = L"Buscar";
			this->btnBuscarPos->UseVisualStyleBackColor = false;
			this->btnBuscarPos->Click += gcnew System::EventHandler(this, &MyForm::btnBuscarPos_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(20, 197);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(101, 17);
			this->label24->TabIndex = 44;
			this->label24->Text = L"La Posicion de";
			// 
			// tBoxBuscarPos
			// 
			this->tBoxBuscarPos->Location = System::Drawing::Point(207, 162);
			this->tBoxBuscarPos->Name = L"tBoxBuscarPos";
			this->tBoxBuscarPos->Size = System::Drawing::Size(58, 23);
			this->tBoxBuscarPos->TabIndex = 43;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(12, 165);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(185, 17);
			this->label27->TabIndex = 42;
			this->label27->Text = L"Conocer Posicion de Valor:";
			// 
			// lblBuscarValorValor
			// 
			this->lblBuscarValorValor->AutoSize = true;
			this->lblBuscarValorValor->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarValorValor->Location = System::Drawing::Point(243, 129);
			this->lblBuscarValorValor->Name = L"lblBuscarValorValor";
			this->lblBuscarValorValor->Size = System::Drawing::Size(17, 17);
			this->lblBuscarValorValor->TabIndex = 41;
			this->lblBuscarValorValor->Text = L"X";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(216, 129);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(21, 17);
			this->label29->TabIndex = 40;
			this->label29->Text = L"es";
			// 
			// lblBuscarValorPos
			// 
			this->lblBuscarValorPos->AutoSize = true;
			this->lblBuscarValorPos->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBuscarValorPos->Location = System::Drawing::Point(193, 129);
			this->lblBuscarValorPos->Name = L"lblBuscarValorPos";
			this->lblBuscarValorPos->Size = System::Drawing::Size(17, 17);
			this->lblBuscarValorPos->TabIndex = 39;
			this->lblBuscarValorPos->Text = L"X";
			// 
			// btnBuscarValor
			// 
			this->btnBuscarValor->BackColor = System::Drawing::Color::Teal;
			this->btnBuscarValor->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBuscarValor->Location = System::Drawing::Point(272, 91);
			this->btnBuscarValor->Name = L"btnBuscarValor";
			this->btnBuscarValor->Size = System::Drawing::Size(67, 23);
			this->btnBuscarValor->TabIndex = 37;
			this->btnBuscarValor->Text = L"Buscar";
			this->btnBuscarValor->UseVisualStyleBackColor = false;
			this->btnBuscarValor->Click += gcnew System::EventHandler(this, &MyForm::btnBuscarValor_Click);
			// 
			// lblSiEsta
			// 
			this->lblSiEsta->AutoSize = true;
			this->lblSiEsta->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSiEsta->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblSiEsta->Location = System::Drawing::Point(12, 61);
			this->lblSiEsta->Name = L"lblSiEsta";
			this->lblSiEsta->Size = System::Drawing::Size(110, 19);
			this->lblSiEsta->TabIndex = 36;
			this->lblSiEsta->Text = L"Si esta en la lista";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(21, 129);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(150, 17);
			this->label22->TabIndex = 32;
			this->label22->Text = L"El Valor de la Posicion";
			// 
			// tBoxBuscarValor
			// 
			this->tBoxBuscarValor->Location = System::Drawing::Point(208, 94);
			this->tBoxBuscarValor->Name = L"tBoxBuscarValor";
			this->tBoxBuscarValor->Size = System::Drawing::Size(58, 23);
			this->tBoxBuscarValor->TabIndex = 27;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(13, 97);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(184, 17);
			this->label25->TabIndex = 26;
			this->label25->Text = L"Conocer valor de Posicion:";
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::Teal;
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBuscar->Location = System::Drawing::Point(216, 35);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(67, 23);
			this->btnBuscar->TabIndex = 23;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &MyForm::btnBuscar_Click_1);
			// 
			// tBoxBuscar
			// 
			this->tBoxBuscar->Location = System::Drawing::Point(152, 35);
			this->tBoxBuscar->Name = L"tBoxBuscar";
			this->tBoxBuscar->Size = System::Drawing::Size(58, 23);
			this->tBoxBuscar->TabIndex = 23;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(13, 38);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(133, 17);
			this->label26->TabIndex = 23;
			this->label26->Text = L"Ingrese un Numero:";
			// 
			// eliminardelista
			// 
			this->eliminardelista->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->eliminardelista->Controls->Add(this->lblEliminao);
			this->eliminardelista->Controls->Add(this->btnVaciar);
			this->eliminardelista->Controls->Add(this->label33);
			this->eliminardelista->Controls->Add(this->btnEliminarEn);
			this->eliminardelista->Controls->Add(this->tBoxEliminarEn);
			this->eliminardelista->Controls->Add(this->label20);
			this->eliminardelista->Controls->Add(this->btnEliminar);
			this->eliminardelista->Controls->Add(this->tBoxEliminar);
			this->eliminardelista->Controls->Add(this->label36);
			this->eliminardelista->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminardelista->Location = System::Drawing::Point(739, 259);
			this->eliminardelista->Name = L"eliminardelista";
			this->eliminardelista->Size = System::Drawing::Size(268, 181);
			this->eliminardelista->TabIndex = 36;
			this->eliminardelista->TabStop = false;
			this->eliminardelista->Text = L"Eliminar de lista";
			// 
			// lblEliminao
			// 
			this->lblEliminao->AutoSize = true;
			this->lblEliminao->ForeColor = System::Drawing::Color::Red;
			this->lblEliminao->Location = System::Drawing::Point(13, 149);
			this->lblEliminao->Name = L"lblEliminao";
			this->lblEliminao->Size = System::Drawing::Size(72, 17);
			this->lblEliminao->TabIndex = 29;
			this->lblEliminao->Text = L"Eliminado";
			// 
			// btnVaciar
			// 
			this->btnVaciar->BackColor = System::Drawing::Color::Firebrick;
			this->btnVaciar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnVaciar->Location = System::Drawing::Point(146, 110);
			this->btnVaciar->Name = L"btnVaciar";
			this->btnVaciar->Size = System::Drawing::Size(97, 23);
			this->btnVaciar->TabIndex = 28;
			this->btnVaciar->Text = L"Borrar Lista";
			this->btnVaciar->UseVisualStyleBackColor = false;
			this->btnVaciar->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(13, 116);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(86, 17);
			this->label33->TabIndex = 27;
			this->label33->Text = L"Vaciar Lista:";
			// 
			// btnEliminarEn
			// 
			this->btnEliminarEn->BackColor = System::Drawing::Color::Firebrick;
			this->btnEliminarEn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEliminarEn->Location = System::Drawing::Point(210, 77);
			this->btnEliminarEn->Name = L"btnEliminarEn";
			this->btnEliminarEn->Size = System::Drawing::Size(33, 23);
			this->btnEliminarEn->TabIndex = 24;
			this->btnEliminarEn->Text = L"-";
			this->btnEliminarEn->UseVisualStyleBackColor = false;
			this->btnEliminarEn->Click += gcnew System::EventHandler(this, &MyForm::btnEliminarEn_Click);
			// 
			// tBoxEliminarEn
			// 
			this->tBoxEliminarEn->Location = System::Drawing::Point(146, 74);
			this->tBoxEliminarEn->Name = L"tBoxEliminarEn";
			this->tBoxEliminarEn->Size = System::Drawing::Size(58, 23);
			this->tBoxEliminarEn->TabIndex = 25;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(13, 80);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(132, 17);
			this->label20->TabIndex = 26;
			this->label20->Text = L"Posicion a Eliminar:";
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::Firebrick;
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnEliminar->Location = System::Drawing::Point(210, 32);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(33, 23);
			this->btnEliminar->TabIndex = 23;
			this->btnEliminar->Text = L"-";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// tBoxEliminar
			// 
			this->tBoxEliminar->Location = System::Drawing::Point(146, 35);
			this->tBoxEliminar->Name = L"tBoxEliminar";
			this->tBoxEliminar->Size = System::Drawing::Size(58, 23);
			this->tBoxEliminar->TabIndex = 23;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(13, 38);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(113, 17);
			this->label36->TabIndex = 23;
			this->label36->Text = L"Valor a Eliminar:";
			// 
			// contadordelista
			// 
			this->contadordelista->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->contadordelista->Controls->Add(this->lblElementos);
			this->contadordelista->Controls->Add(this->label32);
			this->contadordelista->Controls->Add(this->label28);
			this->contadordelista->Controls->Add(this->btnContador);
			this->contadordelista->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contadordelista->Location = System::Drawing::Point(739, 455);
			this->contadordelista->Name = L"contadordelista";
			this->contadordelista->Size = System::Drawing::Size(268, 131);
			this->contadordelista->TabIndex = 37;
			this->contadordelista->TabStop = false;
			this->contadordelista->Text = L"Contar Elementos";
			// 
			// lblElementos
			// 
			this->lblElementos->AutoSize = true;
			this->lblElementos->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblElementos->Location = System::Drawing::Point(114, 86);
			this->lblElementos->Name = L"lblElementos";
			this->lblElementos->Size = System::Drawing::Size(17, 17);
			this->lblElementos->TabIndex = 56;
			this->lblElementos->Text = L"X";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(143, 86);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(75, 17);
			this->label32->TabIndex = 28;
			this->label32->Text = L"elementos";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(13, 86);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(95, 17);
			this->label28->TabIndex = 27;
			this->label28->Text = L"La Lista Tiene:";
			// 
			// btnContador
			// 
			this->btnContador->BackColor = System::Drawing::Color::Gold;
			this->btnContador->Location = System::Drawing::Point(90, 29);
			this->btnContador->Name = L"btnContador";
			this->btnContador->Size = System::Drawing::Size(86, 31);
			this->btnContador->TabIndex = 0;
			this->btnContador->Text = L"Contar";
			this->btnContador->UseVisualStyleBackColor = false;
			this->btnContador->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Chartreuse;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::Red;
			this->btnSalir->Location = System::Drawing::Point(973, 12);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 41);
			this->btnSalir->TabIndex = 38;
			this->btnSalir->Text = L"Exit ->";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->BackColor = System::Drawing::Color::Gold;
			this->lblError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(618, 162);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(80, 25);
			this->lblError->TabIndex = 39;
			this->lblError->Text = L"ERROR";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1060, 598);
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->contadordelista);
			this->Controls->Add(this->eliminardelista);
			this->Controls->Add(this->buscarenlista);
			this->Controls->Add(this->agregaralista);
			this->Controls->Add(this->lblList10);
			this->Controls->Add(this->lblList9);
			this->Controls->Add(this->lblList8);
			this->Controls->Add(this->lblList7);
			this->Controls->Add(this->lblList6);
			this->Controls->Add(this->lblList5);
			this->Controls->Add(this->lblList4);
			this->Controls->Add(this->lblList3);
			this->Controls->Add(this->lblList2);
			this->Controls->Add(this->lblList1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->agregaralista->ResumeLayout(false);
			this->agregaralista->PerformLayout();
			this->buscarenlista->ResumeLayout(false);
			this->buscarenlista->PerformLayout();
			this->eliminardelista->ResumeLayout(false);
			this->eliminardelista->PerformLayout();
			this->contadordelista->ResumeLayout(false);
			this->contadordelista->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
		{

		}

			   List* L = new List();
			   System::Void Cerebro(int operacion, int ItemCerebro, int posCerebro)
			   {
				   int cont;
				   bool esta, remove;
				   switch (operacion)
				   {
				   case 0:
					   L->Add(ItemCerebro);
					   if (lblList1->Text == "")
					   {
						   this->lblList1->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList2->Text == "")
					   {
						   this->lblList2->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList3->Text == "")
					   {
						   this->lblList3->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList4->Text == "")
					   {
						   this->lblList4->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList5->Text == "")
					   {
						   this->lblList5->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList6->Text == "")
					   {
						   this->lblList6->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList7->Text == "")
					   {
						   this->lblList7->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList8->Text == "")
					   {
						   this->lblList8->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList9->Text == "")
					   {
						   this->lblList9->Text = Convert::ToString(ItemCerebro);
					   }
					   else if (lblList10->Text == "")
					   {
						   this->lblList10->Text = Convert::ToString(ItemCerebro);
					   }
					   break;
				   case 1:
					   L->Clear();
					   this->lblList1->Text = "";
					   this->lblList2->Text = "";
					   this->lblList3->Text = "";
					   this->lblList4->Text = "";
					   this->lblList5->Text = "";
					   this->lblList6->Text = "";
					   this->lblList7->Text = "";
					   this->lblList8->Text = "";
					   this->lblList9->Text = "";
					   this->lblList10->Text = "";
					   break;
				   case 2:
					   esta = L->Contains(ItemCerebro);
					   if (esta)
					   {
						   this->lblNoEsta->Visible = false;
						   this->lblSiEsta->Visible = true;
					   }
					   else
					   {
						   this->lblSiEsta->Visible = false;
						   this->lblNoEsta->Visible = true;
					   }
					   break;
				   case 3:
					   this->lblElementos->Text = Convert::ToString(L->Count());
				   case 4:
					   posCerebro = Convert::ToInt32(this->tBoxBuscarValor->Text);
					   this->lblBuscarValorPos->Text = Convert::ToString(posCerebro);
					   this->lblBuscarValorValor->Text = Convert::ToString(L->GetItem(posCerebro));
					   break;
				   case 5:
					   posCerebro = Convert::ToInt32(this->tBoxBuscarPos->Text);
					   this->lblBuscarPosPos->Text = Convert::ToString(L->IndexOf(posCerebro));
					   this->lblBuscarPosValor->Text = Convert::ToString(posCerebro);
					   break;
				   case 6:
					   L->Insert(posCerebro, ItemCerebro);
					   switch (posCerebro)
					   {
					   case 1:
						   if (lblList1->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = lblList7->Text;
							   this->lblList7->Text = lblList6->Text;
							   this->lblList6->Text = lblList5->Text;
							   this->lblList5->Text = lblList4->Text;
							   this->lblList4->Text = lblList3->Text;
							   this->lblList3->Text = lblList2->Text;
							   this->lblList2->Text = lblList1->Text;
							   this->lblList1->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList1->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 2:
						   if (lblList2->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = lblList7->Text;
							   this->lblList7->Text = lblList6->Text;
							   this->lblList6->Text = lblList5->Text;
							   this->lblList5->Text = lblList4->Text;
							   this->lblList4->Text = lblList3->Text;
							   this->lblList3->Text = lblList2->Text;
							   this->lblList2->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList2->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 3:
						   if (lblList3->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = lblList7->Text;
							   this->lblList7->Text = lblList6->Text;
							   this->lblList6->Text = lblList5->Text;
							   this->lblList5->Text = lblList4->Text;
							   this->lblList4->Text = lblList3->Text;
							   this->lblList3->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList3->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 4:
						   if (lblList4->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = lblList7->Text;
							   this->lblList7->Text = lblList6->Text;
							   this->lblList6->Text = lblList5->Text;
							   this->lblList5->Text = lblList4->Text;
							   this->lblList4->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList4->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 5:
						   if (lblList2->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = lblList7->Text;
							   this->lblList7->Text = lblList6->Text;
							   this->lblList6->Text = lblList5->Text;
							   this->lblList5->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList5->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 6:
						   if (lblList2->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = lblList7->Text;
							   this->lblList7->Text = lblList6->Text;
							   this->lblList6->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList6->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 7:
						   if (lblList2->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = lblList7->Text;
							   this->lblList7->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList7->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 8:
						   if (lblList2->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = lblList8->Text;
							   this->lblList8->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList8->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 9:
						   if (lblList2->Text != "")
						   {
							   this->lblList10->Text = lblList9->Text;
							   this->lblList9->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList9->Text = Convert::ToString(ItemCerebro);
						   }
						   break;
					   case 10:
						   if (lblList2->Text != "")
						   {
							   this->lblList10->Text = Convert::ToString(ItemCerebro);
						   }
						   else
						   {
							   this->lblList10->Text = Convert::ToString(ItemCerebro);
						   }
						   break;

					   }
					   break;
				   case 7:
					   ItemCerebro = Convert::ToInt32(this->tBoxLast->Text);
					   this->lblLastValor->Text = Convert::ToString(ItemCerebro);
					   this->lblLastPos->Text = Convert::ToString(L->LastIndexOf(ItemCerebro));
					   break;
				   case 8:
					   ItemCerebro = Convert::ToInt32(this->tBoxEliminar->Text);
					   remove = L->Remove(ItemCerebro);
					   if (remove)
					   {
						   this->lblEliminao->Visible = true;
						   Sleep(2000);
						   this->lblEliminao->Visible = false;
						   if (Convert::ToInt32(this->lblList1->Text) == ItemCerebro)
						   {
							   this->lblList1->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList2->Text) == ItemCerebro)
						   {
							   this->lblList2->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList3->Text) == ItemCerebro)
						   {
							   this->lblList3->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList4->Text) == ItemCerebro)
						   {
							   this->lblList4->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList5->Text) == ItemCerebro)
						   {
							   this->lblList5->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList6->Text) == ItemCerebro)
						   {
							   this->lblList6->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList7->Text) == ItemCerebro)
						   {
							   this->lblList7->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList8->Text) == ItemCerebro)
						   {
							   this->lblList8->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList9->Text) == ItemCerebro)
						   {
							   this->lblList9->Text = "";
						   }
						   else if (Convert::ToInt32(this->lblList10->Text) == ItemCerebro)
						   {
							   this->lblList10->Text = "";
						   }

					   }

					   break;
				   case 9:
					   posCerebro = Convert::ToInt32(this->tBoxEliminarEn->Text);
					   L->RemoveAt(posCerebro);
					   switch (posCerebro)
					   {
					   case 1:
						   this->lblList1->Text = "";
						   break;
					   case 2:
						   this->lblList2->Text = "";
						   break;
					   case 3:
						   this->lblList3->Text = "";
						   break;
					   case 4:
						   this->lblList4->Text = "";
						   break;
					   case 5:
						   this->lblList5->Text = "";
						   break;
					   case 6:
						   this->lblList6->Text = "";
						   break;
					   case 7:
						   this->lblList7->Text = "";
						   break;
					   case 8:
						   this->lblList8->Text = "";
						   break;
					   case 9:
						   this->lblList9->Text = "";
						   break;
					   case 10:
						   this->lblList10->Text = "";
						   break;

					   }
					   break;
				   case 10:
					   posCerebro = Convert::ToInt32(this->tBoxModPos->Text);
					   ItemCerebro = Convert::ToInt32(this->tBoxModValor->Text);
					   L->SetItem(posCerebro, ItemCerebro);
					   switch (posCerebro)
					   {
					   case 1:
						   this->lblList1->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 2:
						   this->lblList2->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 3:
						   this->lblList3->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 4:
						   this->lblList4->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 5:
						   this->lblList5->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 6:
						   this->lblList6->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 7:
						   this->lblList7->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 8:
						   this->lblList8->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 9:
						   this->lblList9->Text = Convert::ToString(ItemCerebro);
						   break;
					   case 10:
						   this->lblList10->Text = Convert::ToString(ItemCerebro);
						   break;

					   }
					   break;

				   }

			   }

private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(0, Convert::ToInt32(this->tBoxAgregar->Text), 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxAgregar->Clear();
}

private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		Cerebro(2, Convert::ToInt16(this->tBoxBuscar->Text), 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxBuscar->Clear();
}


private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(6, Convert::ToInt32(this->tBoxInsertarValor->Text), Convert::ToInt32(this->tBoxInsertarPos->Text));
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxInsertarPos->Clear();
	tBoxInsertarValor->Clear();
}
private: System::Void btnMod_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(10, Convert::ToInt32(this->tBoxModValor->Text), Convert::ToInt32(this->tBoxModPos->Text));
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	this->tBoxModValor->Clear();
	this->tBoxModPos->Clear();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(3, 0, 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}

}
private: System::Void btnBuscar_Click_1(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(2, Convert::ToInt16(this->tBoxBuscar->Text), 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxBuscar->Clear();
}
private: System::Void btnBuscarValor_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(4, Convert::ToInt32(this->tBoxBuscarValor->Text), 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxBuscarValor->Clear();
}
private: System::Void btnBuscarPos_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(5, 0, Convert::ToInt32(this->tBoxBuscarPos->Text));
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxBuscarPos->Clear();
}
private: System::Void btnLast_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(7, Convert::ToInt32(this->tBoxLast->Text), 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxLast->Clear();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(8, Convert::ToInt32(this->tBoxEliminar->Text), 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxEliminar->Clear();
}
private: System::Void btnEliminarEn_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(9, 0, Convert::ToInt32(this->tBoxEliminarEn->Text));
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
	tBoxEliminarEn->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		Cerebro(1, 0, 0);
	}
	catch (...)
	{
		this->lblError->Visible = true;
		Sleep(2000);
		this->lblError->Visible = false;
	}
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {

	exit(0);
}
};
}
