#pragma once

namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace Microsoft::VisualBasic;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"�������"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"�������"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"������"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"��������", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode1,
					treeNode2, treeNode3
			}));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"����������"));
			System::Windows::Forms::TreeNode^ treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"�������"));
			System::Windows::Forms::TreeNode^ treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"�����", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode5,
					treeNode6
			}));
			System::Windows::Forms::TreeNode^ treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"��������"));
			System::Windows::Forms::TreeNode^ treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"������"));
			System::Windows::Forms::TreeNode^ treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"�������", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode8,
					treeNode9
			}));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(896, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����������ToolStripMenuItem,
					this->toolStripSeparator5, this->����������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem.Image")));
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->�������ToolStripMenuItem->Text = L"����&���";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->����������ToolStripMenuItem->Text = L"&����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(155, 6);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->����������ToolStripMenuItem->Text = L"&� ���������...";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->treeView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->treeView1->CheckBoxes = true;
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->Location = System::Drawing::Point(0, 24);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"category1";
			treeNode1->Text = L"�������";
			treeNode2->Name = L"Home";
			treeNode2->Text = L"�������";
			treeNode3->Name = L"My";
			treeNode3->Text = L"������";
			treeNode4->BackColor = System::Drawing::Color::White;
			treeNode4->Name = L"Category";
			treeNode4->Text = L"��������";
			treeNode5->Name = L"Everyday";
			treeNode5->Text = L"����������";
			treeNode6->Name = L"Future";
			treeNode6->Text = L"�������";
			treeNode7->BackColor = System::Drawing::Color::White;
			treeNode7->Name = L"Plans";
			treeNode7->Text = L"�����";
			treeNode8->Name = L"Homework";
			treeNode8->Text = L"��������";
			treeNode9->Name = L"Work";
			treeNode9->Text = L"������";
			treeNode10->BackColor = System::Drawing::Color::White;
			treeNode10->Name = L"Tasks";
			treeNode10->Text = L"�������";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) { treeNode4, treeNode7, treeNode10 });
			this->treeView1->Size = System::Drawing::Size(896, 514);
			this->treeView1->TabIndex = 1;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(241, 248);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 239);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(3, 248);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 239);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 234);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(241, 3);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 234);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(481, 3);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 234);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(481, 248);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(219, 239);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.79079F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.20921F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				231)));
			this->tableLayoutPanel1->Controls->Add(this->textBox6, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(186, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.66537F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.33463F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(710, 514);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(896, 538);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"MyForm";
			this->Text = L"����������� �����";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadCategoryData("category1.txt");
}
private: System::Void LoadCategoryData(String^ fileName) {
	// �������� �� ������� �����
	if (File::Exists(fileName)) {
		array<String^>^ lines = File::ReadAllLines(fileName); // ���������
		textBox1->Text = (lines->Length > 0) ? lines[0] : "";
		textBox2->Text = (lines->Length > 1) ? lines[1] : "";
		textBox3->Text = (lines->Length > 2) ? lines[2] : "";
		textBox4->Text = (lines->Length > 3) ? lines[3] : "";
		textBox5->Text = (lines->Length > 4) ? lines[4] : "";
		textBox6->Text = (lines->Length > 5) ? lines[5] : "";
	}
	else {
		// �������
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
	}
}

private: System::Void SaveToFile() {
	String^ fileName = "inputs.txt";
	array<String^>^ lines = gcnew array<String^>(6);
	lines[0] = textBox1->Text;
	lines[1] = textBox2->Text;
	lines[2] = textBox3->Text;
	lines[3] = textBox4->Text;
	lines[4] = textBox5->Text;
	lines[5] = textBox6->Text;
	File::WriteAllLines(fileName, lines); // ��������� ��� ������ � ����
}

private: System::Void SaveCategoryData(String^ fileName) {
	// ���������� ������ �� ���������� � ����
	array<String^>^ lines = gcnew array<String^>(6);
	lines[0] = textBox1->Text;
	lines[1] = textBox2->Text;
	lines[2] = textBox3->Text;
	lines[3] = textBox4->Text;
	lines[4] = textBox5->Text;
	lines[5] = textBox6->Text;
	File::WriteAllLines(fileName, lines);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedCategory = treeView1->SelectedNode->Text; // ������� ���������
	String^ fileName = selectedCategory + ".txt";
	SaveCategoryData(fileName);
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedCategory = treeView1->SelectedNode->Text; 
	String^ fileName = selectedCategory + ".txt";
	SaveCategoryData(fileName);
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedCategory = treeView1->SelectedNode->Text; 
	String^ fileName = selectedCategory + ".txt";
	SaveCategoryData(fileName);
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedCategory = treeView1->SelectedNode->Text; 
	String^ fileName = selectedCategory + ".txt";
	SaveCategoryData(fileName);
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedCategory = treeView1->SelectedNode->Text; 
	String^ fileName = selectedCategory + ".txt";
	SaveCategoryData(fileName);
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedCategory = treeView1->SelectedNode->Text;
	String^ fileName = selectedCategory + ".txt";
	SaveCategoryData(fileName);
}
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	String^ selectedCategory = e->Node->Text; // �������� ���������
	String^ fileName = selectedCategory + ".txt"; // ��� ����� ���������
	LoadCategoryData(fileName);
}
private: System::Void buttonAddCategory_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(
		"���������: ����������� �����\n"
		"������: 1.0.0\n"
		"�����: ������� ����� 302��-22\n"
		"�������������: ��������� ������ ���������\n"
		"��������: ��������� ��� ���������� �������� � �����������.\n",
		"� ���������",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(
		"��������: ��������� ��� ���������� �������� � �����������.\n",
		"����������",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);
}
};
};