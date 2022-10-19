#include"UI.h"

UI::UI()
{
	int chose;
	while (run)
	{
		system("cls");
		cout << "1.Them GV. " << endl;
		cout << "2.Xoa GV. " << endl;
		cout << "3.Tinh luong GV. " << endl;
		cout << "0.Thoat." << endl;
		cin >> chose;
		switch (chose)
		{
		case THEM_GV:
		{
			system("cls");
			ql.addGV();
			system("pause");
			break;
		}
		case XOA_GV:
		{
			system("cls");
			ql.deleteGV();
			system("pause");
			break;
		}
		case TINH_LUONG:
		{
			system("cls");
			ql.calLuongThuc();
			system("pause");
			break;
		}
		case THOAT:
		{
			run = 0;
			break;
		}
		default:
			break;
		}
	}
}

UI::~UI()
{
	//
}