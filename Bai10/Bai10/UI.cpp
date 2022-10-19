#include"UI.h"

UI::UI()
{
	int chon;
	while (run)
	{
		system("cls");
		cout << "1.Them moi van ban. " << endl;
		cout << "2.Dem so tu trong van ban. " << endl;
		cout << "3.Dem ky tu A, a trong van ban. " << endl;
		cout << "4.Chuan hoa van ban. " << endl;
		cout << "0.Thoat." << endl;
		do {
			cin >> chon;
			if (chon < 0 || chon > 4)
			{
				cout << "Nhap lai.";
			}
		} while (chon < 0 || chon > 4);

		switch (chon)
		{
		case THEM_VB:
		{
			system("cls");
			view.addVanBan();
			system("pause");
			break;
		}

		case SO_TU:
		{
			system("cls");
			view.countTu();
			system("pause");
			break;
		}
		
		case KI_TU_Aa:
		{
			system("cls");
			view.countKiTu_Aa();
			system("pause");
			break;
		}

		case CHUAN_HOA:
		{
			system("cls");
			view.standardizedVanBan();
			system("pause");
			break;
		}

		case THOAT:
		{
			run = 0;
			break;
		}
		}
	}
}

UI::~UI()
{
	//
}