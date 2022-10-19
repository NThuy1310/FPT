#include "IO.h"

string IO::IN_Ten()
{
	string t_ten;
	cout << "Nhap vao ho va ten hoc sinh: " << endl;
	getline(cin >> ws, t_ten);
	return t_ten;
}
int IO::IN_Tuoi()
{
	int t_tuoi;
	cout << "Nhap vao tuoi hoc sinh: " << endl;
	cin >> t_tuoi;
	return t_tuoi;
}
string IO::IN_QueQuan()
{
	string t_queQuan;
	cout << "Nhap vao que quan hoc sinh: " << endl;
	getline(cin >> ws, t_queQuan);
	return t_queQuan;
}
string IO::IN_Lop()
{
	string t_lop;
	cout << "Nhap vao lop hoc sinh: " << endl;
	getline(cin >> ws, t_lop);
	return t_lop;

}

void IO::OUT_TTHocSinh(string ten, int tuoi, string queQuan, string lop)
{
	cout << "Ho ten: " << ten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Que quan: " << queQuan << endl;
	cout << "Lop: " << lop << endl;
	cout << endl;
}
void IO::OUT_NOTMATCH()
{
	cout << "Khong tim thay hoc sinh phu hop." << endl;
}

void IO::OUT_RESULT(int n)
{
	cout << "So luong hoc sinh co tuoi 23 va que quan o DN: " << n << endl;
}