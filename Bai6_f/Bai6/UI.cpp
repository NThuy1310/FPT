#include "UI.h"

UI::UI()
{
	int chon;
	while (run)
	{
		cout << "Nhap lua chon cua ban: " << endl;
		cout << "1. Them moi hoc sinh." << endl;
		cout << "2. Hien thi thong tin hoc sinh 20 tuoi." << endl;
		cout << "3. Xuat so luong hoc sinh 23 tuoi va que o DN." << endl;
		cout << "0. Thoat chuong trinh." << endl;
		cin >> chon;
		switch (chon)
		{
		case THEM_HS:
		{
			ql.ThemHS();
			break;
		}
		case HIEN_THI_20:
		{
			ql.HienThiHS_20();
			break;
		}
		case SO_LUONG_23:
		{
			ql.HienThiHS_23_DN();
			break;
		}
		case THOAT:
		{
			run = 0;
		}
		default:
		{
			cout << "Lua chon sai. Hay nhap lai (0-3): " << endl;
			break;
		}
		}
	}
}

UI::~UI()
{
	//
}