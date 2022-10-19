#include"UI.h"

UI::UI()
{
	int chose;
	while (run)
	{
		system("cls");
		cout << "1.Them phong thue moi. " << endl;
		cout << "2.Xoa Khach Hang. " << endl;
		cout << "3.Tinh tien Khach Hang. " << endl;
		cout << "4.Hien thi thong tin khach san. " << endl;
		cout << "0.Thoat." << endl;
		cin >> chose;
		switch (chose)
		{
		case THEM:
		{
			system("cls");
			controller.addPhongThue();
			system("pause");
			break;
		}
		case XOA:
		{
			system("cls");
			controller.deleteNguoiThue();
			system("pause");
			break;
		}
		case TINH_TIEN:
		{
			system("cls");
			controller.calTienPhong();
			system("pause");
			break;
		}
		case HIEN_THI:
		{
			system("cls");
			controller.showDSPhong();
			system("pause");
			break;
		}
		case THOAT:
		{
			run = 0;
			break;
		}
		default:
		{
			cout << "Lua chon sai chuc nang. Hay chon lai!" << endl;
			break;
		}
		}
	}
}

UI::~UI()
{
	//
}
