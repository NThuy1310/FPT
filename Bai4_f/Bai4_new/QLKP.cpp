#include"QLKP.h"

QuanLyKhuPho::QuanLyKhuPho()
{
	//
}
QuanLyKhuPho::~QuanLyKhuPho()
{
	//
}

void QuanLyKhuPho::addKhuPho()
{
	int t_soHo = view.IN_SoHo();
	kp.setSoHo(t_soHo);
	for (int i = 0; i < t_soHo; i++)
	{
		view.OUT_NhapHo(i);

		int t_soNha = view.IN_SoNha();
		while (checkSoNhaKP(t_soNha))
		{
			view.OUT_TrungSoNha();
			t_soNha = view.IN_SoNha();
		}
		dsSoNha.insert(t_soNha);

		int t_soThanhVien = view.IN_SoThanhVien();
		HoGiaDinh t_Ho(t_soNha, t_soThanhVien);
		for (int j = 0; j < t_soThanhVien; j++)
		{
			view.OUT_NhapNguoi(j);
			string t_ten = view.IN_HoTen();
			int t_tuoi = view.IN_Tuoi();
			string t_ngheNghiep = view.IN_NgheNghiep();
			string t_cmnd = view.IN_CMND();
			while (checkCMNDKP(t_cmnd))
			{
				view.OUT_TrungCMND();
				t_cmnd = view.IN_CMND();
			}
			dsCMND.insert(t_cmnd);

			Nguoi t_Nguoi(t_ten, t_tuoi, t_ngheNghiep, t_cmnd);
			t_Ho.addThanhVien(t_Nguoi.getCMND(), t_Nguoi);
		}
		kp.addHoGiaDinh(t_Ho.getSoNha(), t_Ho);
	}
}

void QuanLyKhuPho::show_TTKhuPho()
{
	if (kp.getDSHoGiaDinh().size() == 0)
	{
		view.OUT_KPTrong();
	}
	else
	{
		view.OUT_SoHo(kp.getSoHo());
		int t_count1 = 0;
		map<int, HoGiaDinh> t_DSHo = kp.getDSHoGiaDinh(); //?
		for (auto i = t_DSHo.begin(); i != t_DSHo.end(); i++)
		{
			view.OUT_XuatHo(t_count1);
			view.OUT_SoNha(i->first);
			view.OUT_SoThanhVien(i->second.getSoThanhVien());
			int t_count2 = 0;
			map<string, Nguoi> t_DSThanhVien = i->second.getDSThanhVien(); // ?
			for (auto j = t_DSThanhVien.begin(); j != t_DSThanhVien.end(); j++)
			{
				view.OUT_XuatNguoi(t_count2);
				view.OUT_TTNguoi(j->second.getTen(), j->second.getTuoi(), j->second.getNgheNghiep(), j->second.getCMND());
				t_count2++;
			}
			t_count1++;
		}
	}
}

bool QuanLyKhuPho::checkCMNDKP(string cmnd)
{
	if (dsCMND.count(cmnd) == 1)
	{
		return 1;
	}
	return 0;
}
bool QuanLyKhuPho::checkSoNhaKP(int soNha)
{
	if (dsSoNha.count(soNha) == 1)
	{
		return 1;
	}
	return 0;
}