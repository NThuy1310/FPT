#include "UI.h"

UI::UI()
{
	while (run)
	{
		system("cls");
		cout << "Hay nhap vao lua chon cua ban: " << endl;
		cout << "1. Nhap thong tin khu pho." << endl;
		cout << "2. Hien thi thong tin khu pho." << endl;
		cout << "0. Thoat chuong trinh." << endl;

		int chon;
		cin >> chon;
		switch (chon)
		{
		case THOAT:
		{
			run = false;
			break;
		}
		case NHAP_KHUPHO:
		{
			system("cls");
			cout << "Moi nhap vao thong tin day du cua khu pho: " << endl;
			qlkp.addKhuPho();
			system("pause");
			break;
		}
		case HIEN_THI:
		{
			system("cls");
			cout << "Thong tin cua khu pho: " << endl;
			qlkp.show_TTKhuPho();
			system("pause");
			break;
		}
		default:
		{
			cout << "Lua chon sai. Hay nhap lai!" << endl;
			break;
		}
		}
	}
}

UI::~UI()
{
	//
}