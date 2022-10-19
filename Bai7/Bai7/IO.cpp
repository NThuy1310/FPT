#include"IO.h"

string IO::IN_Ten()
{
	string ten;
	cout << "Nhap ho ten giao vien: " << endl;
	getline(cin >> ws, ten);
	return ten;
}
int IO::IN_Tuoi()
{
	int tuoi;
	cout << "Nhap tuoi: " << endl;
	cin >> tuoi;
	return tuoi;
}
string IO::IN_QueQuan()
{
	string queQuan;
	cout << "Nhap que quan: " << endl;
	getline(cin >> ws, queQuan);
	return queQuan;
}
string IO::IN_MSGV()
{
	string msgv;
	cout << "Nhap ma so giao vien: " << endl;
	getline(cin >> ws, msgv);
	return msgv;
}
int IO::IN_LuongCung()
{
	int luongCung;
	cout << "Nhap luong cung: " << endl;
	cin >> luongCung;
	return luongCung;
}
int IO::IN_Thuong()
{
	int thuong;
	cout << "Nhap thuong: " << endl;
	cin >> thuong;
	return thuong;
}
int IO::IN_Phat()
{
	int phat;
	cout << "Nhap phat: " << endl;
	cin >> phat;
	return phat;
}

void IO::OUT_TTGV(string ten, int tuoi, string queQuan, string msgv)
{
	cout << "Ho va ten: " << ten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Que quan: " << queQuan << endl;
	cout << "Ma so giao vien: " << msgv << endl;
	cout << endl;
}

void IO::OUT_TrungMSGV()
{
	cout << "Ma so giao vien bi trung. Hay nhap vao ma so chinh xac cua giao vien nay" << endl;
}
void IO::OUT_XoaGV()
{
	cout << "Can nhap vao ma so cua giao vien can xoa: " << endl;
}
void IO::OUT_MSGV_NotMatch()
{
	cout << "Ma so giao vien khong ton tai." << endl;
}
void IO::OUT_CalLuong()
{
	cout << "Nhap vao ma so cua giao vien can tinh luong: " << endl;
}
void IO::OUT_NhapTTLuong()
{
	cout << "Cac thong tin ca nhan cua giao vien tren: " << endl;
}
void IO::OUT_LuongThuc(int i)
{
	cout << "Luong thuc nhan cua giao vien tren: " << i << endl;
}