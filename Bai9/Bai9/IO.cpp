#include"IO.h"

void IO::ThemHo()
{
	string t_Ten;
	int t_SoNha;
	string t_MS;
	int t_SoMoi;
	int t_SoCu;
	cout << "Nhap thong tin ho su dung dien: " << endl;
	cout << "Nhap ho ten chu ho: " << endl;
	getline(cin >> ws, t_Ten);
	while (invalid_Input.checkName(t_Ten))
	{
		cout << "Ten chu ho khong hop le. Hay nhap lai ho ten chinh xac!" << endl;
		getline(cin >> ws, t_Ten);
	}
	cout << "Nhap so nha: " << endl;
	cin >> t_SoNha;
	cout << "Nhap ma so cong to dien: " << endl;
	getline(cin >> ws, t_MS);
	while (controller.checkMS_CongTo(t_MS))
	{
		cout << "Ma so cong to dien bi trung. Hay nhap lai ma so chinh xac." << endl;
		cout << "Nhap ma so cong to dien: " << endl;
		getline(cin >> ws, t_MS);
	}
	cout << "Nhap so dien cu: " << endl;
	cin >> t_SoCu;
	while (invalid_Input.checkUnsignedInterger(to_string(t_SoCu)))
	{
		cout << "Nhap sai so dien. Hay nhap lai. (So dien la mot so nguyen duong)" << endl;
		cout << "Nhap so dien cu: " << endl;
		cin >> t_SoCu;
	}
	cout << "Nhap so dien moi: " << endl;
	cin >> t_SoMoi;
	while (invalid_Input.checkUnsignedInterger(to_string(t_SoMoi)))
	{
		cout << "Nhap sai so dien moi. Hay nhap lai. (So dien moi can la mot so nguyen duong va lon hon so dien cu)" << endl;
		cout << "Nhap so dien moi: " << endl;
		cin >> t_SoMoi;
	}
	while (t_SoMoi < t_SoCu)
	{
		cout << "Nhap sai so dien moi. Hay nhap lai. (So dien moi can la mot so nguyen duong va lon hon so dien cu)" << endl;
		cout << "Nhap so dien moi: " << endl;
		cin >> t_SoMoi;
	}
	controller.addHo(t_Ten, t_SoNha, t_MS, t_SoCu, t_SoMoi);
}

void IO::XoaHo()
{
	string MS_CanXoa;
	cout << "Nhap vao ma so cong to dien cua ho can xoa: " << endl;
	getline(cin >> ws, MS_CanXoa);
	if (!controller.checkMS_CongTo(MS_CanXoa))
	{
		cout << "Ma so cong to dien tren khong ton tai." << endl;
	}
	else
	{
		controller.deleteHo(MS_CanXoa);
	}
}

void IO::SuaTenHo()
{
	string MS_CanSua;
	cout << "Nhap vao ma so cong to dien cua ho can sua thong tin: " << endl;
	getline(cin >> ws, MS_CanSua);
	if (!controller.checkMS_CongTo(MS_CanSua))
	{
		cout << "Ma so cong to dien tren khong ton tai." << endl;
	}
	else
	{
		string t_Ten;
		cout << "Nhap ho ten moi cua chu ho: " << endl;
		getline(cin >> ws, t_Ten);
		while (invalid_Input.checkName(t_Ten))
		{
			cout << "Ten chu ho khong hop le. Hay nhap lai ho ten chinh xac!" << endl;
			cout << "Nhap ho ten moi cua chu ho: " << endl;
			getline(cin >> ws, t_Ten);
		}
		controller.modifyTenHo(MS_CanSua, t_Ten);
	}
}
void IO::SuaSoNha()
{
	string MS_CanSua;
	cout << "Nhap vao ma so cong to dien cua ho can sua thong tin: " << endl;
	getline(cin >> ws, MS_CanSua);
	if (!controller.checkMS_CongTo(MS_CanSua))
	{
		cout << "Ma so cong to dien tren khong ton tai." << endl;
	}
	else
	{
		int t_SoNha;
		cout << "Nhap so nha moi: " << endl;
		cin >> t_SoNha;
		
		controller.modifySoNha(MS_CanSua, t_SoNha);
	}
}
void IO::SuaMaSo()
{
	string MS_CanSua;
	cout << "Nhap vao ma so cong to dien cua ho can sua thong tin: " << endl;
	getline(cin >> ws, MS_CanSua);
	if (!controller.checkMS_CongTo(MS_CanSua))
	{
		cout << "Ma so cong to dien tren khong ton tai." << endl;
	}
	else
	{
		string t_MS_Sua;
		cout << "Nhap ma so cong to dien moi: " << endl;
		getline(cin >> ws, t_MS_Sua);
		
		controller.modifyMS_CongTo(MS_CanSua, t_MS_Sua);
	}
}
void IO::SuaTTHo()
{
	string MS_CanSua;
	cout << "Nhap vao ma so cong to dien cua ho can sua thong tin: " << endl;
	getline(cin >> ws, MS_CanSua);
	if (!controller.checkMS_CongTo(MS_CanSua))
	{
		cout << "Ma so cong to dien tren khong ton tai." << endl;
	}
	else
	{
		string t_Ten;
		cout << "Nhap ho ten moi cua chu ho: " << endl;
		getline(cin >> ws, t_Ten);
		while (invalid_Input.checkName(t_Ten))
		{
			cout << "Ten chu ho khong hop le. Hay nhap lai ho ten chinh xac!" << endl;
			cout << "Nhap ho ten moi cua chu ho: " << endl;
			getline(cin >> ws, t_Ten);
		}

		int t_SoNha;
		cout << "Nhap so nha moi: " << endl;
		cin >> t_SoNha;

		string t_MS_Sua;
		cout << "Nhap ma so cong to dien moi: " << endl;
		getline(cin >> ws, t_MS_Sua);

		controller.modifyAll(MS_CanSua, t_Ten, t_SoNha, t_MS_Sua);
	}
}

