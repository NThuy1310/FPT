#include"QuanLyVanBan.h"

bool QLVB::checkSTT(int stt)
{
	if (DsVanBan.count(stt) == 1)
	{
		return 1;
	}
	return 0;
}

void QLVB::ThemVanban(int stt, string str)
{
	shared_ptr<VanBan> VB(new VanBan(stt, str));
	DsVanBan.insert({ VB->getSTT(), VB });
}
int QLVB::DemSoTu(int stt)
{	
	int t_count = 0;
	string word;
	string* t_str = DsVanBan.find(stt)->second->getXauKiTu();
	stringstream s(*t_str);
	while (s >> word)
	{
		t_count++;
	}
	return t_count;
}
int QLVB::DemKiTu_Aa(int stt)
{
	int t_count = 0;
	string* t_str = DsVanBan.find(stt)->second->getXauKiTu();
	for (char x: *t_str)
	{
		if (x == 'A' || x == 'a')
		{
			t_count++;
		}
	}
	return t_count;
}
string* QLVB::ChuanHoa(int stt)
{
	string* t_str = DsVanBan.find(stt)->second->getXauKiTu(); 
	stringstream s(*t_str);
	t_str->clear();
	string word;
	while (s >> word)
	{
		*t_str += word + " ";
	}

	return t_str;
}

map<int, shared_ptr<VanBan>> QLVB::getDsVanBan()
{
	return DsVanBan;
}