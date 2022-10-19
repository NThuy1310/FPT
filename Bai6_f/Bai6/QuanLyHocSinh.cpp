#include"QuanLyHocSinh.h"

QuanLyHocSinh::QuanLyHocSinh()
{
	//
}
QuanLyHocSinh::~QuanLyHocSinh()
{
	//
}

void QuanLyHocSinh::ThemHS()
{
	string t_ten = io_view.IN_Ten();
	int t_tuoi = io_view.IN_Tuoi();
	string t_queQuan = io_view.IN_QueQuan();
	string t_lop = io_view.IN_Lop();

	HocSinh* hs = new HocSinh(t_ten, t_tuoi, t_queQuan, t_lop);

	dsHocSinh.push_back(hs);
	hs = nullptr;
	delete hs;
}

void QuanLyHocSinh::HienThi()
{
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		auto t = dsHocSinh[i];
		io_view.OUT_TTHocSinh(t->getTen(), t->getTuoi(), t->getQueQuan(), t->getLop());
	}
}
void QuanLyHocSinh::HienThiHS_20()
{
	bool flag = 0;
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		if (dsHocSinh[i]->getTuoi() == 20)
		{
			auto t = dsHocSinh[i];
			io_view.OUT_TTHocSinh(t->getTen(), t->getTuoi(), t->getQueQuan(), t->getLop());
			flag = 1;
		}
	}
	if (flag == 0)
	{
		io_view.OUT_NOTMATCH();
	}
}
void QuanLyHocSinh::HienThiHS_23_DN()
{
	bool flag = 0;
	int count = 0;
	for (int i = 0; i < dsHocSinh.size(); i++)
	{
		if ((dsHocSinh[i]->getTuoi() == 23) && (dsHocSinh[i]->getQueQuan() == "DN"))
		{
			flag = 1;
			count++;
		}
	}
	if (flag == 0)
	{
		io_view.OUT_NOTMATCH();
	}
	else
	{
		io_view.OUT_RESULT(count);
	}
}