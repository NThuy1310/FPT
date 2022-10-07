#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"TaiLieu.h"

using namespace std;

class QuanLyTaiLieu
{
public:
	QuanLyTaiLieu();
	void ThemTL();
	void XoaTL();
	void HienThiTL();
	void TimTL();

private:
	vector<TaiLieu*> dsTaiLieu;
};

QuanLyTaiLieu::QuanLyTaiLieu()
{
	int chose;
	do
	{
		cout << "Hay nhap vao lua chon cua ban: " << endl;
		cout << "1. Them tai lieu" << endl;
		cout << "2. Xoa tai lieu theo ma" << endl;
		cout << "3. Danh sach tai lieu" << endl;
		cout << "4. Tim kiem tai lieu theo loai" << endl;
		cout << "0. Thoat chuong trinh" << endl;
		cin >> chose;
		switch (chose)
		{
		case 1:
		{
			ThemTL();
			break;
		}
		case 2:
		{
			XoaTL();
			break;
		}
		case 3:
		{
			HienThiTL();
			break;
		}
		case 4:
		{
			TimTL();
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
void QuanLyTaiLieu::ThemTL()
{
	TaiLieu* p;
	int chose;
	do
	{
		cout << "Hay nhap vao lua chon cua ban: " << endl;
		cout << "1. Them sach" << endl;
		cout << "2. Them bao" << endl;
		cout << "3. Them tap chi" << endl;
		cout << "0. Thoat" << endl;
		cin >> chose;
		switch (chose)
		{
		case 1:
		{
			p = new Sach;
			p->NhapTL();
			dsTaiLieu.push_back(p);
			break;
		}
		case 2:
		{
			p = new TapChi;
			p->NhapTL();
			dsTaiLieu.push_back(p);
			break;
		}
		case 3:
		{
			p = new Bao;
			p->NhapTL();
			dsTaiLieu.push_back(p);
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

void QuanLyTaiLieu::XoaTL()
{
	if (dsTaiLieu.empty() == true)
	{
		cout << "Danh sach tai lieu dang trong. Khong the xoa!" << endl;
	}
	else
	{
		string MaTLCanXoa;
		cout << "Nhap ma tai lieu can xoa: " << endl;
		cin.ignore();
		getline(cin, MaTLCanXoa);

		int temp = 1;
		for (int i = 0; i < dsTaiLieu.size(); i++)
		{
			if (dsTaiLieu[i]->getMaTL() == MaTLCanXoa)
			{
				dsTaiLieu.erase(dsTaiLieu.begin() + i);
				temp = 0;
			}
		}
		if (temp == 1)
		{
			cout << "Ma tai lieu khong ton tai" << endl;
		}
	}
}

void QuanLyTaiLieu::HienThiTL()
{
	if (dsTaiLieu.empty() == true)
	{
		cout << "Danh sach tai lieu trong." << endl;
		cout << "Hay them cac tai lieu vao danh sach!" << endl;
	}
	for (int i = 0; i < dsTaiLieu.size(); i++)
	{
		dsTaiLieu[i]->XuatTL();
		cout << "" << endl;
	}
}
void QuanLyTaiLieu::TimTL()
{
	string TLCanTim;
	cout << "Nhap loai tai lieu can tim: " << endl;
	cin.ignore();
	getline(cin, TLCanTim);
	int temp = 0;
	for (int i = 0; i < dsTaiLieu.size(); i++)
	{
		if (dsTaiLieu[i]->getLoaiTL() == TLCanTim)
		{
			dsTaiLieu[i]->XuatTL();
			cout << "" << endl;
			temp++;
		}
	}
	if (temp == 0)
	{
		cout << "Khong co loai tai lieu can tim" << endl;
	}
}