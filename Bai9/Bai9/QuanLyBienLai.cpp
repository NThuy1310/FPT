#include"QuanLyBienLai.h"

bool QLBL::checkMS_CongTo(string MS_CongTo)
{
	if (DSBienLai.count(MS_CongTo) == 1)
	{
		return 1;
	}
	return 0;
}
void QLBL::addHo(string TenChuHo, int SoNha, string MS_CongTo, int SoDienCu, int SoDienMoi)
{
	int t_TienDien = 0;
	shared_ptr<KhachHang> t_KH(new KhachHang(TenChuHo, SoNha, MS_CongTo));
	shared_ptr<BienLai> t_BL(new BienLai(SoDienCu, SoDienMoi, t_TienDien, t_KH));
	DSBienLai.insert({ t_BL->getTT_KhachHang()->getMS_CongTo(), t_BL });
}
void QLBL::deleteHo(string MS_CongTo_CanXoa)
{
	DSBienLai.erase(MS_CongTo_CanXoa);
}
void QLBL::modifyTenHo(string MS_CongTo_CanSua, string TenHo_Sua)
{
	map<string, shared_ptr<BienLai>>::iterator t_Ho = DSBienLai.find(MS_CongTo_CanSua);
	t_Ho->second->getTT_KhachHang()->setTenChuHo(TenHo_Sua);
}
void QLBL::modifySoNha(string MS_CongTo_CanSua, int SoNha_Sua)
{
	map<string, shared_ptr<BienLai>>::iterator t_Ho = DSBienLai.find(MS_CongTo_CanSua);
	t_Ho->second->getTT_KhachHang()->setSoNha(SoNha_Sua);
}
void QLBL::modifyMS_CongTo(string MS_CongTo_CanSua, string MS_CongTo_Sua)
{
	map<string, shared_ptr<BienLai>>::iterator t_Ho = DSBienLai.find(MS_CongTo_CanSua);
	string t_Ten = t_Ho->second->getTT_KhachHang()->getTenChuHo();
	int t_SoNha = t_Ho->second->getTT_KhachHang()->getSoNha();
	int t_SoMoi = t_Ho->second->getSoDienMoi();
	int t_SoCu = t_Ho->second->getSoDienCu();
	int t_TienDien = 0;
	shared_ptr<KhachHang> t_KH(new KhachHang(t_Ten, t_SoNha, MS_CongTo_Sua));
	shared_ptr<BienLai> t_BL(new BienLai(t_SoCu, t_SoMoi, t_TienDien, t_KH));
	DSBienLai.insert({ t_BL->getTT_KhachHang()->getMS_CongTo(), t_BL });

	DSBienLai.erase(MS_CongTo_CanSua);
}
void QLBL::modifyAll(string MS_CongTo_CanSua, string TenHo_Sua, int SoNha_Sua, string MS_CongTo_Sua)
{
	map<string, shared_ptr<BienLai>>::iterator t_Ho = DSBienLai.find(MS_CongTo_CanSua);
	int t_SoMoi = t_Ho->second->getSoDienMoi();
	int t_SoCu = t_Ho->second->getSoDienCu();
	int t_TienDien = 0;
	shared_ptr<KhachHang> t_KH(new KhachHang(TenHo_Sua, SoNha_Sua, MS_CongTo_Sua));
	shared_ptr<BienLai> t_BL(new BienLai(t_SoCu, t_SoMoi, t_TienDien, t_KH));
	DSBienLai.insert({ t_BL->getTT_KhachHang()->getMS_CongTo(), t_BL });

	DSBienLai.erase(MS_CongTo_CanSua);
}
int QLBL::calculateTienDien(string MS_CongTo_CanTim)
{
	map<string, shared_ptr<BienLai>>::iterator t_Ho = DSBienLai.find(MS_CongTo_CanTim);
	int t_TienDien = (t_Ho->second->getSoDienMoi() - t_Ho->second->getSoDienCu()) * 5;
	t_Ho->second->setTienDien(t_TienDien);
	return t_Ho->second->getTienDien();
}

map<string, shared_ptr<BienLai>> QLBL::getDSBienLai()
{
	return DSBienLai;
}