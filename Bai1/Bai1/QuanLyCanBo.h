#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"CanBo.h"
using namespace std;

class QuanLyCanBo
{
private:
	vector<CanBo*> dsCanBo;
public:
	void ThemCanBo();
	void TimCanBo();
	void HienThiCanBo();
	QuanLyCanBo()
	{
		int chose;
		do
		{
			cout << "Hay nhap vao lua chon cua ban: " << endl;
			cout << "1. Them can bo" << endl;
			cout << "2. Tim kiem can bo" << endl;
			cout << "3. Danh Sach can bo" << endl;
			cout << "0. Thoat chuong trinh" << endl;
			cin >> chose;
			switch (chose)
			{
			case 1:
			{
				ThemCanBo();
				break;
			}
			case 2:
			{
				TimCanBo();
				break;
			}
			case 3:
			{
				HienThiCanBo();
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

void QuanLyCanBo::ThemCanBo()
{
	CanBo* p;
	int chose;
	do
	{
		cout << "Hay nhap vao lua chon cua ban: " << endl;
		cout << "1. Them cong nhan" << endl;
		cout << "2. Them ky su" << endl;
		cout << "3. Them nhan vien" << endl;
		cout << "0. Thoat" << endl;
		cin >> chose;
		switch (chose)
		{
		case 1:
		{
			p = new CongNhan;
			p->NhapTT();
			dsCanBo.push_back(p);
			break;
		}
		case 2:
		{
			p = new KySu;
			p->NhapTT();
			dsCanBo.push_back(p);
			break;
		}
		case 3:
		{
			p = new NhanVien;
			p->NhapTT();
			dsCanBo.push_back(p);
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
void QuanLyCanBo::TimCanBo()
{
	int temp = 0;
	string str;
	cout << "Nhap ten can bo can tim kiem:" << endl;
	cin.ignore();
	getline(cin, str);
	for (int i = 0; i < dsCanBo.size(); i++)
	{
		if (dsCanBo[i]->get_HoTen() == str)
		{
			cout << "Da tim thay can bo: " << endl;
			dsCanBo[i]->XuatTT();
			cout << " " << endl;
			temp++;
		}
	}
	if (temp == 0)
	{
		cout << "Khong tim thay can bo." << endl;
	}
}

void QuanLyCanBo::HienThiCanBo()
{
	if (dsCanBo.empty() == true)
	{
		cout << "Khong co can bo nao." << endl;
		cout << "Hay them cac can bo vao danh sach!" << endl;
	}
	else
	{
		cout << "Danh sach can bo nhan vien hien co: " << endl;
		for (int i = 0; i < dsCanBo.size(); i++)
		{
			dsCanBo[i]->XuatTT();
			cout << " " << endl;
		}
	}
}
