#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"ThiSinh.h"
using namespace std;

class TuyenSinh
{
private:
	vector<ThiSinh*> dsTuyenSinh;
public:
	void ThemTS();
	void HienThiTS();
	void TimTS();
	TuyenSinh()
	{
		int chose;
		do
		{
			cout << "Hay nhap vao lua chon cua ban: " << endl;
			cout << "1. Them thi sinh" << endl;
			cout << "2. Hien thi danh sach thong tin thi sinh" << endl;
			cout << "3. Tim kiem theo so bao danh" << endl;
			cout << "0. Thoat chuong trinh" << endl;
			cin >> chose;
			switch (chose)
			{
			case 1:
			{
				ThemTS();
				break;
			}
			case 2:
			{
				HienThiTS();
				break;
			}
			case 3:
			{
				TimTS();
				break;
			}
			case 0:
				break;
			default:
			{
				cout << "Lua chon chuc nang khong dung. Hay chon lai" << endl;
				break;
			}
			}
		} while (chose != 0);
	}
};

void TuyenSinh::ThemTS()
{
	ThiSinh* p;
	int chose;
	do
	{
		cout << "Hay nhap vao lua chon cua ban: " << endl;
		cout << "1. Them thi sinh khoi A" << endl;
		cout << "2. Them thi sinh khoi B" << endl;
		cout << "3. Them thi sinh khoi C" << endl;
		cout << "0. Thoat" << endl;
		cin >> chose;
		switch (chose)
		{
		case 1:
		{
			p = new A;
			p->NhapTT();
			dsTuyenSinh.push_back(p);
			break;
		}
		case 2:
		{
			p = new B;
			p->NhapTT();
			dsTuyenSinh.push_back(p);
			break;
		}
		case 3:
		{
			p = new C;
			p->NhapTT();
			dsTuyenSinh.push_back(p);
			break;
		}
		case 0:
		{
			break;
		}
		default:
		{
			cout << "Lua chon chuc nang khong dung. Hay chon lai" << endl;
			break;
		}
		}
	} while (chose != 0);
}

void TuyenSinh::HienThiTS()
{
	if (dsTuyenSinh.empty() == true)
	{
		cout << "Khong co thi sinh nao." << endl;
		cout << "Hay them cac thi sinh vao danh sach!" << endl;
	}
	else
	{
		cout << "Danh sach thi sinh tuyen sinh hien co: " << endl;
		for (int i = 0; i < dsTuyenSinh.size(); i++)
		{
			dsTuyenSinh[i]->XuatTT();
			cout << " " << endl;
		}
	}
}

void TuyenSinh::TimTS()
{
	int temp = 0;
	int sbdCanTim;
	cout << "Nhap so bao danh can tim kiem:" << endl;
	cin >> sbdCanTim;
	for (int i = 0; i < dsTuyenSinh.size(); i++)
	{
		if (dsTuyenSinh[i]->getSBD() == sbdCanTim)
		{
			cout << "Da tim thay thi sinh: " << endl;
			dsTuyenSinh[i]->XuatTT();
			cout << " " << endl;
			temp++;
		}
	}
	if (temp == 0)
	{
		cout << "Khong tim thay thi sinh co SBD tren." << endl;
	}
}