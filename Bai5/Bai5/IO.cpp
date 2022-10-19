#include"IO.h"

string IO::IN_HoTen()
{
	cout << "Nhap ho va ten: " << endl;
	string ten;
	getline(cin >> ws, ten);
	return ten;
}
int IO::IN_Tuoi()
{
	cout << "Nhap tuoi: " << endl;
	int tuoi;
	cin >> tuoi;
	return tuoi;
}
string IO::IN_Cmnd()
{
	cout << "Nhap so chung minh nhan dan: " << endl;
	string cmnd;
	getline(cin >> ws, cmnd);
	return cmnd;
}
int IO::IN_SoNgayThue()
{
	cout << "Nhap so ngay thue phong: " << endl;
	int soNgayThue;
	cin >> soNgayThue;
	return soNgayThue;
}
string IO::IN_LoaiPhong()
{
	cout << "Nhap loai phong: " << endl;
	string loaiPhong;
	getline(cin >> ws, loaiPhong);
	return loaiPhong;
}
int IO::IN_SoNguoi_1P()
{
	cout << "Nhap so nguoi thue phong nay: " << endl;
	int soNguoiThue;
	cin >> soNguoiThue;
	return soNguoiThue;
}

void IO::OUT_TTNguoi(string ten, int tuoi, string cmnd)
{
	cout << "Ho va ten: " << ten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "So chung minh nhan dan: " << cmnd << endl;
	cout << endl;
}
void IO::OUT_SoNgayThue(int soNgayThue)
{
	cout << "Phong co so ngay thue la: " << soNgayThue << endl;
}
void IO::OUT_LoaiPhong(string loaiPhong)
{
	cout << "Loai phong thue: " << loaiPhong << endl;
}
void IO::OUT_SoNguoi_1P(int soNguoiThue)
{
	cout << "Phong co so nguoi dang thue la: " << soNguoiThue << endl;
}
void IO::OUT_SoPhong(int soPhong)
{
	cout << "So phong da thue cua khach san: " << soPhong << endl;
}

void IO::OUT_NhapNguoi(int i)
{
	cout << "Nhap thong tin nguoi thue thu " << i + 1 << endl;
}
void IO::OUT_XuatNguoi(int i)
{
	cout << "Thong tin nguoi thu " << i + 1 << endl;
}
void IO::OUT_XuatPhong(int i)
{
	cout << "Thong tin phong thu " << i + 1 << endl;
}
void IO::OUT_XoaNguoi()
{
	cout << "Can nhap vao so chung minh nhan dan cua nguoi can xoa." << endl;
}
void IO::OUT_CMND_NotMatch()
{
	cout << "So chung minh nhan dan khong ton tai." << endl;
}
void IO::OUT_TinhTien()
{
	cout << "Can nhap vao so chung minh nhan dan cua nguoi can tinh tien phong. " << endl;
}
void IO::OUT_TienPhong(int tienPhong)
{
	cout << "Tien phong phai tra cua khach hang tren: " << tienPhong << endl;
}
void IO::OUT_TrungCMND()
{
	cout << "So CMND bi trung. Hay nhap lai so CMND chinh xac cua nguoi nay." << endl;
}