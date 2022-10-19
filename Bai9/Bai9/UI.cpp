#include"UI.h"

UI::UI()
{
	int chon;
	while (run)
	{
		system("cls");
		cout << "Chuong trinh quan ly bien lai tien dien." << endl;
		cout << "1. Them moi ho su dung dien." << endl;
		cout << "2. Xoa ho su dung dien." << endl;
		cout << "3. Sua lai thong tin cua ho su dung." << endl;
		cout << "4. Hien thi thong tin bien lai." << endl;
		cout << "5. Tinh tien dien phai tra." << endl;
		cout << "0. Thoat" << endl;
		cin >> chon;
		while (checkIn.checkUnsignedInterger(to_string(chon)))
		{
			cout << "Lua chon khong dung. Hay nhap lua chon tu 0-4." << endl;
			cin >> chon;
		}
		switch (chon)
		{
		case THEM_HO:
		{
			system("cls");
			view.ThemHo();
			system("pause");
			break;
		}
		case XOA_HO:
		{
			system("cls");
			view.XoaHo();
			system("pause");
			break;
		}
		case SUA_TT_HO:
		{
			system("cls");
			int chon_Sua;
			cout << "Lua chon sua thong tin ho: " << endl;
			cout << "1. Sua ho ten chu ho." << endl;
			cout << "2. Sua so nha." << endl;
			cout << "3. Sua ma so cong to dien." << endl;
			cout << "4. Sua lai tat ca thong tin ho." << endl;
			cout << "0. Thoat" << endl;
			cin >> chon_Sua;
			while (checkIn.checkUnsignedInterger(to_string(chon_Sua)))
			{
				cout << "Lua chon khong dung. Hay nhap lua chon tu 0-5." << endl;
				cin >> chon_Sua;
			}

			switch (chon_Sua)
			{
			case 1:
			{
				system("cls");
				view.SuaTenHo();
				system("pause");
				break;
			}
			case 2:
			{
				system("cls");
				view.SuaSoNha();
				system("pause");
				break;
			}
			case 3:
			{
				system("cls");
				view.SuaMaSo();
				system("pause");
				break;
			}
			case 4:
			{
				system("cls");
				view.SuaTTHo();
				system("pause");
				break;
			}
			case 0:
			{
				break;
			}
			default:
			{
				cout << "Lua chon sai. Hay lua chon lai." << endl;
				break;
			}
			}

			system("pause");
			break;
		}
		case HIEN_THI:
		{
			system("cls");
			int chon_Hien_Thi;
			cout << "Lua chon hien thi thong tin: " << endl;
			cout << "1. Tim bien lai theo ma so cong to dien." << endl;
			cout << "2. Hien thi toan bo bien lai." << endl;
			cout << "0. Thoat" << endl;
			cin >> chon_Hien_Thi;
			while (checkIn.checkUnsignedInterger(to_string(chon_Hien_Thi)))
			{
				cout << "Lua chon khong dung. Hay nhap lua chon tu 0-2." << endl;
				cin >> chon_Hien_Thi;
			}

			switch (chon_Hien_Thi)
			{
			case 1:
			{
				system("cls");
				view.HienThi_BienLai();
				system("pause");
				break;
			}
			case 2:
			{
				system("cls");
				view.HienThi_DS_BienLai();
				system("pause");
				break;
			}
			case 0:
			{
				break;
			}
			default:
			{
				cout << "Lua chon sai. Hay lua chon lai." << endl;
				break;
			}
			}
		}
		case TINH_TIEN_DIEN:
		{
			system("cls");
			view.TinhToan_TienDien();
			system("pause");
			break;
		}
		case THOAT_CT:
		{
			run = 0;
			break;
		}
		default:
		{
			cout << "Lua chon sai. Hay lua chon lai." << endl;
			break;
		}
		}
	}
}

UI::~UI()
{
	//
}