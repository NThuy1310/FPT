#include"IO.h"

void IO::addVanBan()
{
	int t_STT;
	string t_str;
	cout << "Them moi van ban: " << endl;
	cout << "Nhap so thu tu cua van ban: " << endl;
	cin >> t_STT;
	while (ql.checkSTT(t_STT))
	{
		cout << "So thu tu da ton tai. Nhap lai STT chinh xac." << endl;
		cout << "Nhap so thu tu cua van ban: " << endl;
		cin >> t_STT;
	}
	cout << "Nhap van ban: " << endl;
	getline(cin >> ws, t_str);

	ql.ThemVanban(t_STT, t_str);
}
void IO::countTu()
{
	int STT_CanDem;
	cout << "Nhap vao so thu tu cua van ban can dem: " << endl;
	cin >> STT_CanDem;
	if (!ql.checkSTT(STT_CanDem))
	{
		cout << "So thu tu khong ton tai." << endl;
	}
	else
	{
		cout << "So tu co trong van ban: " << ql.DemSoTu(STT_CanDem) << endl;
	}
}
void IO::countKiTu_Aa()
{
	int STT_CanDem;
	cout << "Nhap vao so thu tu cua van ban can dem: " << endl;
	cin >> STT_CanDem;
	if (!ql.checkSTT(STT_CanDem))
	{
		cout << "So thu tu khong ton tai." << endl;
	}
	else
	{
		cout << "So ki tu a (khong phan biet hoa thuong) co trong van ban: " << ql.DemKiTu_Aa(STT_CanDem) << endl;
	}
}
void IO::standardizedVanBan()
{
	int STT_CanDem;
	cout << "Nhap vao so thu tu cua van ban can dem: " << endl;
	cin >> STT_CanDem;
	if (!ql.checkSTT(STT_CanDem))
	{
		cout << "So thu tu khong ton tai." << endl;
	}
	else
	{
		map<int, shared_ptr<VanBan>> t_DS = ql.getDsVanBan();

		cout << "Van ban truoc khi chuan hoa: '" << *t_DS.find(STT_CanDem)->second->getXauKiTu() << "'" << endl;
		cout << "Van ban sau khi chuan hoa: '" << *ql.ChuanHoa(STT_CanDem) << "'" << endl;
	}
}