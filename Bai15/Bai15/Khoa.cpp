#include"Khoa.h"

Khoa::Khoa()
{
	//
}
Khoa::Khoa(string tenKhoa, map<string, shared_ptr<SinhVien>> dsSVTheoHoc)
{
	this->tenKhoa = tenKhoa;
	this->dsSVTheoHoc = dsSVTheoHoc;
}
Khoa::~Khoa()
{
	//
}

void Khoa::setTenKhoa(string tenKhoa)
{
	this->tenKhoa = tenKhoa;
}
void Khoa::setDSSVTheoHoc(map<string, shared_ptr<SinhVien>> dsSVTheoHoc)
{
	this->dsSVTheoHoc = dsSVTheoHoc;
}

string Khoa::getTenKhoa()
{
	return tenKhoa;
}
map<string, shared_ptr<SinhVien>> Khoa::getDSSVTheoHoc()
{
	return dsSVTheoHoc;
}

void Khoa::addSV(shared_ptr<SinhVien> newSV)
{
	dsSVTheoHoc.insert({ newSV->getMASV(), newSV });
}

bool Khoa::isSVCQ(string maSVCanTim)
{
	if (dsSVTheoHoc.count(maSVCanTim) == 1)
	{
		if (dsSVTheoHoc.find(maSVCanTim)->second->getLoaiSV() == "Chinh Quy")
		{
			return 1;
		}
	}
	return 0;
}
int Khoa::getTongSVCQ()
{
	int tcount = 0;
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		if (i->second->getLoaiSV() == "Chinh Quy")
		{
			tcount++;
		}
	}
	return tcount;
}
map<string, shared_ptr<SinhVien>> Khoa::findDiemDVCaoNhat()
{
	map<string, shared_ptr<SinhVien>> dsSVDiemDVCaoNhat;
	int MaxDiemDaoVao = dsSVTheoHoc.begin()->second->getDiemDauVao();
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		int tDiemDauVao = i->second->getDiemDauVao();
		if (tDiemDauVao > MaxDiemDaoVao)
		{
			MaxDiemDaoVao = tDiemDauVao;
		}
	}
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		if (MaxDiemDaoVao == i->second->getDiemDauVao())
		{
			dsSVDiemDVCaoNhat.insert({ i->first, i->second });
		}
	}
	return dsSVDiemDVCaoNhat;
}
map<string, shared_ptr<SinhVien>> Khoa::getDSSVTC(string noiLKDTCanTim)
{
	map<string, shared_ptr<SinhVien>> dsSVLKDT;
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		string tNoiLKDT = dynamic_pointer_cast<SVTC>(i->second)->getNoiLKDT();
		if (tNoiLKDT == noiLKDTCanTim)
		{
			dsSVLKDT.insert({ i->first, i->second });
		}
	}
	return dsSVLKDT;
}
map<string, shared_ptr<SinhVien>> Khoa::getDSSVCoDiemTBLonHon8()
{
	map<string, shared_ptr<SinhVien>> dsSVCoDiemTBLonHon8;
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		map<string, shared_ptr<KQHT>> tDSKQHT = i->second->getDS_KQHT();
		double t = 8.0;
		if (tDSKQHT.end()->second->getTBMon1Ki() >= t)
		{
			dsSVCoDiemTBLonHon8.insert({ i->first, i->second });
		}
	}
}

map<string, shared_ptr<SinhVien>> Khoa::findDiemTBCaoNhat(string hocKiCanTim)
{
	map<string, shared_ptr<SinhVien>> dsDiemTBCaoNhat;
	double MaxTBMon = dsSVTheoHoc.begin()->second->getDS_KQHT().find(hocKiCanTim)->second->getTBMon1Ki();
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		map<string, shared_ptr<KQHT>> tdsKQHT = i->second->getDS_KQHT();
		if (tdsKQHT.count(hocKiCanTim) == 1)
		{
			double tTBMon = tdsKQHT.find(hocKiCanTim)->second->getTBMon1Ki();
			if (tTBMon > MaxTBMon)
			{
				MaxTBMon = tTBMon;
			}
		}
	}
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		map<string, shared_ptr<KQHT>> tdsKQHT = i->second->getDS_KQHT();
		if (tdsKQHT.count(hocKiCanTim) == 1)
		{
			double tTBMon = tdsKQHT.find(hocKiCanTim)->second->getTBMon1Ki();
			if (tTBMon == MaxTBMon)
			{
				dsDiemTBCaoNhat.insert({ i->first, i->second });
			}
		}
	}
}
int Khoa::getTongSVTheoNamVaoHoc(string namVaoHocCanTim)
{
	int tCount = 0;
	for (auto i = dsSVTheoHoc.begin(); i != dsSVTheoHoc.end(); i++)
	{
		if (i->second->getNamHoc() == namVaoHocCanTim)
		{
			tCount++;
		}
	}
	return tCount;
}