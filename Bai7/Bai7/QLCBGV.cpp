#include"QLCBGV.h"

QLCBGV::QLCBGV()
{
	//
}
QLCBGV::~QLCBGV()
{
	//
}

bool QLCBGV::checkMS(string msgv)
{
	if (dsMSGV.count(msgv) == 1)
	{
		return 1;
	}
	return 0;
}
void QLCBGV::addGV()
{
	string t_ten = view.IN_Ten();
	int t_tuoi = view.IN_Tuoi();
	string t_queQuan = view.IN_QueQuan();
	string t_msgv = view.IN_MSGV();
	while (checkMS(t_msgv))
	{
		view.OUT_TrungMSGV();
		t_msgv = view.IN_MSGV();
	}
	dsMSGV.insert(t_msgv);

	shared_ptr<CBGV> p(new CBGV(t_ten, t_tuoi, t_queQuan, t_msgv));
	dsCBGV.insert({ p->getMSGV(), p });
}
void QLCBGV::deleteGV()
{
	view.OUT_XoaGV();
	string msgv_CanXoa = view.IN_MSGV();
	if (!checkMS(msgv_CanXoa))
	{
		view.OUT_MSGV_NotMatch();
	}
	else
	{
		dsCBGV.erase(msgv_CanXoa);
	}
}
void QLCBGV::calLuongThuc()
{
	view.OUT_CalLuong();
	string msgv_CanTim = view.IN_MSGV();
	if (!checkMS(msgv_CanTim))
	{
		view.OUT_MSGV_NotMatch();
	}
	else
	{
		view.OUT_NhapTTLuong();
		auto t_GV = dsCBGV.find(msgv_CanTim);
		view.OUT_TTGV(t_GV->second->getTen(), t_GV->second->getTuoi(), t_GV->second->getQueQuan(), t_GV->second->getMSGV());

		int t_luongCung = view.IN_LuongCung();
		int t_thuong = view.IN_Thuong();
		int t_phat = view.IN_Phat();
		int t_LuongThuc = t_luongCung + t_thuong - t_phat;
		
		t_GV->second->setLuongCung(t_luongCung);
		t_GV->second->setThuong(t_thuong);
		t_GV->second->setPhat(t_phat);
		t_GV->second->setLuongThuc(t_LuongThuc);

		
		view.OUT_LuongThuc(t_GV->second->getLuongThuc());
	}
}