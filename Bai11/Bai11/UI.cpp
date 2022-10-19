#include"UI.h"

UI::UI()
{
	SoPhuc SP1, SP2;
	int chon;
	while (run)
	{
		cout << "1.Nhap 2 so phuc." << endl;
		cout << "2.Hien thi so phuc." << endl;
		cout << "3.Cong 2 so phuc." << endl;
		cout << "4.Nhan 2 so phuc." << endl;
		cout << "0.Thoat." << endl;
		do
		{
			cin >> chon;
			if (chon < 0 || chon > 4)
			{
				cout << "Nhap lai." << endl;
			}
		} while (chon < 0 || chon > 4);
		switch (chon)
		{
		case NHAP_2_SOPHUC:
		{
			double a_Thuc, b_Thuc, a_Ao, b_Ao;
			cout << "Nhap so phuc thu nhat: " << endl;
			cout << "Phan thuc: " << endl;
			cin >> a_Thuc;
			cout << "Phan ao: " << endl;
			cin >> a_Ao;

			cout << "Nhap so phuc thu hai: " << endl;
			cout << "Phan thuc: " << endl;
			cin >> b_Thuc;
			cout << "Phan ao: " << endl;
			cin >> b_Ao;

			SP1.setPhanThuc(a_Thuc);
			SP1.setPhanAo(a_Ao);
			SP2.setPhanThuc(b_Thuc);
			SP2.setPhanAo(b_Ao);

			break;
		}
		case HIEN_THI:
		{
			cout << "So phuc thu nhat: " << endl;
			if (SP1.getPhanAo() < 0)
			{
				cout << SP1.getPhanThuc() << " " << SP1.getPhanAo() << "i" << endl;
			}
			else
			{
				cout << SP1.getPhanThuc() << " + " << SP1.getPhanAo() << "i" << endl;
			}
			
			cout << "So phuc thu hai: " << endl;
			if (SP2.getPhanAo() < 0)
			{
				cout << SP2.getPhanThuc() << " " << SP2.getPhanAo() << "i" << endl;
			}
			else
			{
				cout << SP2.getPhanThuc() << " + " << SP2.getPhanAo() << "i" << endl;
			}

			break;
		}
		case CONG_2SO:
		{
			SoPhuc SP_Sum = SP1 + SP2;
			cout << "Tong cua 2 so phuc da nhap: " << endl;
			if (SP_Sum.getPhanAo() < 0)
			{
				cout << SP_Sum.getPhanThuc() << " " << SP_Sum.getPhanAo() << "i" << endl;
			}
			else
			{
				cout << SP_Sum.getPhanThuc() << " + " << SP_Sum.getPhanAo() << "i" << endl;
			}

			break;
		}
		case NHAN_2SO:
		{
			SoPhuc SP_TICH = SP1 * SP2;
			cout << "Tich cua 2 so phuc da nhap: " << endl;
			if (SP_TICH.getPhanAo() < 0)
			{
				cout << SP_TICH.getPhanThuc() << " " << SP_TICH.getPhanAo() << "i" << endl;
			}
			else
			{
				cout << SP_TICH.getPhanThuc() << " + " << SP_TICH.getPhanAo() << "i" << endl;
			}
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