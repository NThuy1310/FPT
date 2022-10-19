#include "UI.h"

UI::UI()
{
	int chose;
	while (run)
	{
		system("cls");
		cout << "1.Them the muon. " << endl;
		cout << "2.Xoa the muon. " << endl;
		cout << "3.Hien thi thong tin cac the. " << endl;
		cout << "0.Thoat." << endl;
		cin >> chose;
		switch (chose)
		{
		case THEM_THE:
		{
			system("cls");
			ql.addThe();
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			ql.deleteThe();
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			ql.showThe();
			system("pause");
			break;
		}
		case 0:
		{
			run = 0;
			break;
		}
		default:
		{
			system("cls");
			cout << "Lua chon sai. Hay nhap lai lua chon chinh xac (0-3)." << endl;
			system("pause");
			break;
		}
		}
	}
}
UI::~UI()
{
	//
}