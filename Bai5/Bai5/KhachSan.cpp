#include"KhachSan.h"

KhachSan::KhachSan()
{
	//
}
KhachSan::~KhachSan()
{
	//
}

bool KhachSan::checkCMND(string cmnd)
{
	if (dsCMND.count(cmnd)  == 1)
	{
		return 1;
	}
	return 0;
}
void KhachSan::addPhongThue()
{
	string t_loaiPhong = view.IN_LoaiPhong();
	int t_soNgayThue = view.IN_SoNgayThue();
	int t_soNguoiThue = view.IN_SoNguoi_1P();

	Phong* p = new Phong(t_soNgayThue, t_loaiPhong);
	for (int i = 0; i < t_soNguoiThue; i++)
	{
		view.OUT_NhapNguoi(i);
		string t_ten = view.IN_HoTen();
		int t_tuoi = view.IN_Tuoi();
		string t_cmnd = view.IN_Cmnd();
		while (dsCMND.count(t_cmnd) == 1)
		{
			view.OUT_TrungCMND();
			t_cmnd = view.IN_Cmnd();
		}
		dsCMND.insert(t_cmnd);

		Nguoi* n = new Nguoi(t_ten, t_tuoi, t_cmnd);
		p->addNguoiThue(n);
		
		n = nullptr;
		delete n;
	}
	dsPhongThue.push_back(p);
	p = nullptr;
	delete p;
}
void KhachSan::deleteNguoiThue()
{
	view.OUT_XoaNguoi();
	string cmndCanXoa = view.IN_Cmnd();
	if (!checkCMND(cmndCanXoa))
	{
		view.OUT_CMND_NotMatch();
	}
	else
	{
		for (int i = 0; i < dsPhongThue.size(); i++)
		{
			if (dsPhongThue[i]->getDSNguoiThue().count(cmndCanXoa) == 1)
			{
				dsPhongThue[i]->deleteNguoiThue(cmndCanXoa);
			}
		}
	}
}
void KhachSan::calTienPhong()
{
	view.OUT_TinhTien();
	string cmnd_CanTim = view.IN_Cmnd();
	if (!checkCMND(cmnd_CanTim))
	{
		view.OUT_CMND_NotMatch();
	}
	else
	{
		for (int i = 0; i < dsPhongThue.size(); i++)
		{
			if (dsPhongThue[i]->getDSNguoiThue().count(cmnd_CanTim) == 1)
			{
				int temp = 0;
				if (dsPhongThue[i]->getLoaiPhong() == "A")
				{
					temp = 500;
					view.OUT_TienPhong(dsPhongThue[i]->getSoNgayThue() * temp);
				}
				if (dsPhongThue[i]->getLoaiPhong() == "B")
				{
					temp = 300;
					view.OUT_TienPhong(dsPhongThue[i]->getSoNgayThue() * temp);
				}
				if (dsPhongThue[i]->getLoaiPhong() == "C")
				{
					temp = 100;
					view.OUT_TienPhong(dsPhongThue[i]->getSoNgayThue() * temp);
				}
			}
		}
	}
}
void KhachSan::showDSPhong()
{
	int t_soPhong = dsPhongThue.size();
	view.OUT_SoPhong(t_soPhong);
	for (int i = 0; i < t_soPhong; i++)
	{
		view.OUT_XuatPhong(i);
		view.OUT_LoaiPhong(dsPhongThue[i]->getLoaiPhong());
		view.OUT_SoNgayThue(dsPhongThue[i]->getSoNgayThue());
		int t_soNguoi = dsPhongThue[i]->getDSNguoiThue().size();
		view.OUT_SoNguoi_1P(t_soNguoi);

		int t_count = 0;
		map<string, Nguoi*> t_DSNguoi = dsPhongThue[i]->getDSNguoiThue();
		for (auto j = t_DSNguoi.begin(); j != t_DSNguoi.end(); j++)
		{
			view.OUT_XuatNguoi(t_count);
			view.OUT_TTNguoi(j->second->getTen(), j->second->getTuoi(), j->second->getCMND());
		}
	}
}