void IO::HienThi_BienLai()
{
	string MS_CanTim;
	cout << "Nhap ma so con to dien can tim: " << endl;
	getline(cin >> ws, MS_CanTim);
	if (!controller.checkMS_CongTo(MS_CanTim))
	{
		cout << "Ma so cong to dien tren khong ton tai." << endl;
	}
	else
	{
		map<string, shared_ptr<BienLai>> t_DS = controller.getDSBienLai();
		auto t_Ho = t_DS.find(MS_CanTim);
		cout << "Thong tin cua ho su dung dien tren: " << endl;
		cout << "Ho ten chu ho: " << t_Ho->second->getTT_KhachHang()->getTenChuHo() << endl;
		cout << "So nha: " << t_Ho->second->getTT_KhachHang()->getSoNha() << endl;
		cout << "Ma so cong to dien: " << t_Ho->second->getTT_KhachHang()->getMS_CongTo() << endl;
		cout << "So dien cu: " << t_Ho->second->getSoDienCu() << endl;
		cout << "So dien moi: " << t_Ho->second->getSoDienMoi() << endl;
		cout << "Tien dien phai tra: " << (t_Ho->second->getSoDienMoi() - t_Ho->second->getSoDienCu()) * 5 << endl;
	}
}
void IO::HienThi_DS_BienLai()
{
	map<string, shared_ptr<BienLai>> t_DS = controller.getDSBienLai();
	int t_count = 0;
	for (auto i = t_DS.begin(); i != t_DS.end(); i++)
	{
		cout << "Thong tin bien lai thu " << t_count + 1 << endl;
		cout << "Ho ten chu ho: " << i->second->getTT_KhachHang()->getTenChuHo() << endl;
		cout << "So nha: " << i->second->getTT_KhachHang()->getSoNha() << endl;
		cout << "Ma so cong to dien: " << i->second->getTT_KhachHang()->getMS_CongTo() << endl;
		cout << "So dien cu: " << i->second->getSoDienCu() << endl;
		cout << "So dien moi: " << i->second->getSoDienMoi() << endl;
		cout << "Tien dien phai tra: " << (i->second->getSoDienMoi() - i->second->getSoDienCu()) * 5 << endl;
		t_count++;
		cout << endl;
	}
}

void IO::TinhToan_TienDien()
{
	cout << "Nhap vao ma so cong to dien cua ho can tra cuu tinh dien." << endl;
	string MS_CanTinh;
	getline(cin >> ws, MS_CanTinh);
	if (!controller.checkMS_CongTo(MS_CanTinh))
	{
		cout << "Ma so cong to dien tren khong ton tai." << endl;
	}
	else
	{
		cout << "So tien dien phai tra: " << controller.calculateTienDien(MS_CanTinh) << endl;

	}
}