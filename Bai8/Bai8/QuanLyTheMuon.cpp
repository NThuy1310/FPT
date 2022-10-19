#include"QuanLyTheMuon.h"

QLTM::QLTM()
{
	//
}
QLTM::~QLTM()
{
	//
}

bool QLTM::checkMaMuon(int maMuon)
{
	if (dsTheMuon.count(maMuon) == 1)
	{
		return 1;
	}
	return 0;
}
void QLTM::addThe()
{
	view.OUT_AddThe();
	string t_ten = view.IN_TenHS();
	int t_tuoi = view.IN_TuoiHS();
	string t_lop = view.IN_LopHS();
	shared_ptr<SinhVien> t_HS(new SinhVien(t_ten, t_tuoi, t_lop));

	int t_ngayMuon = view.IN_NgayMuon();
	int t_hanTra = view.IN_HanTra();
	int t_soHieuSach = view.IN_SoHieuSach();
	int t_maMuon = view.IN_MaMuon();
	while (checkMaMuon(t_maMuon))
	{
		view.OUT_Trung_MaMuon();
		t_maMuon = view.IN_MaMuon();
	}
	shared_ptr<TheMuon> t_TM(new TheMuon(t_maMuon, t_ngayMuon, t_hanTra, t_soHieuSach, t_HS));
	dsTheMuon.insert({ t_TM->getMaMuon(), t_TM });
}
void QLTM::deleteThe()
{
	view.OUT_DeleteThe();
	int maMuon_CanXoa = view.IN_MaMuon();
	if (!checkMaMuon(maMuon_CanXoa))
	{
		view.OUT_Ma_NotMatch();
	}
	else
	{
		dsTheMuon.erase(maMuon_CanXoa);
		view.OUT_Result_Delete();
	}
}
void QLTM::showThe()
{
	int t_count = 0;
	for (auto i = dsTheMuon.begin(); i != dsTheMuon.end(); i++)
	{
		view.OUT_ShowThe(t_count);
		view.OUT_TTTheMuon(i->second->getMaMuon(), i->second->getNgayMuon(), i->second->getHanTra(), i->second->getSoHieuSach(),
			i->second->getSinhVien()->getTen(), i->second->getSinhVien()->getTuoi(), i->second->getSinhVien()->getLop());
		t_count++;
	}
}