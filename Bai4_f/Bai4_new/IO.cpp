#include"IO.h"

string IO::IN_HoTen()
{
	cout << "Nhap ho va ten: " << endl;
	string hoTen;
	getline(cin >> ws, hoTen);
	return hoTen;
}
int IO::IN_Tuoi()
{
	cout << "Nhap tuoi: " << endl;
	int tuoi;
	cin >> tuoi;
	return tuoi;
}
string IO::IN_NgheNghiep()
{
	cout << "Nhap nghe nghiep: " << endl;
	string ngheNghiep;
	getline(cin >> ws, ngheNghiep);
	return ngheNghiep;
}
string IO::IN_CMND()
{
	cout << "Nhap so chung minh nhan dan: " << endl;
	string cmnd;
	getline(cin >> ws, cmnd);
	return cmnd;
}
int IO::IN_SoThanhVien()
{
	cout << "Nhap so thanh vien trong ho gia dinh: " << endl;
	int soThanhVien;
	cin >> soThanhVien;
	return soThanhVien;
}
int IO::IN_SoNha()
{
	cout << "Nhap so nha (dia chi): " << endl;
	int soNha;
	cin >> soNha;
	return soNha;
}
int IO::IN_SoHo()
{
	cout << "Nhap so ho gia dinh trong khu pho: " << endl;
	int soHo;
	cin >> soHo;
	return soHo;
}

void IO::OUT_TTNguoi(string ten, int tuoi, string ngheNghiep, string cmnd)
{
	cout << "Ho va ten: " << ten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Nghe nghiep: " << ngheNghiep << endl;
	cout << "So chung minh nhan dan: " << cmnd << endl;
	cout << endl;
}
void IO::OUT_SoThanhVien(int soThanhVien)
{
	cout << "So thanh vien cua ho gia dinh: " << soThanhVien << endl;
}
void IO::OUT_SoNha(int soNha)
{
	cout << "So nha: " << soNha << endl;
}
void IO::OUT_SoHo(int soHo)
{
	cout << "So ho gia dinh cua khu pho: " << soHo << endl;
}

void IO::OUT_TrungCMND()
{
	cout << "So chung minh nhan dan bi trung. Hay nhap vao CMND chinh xac cua nguoi nay." << endl;
}
void IO::OUT_TrungSoNha()
{
	cout << "So nha bi trung. Hay nhap vao so nha chinh xac cua ho gia dinh nay." << endl;
}

void IO::OUT_NhapHo(int i)
{
	cout << "Nhap thong tin ho gia dinh thu " << i + 1 << endl;
}
void IO::OUT_NhapNguoi(int i)
{
	cout << "Nhap thong tin nguoi thu " << i + 1 << endl;
}
void IO::OUT_XuatHo(int i)
{
	cout << "Thong tin ho gia dinh thu " << i + 1 << endl;
}
void IO::OUT_XuatNguoi(int i)
{
	cout << "Thong tin nguoi thu " << i + 1 << endl;
}
void IO::OUT_KPTrong()
{
	cout << "Khu pho chua co thong tin. Moi lua chon nhap vao thong tin khu pho (1)." << endl;
}