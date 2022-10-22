#include"IO.h"

bool IO::checkID(string ID_Check)
{
	if (Controller.getListEmployee().count(ID_Check) == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

string IO::IN_ID()
{
	string ID;
	cout << "Enter ID: " << endl;
	getline(cin >> ws, ID);
	while (checkID(ID))
	{
		cout << "This ID has already existed." << endl;
		cout << "Enter ID: " << endl;
		getline(cin >> ws, ID);
	}
	
	return ID;
}
string IO::IN_Name()
{
	string Name;
	try
	{
		cout << "Enter full name: " << endl;
		getline(cin >> ws, Name);
		checkINPUT.FullNameException(Name);
	}
	catch (const string ex_FullName)
	{
		cout << ex_FullName;
		IO::IN_Name();
	}
	return Name;
}
string IO::IN_BirthDay()
{
	int year, month, date;
	try
	{
		cout << "Enter date of birth: " << endl;
		cout << "Day: " << std::endl;
		cin >> date;
		cout << "Month: " << std::endl;
		cin >> month;
		cout << "Year: " << std::endl;
		cin >> year;
		checkINPUT.BirthDayException(year, month, date);
	}
	catch (const string ex_BirthDay)
	{
		cout << ex_BirthDay;
		IO::IN_BirthDay();
	}
	string Birth = to_string(date) + '/' + to_string(month) + '/' + to_string(year);
	return Birth;
}
string IO::IN_Phone()
{
	string Phone;
	try
	{
		cout << "Enter phone number: " << endl;
		getline(cin >> ws, Phone);
		checkINPUT.PhoneException(Phone);
	}
	catch (const string ex_Phone)
	{
		cout << ex_Phone;
		IO::IN_Phone();
	}
	return Phone;
}
string IO::IN_Email()
{
	string Email;
	try
	{
		cout << "Enter email: " << endl;
		getline(cin >> ws, Email);
		checkINPUT.EmailException(Email);
	}
	catch (const string ex_Email)
	{
		cout << ex_Email;
		IO::IN_Phone();
	}
	return Email;
}
int IO::IN_Employee_Type()
{
	int Employee_type;
	cout << "Enter type of employee: " << endl;
	cin >> Employee_type;
	return Employee_type;
}
vector<shared_ptr<Certificate>> IO::IN_ListCertificate()
{
	vector<shared_ptr<Certificate>> t_ListCertificate;
	int n;
	cout << "Enter the number of Certificate: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string CertificatedID;
		string CertificateName;
		string CertificateRank;
		string CertificatedDate;

		cout << "Enter information of Certificate NO." << i + 1 << endl;
		cout << "Enter ID of Certificate: " << endl;
		getline(cin >> ws, CertificatedID);
		cout << "Enter Certificate name: " << endl;
		getline(cin >> ws, CertificateName);
		cout << "Enter rank of Certificate: " << endl;
		getline(cin >> ws, CertificateRank);
		cout << "Enter Certificated date: " << endl;
		int year, month, date;
		cout << "Day: " << std::endl;
		cin >> date;
		cout << "Month: " << std::endl;
		cin >> month;
		cout << "Year: " << std::endl;
		cin >> year;
		CertificatedDate = to_string(date) + '/' + to_string(month) + '/' + to_string(year);

		shared_ptr<Certificate> t_Certificate(new Certificate(CertificatedID, CertificateName, CertificateRank, CertificatedDate));
		t_ListCertificate.push_back(t_Certificate);
	}
	return t_ListCertificate;
}

void IO::OUT_Employee(string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
{
	cout << "ID: " << ID << endl;
	cout << "Full name: " << FullName << endl;
	cout << "Birthday: " << BirthDay << endl;
	cout << "Phone: " << Phone << endl;
	cout << "Email: " << Email << endl;
	if (Employee_type == 0)
	{
		cout << "Type of employee: Experience." << endl;
	}
	if (Employee_type == 1)
	{
		cout << "Type of employee: Fresher." << endl;
	}
	if (Employee_type == 2)
	{
		cout << "Type of employee: Intern." << endl;
	}
	cout << "Number of Certificate: " << ListCertificate.size() << endl;
	for (int i = 0; i < ListCertificate.size(); i++)
	{
		cout << "NO." << i + 1 << ": " << endl;
		cout << "Certificate ID: " << ListCertificate[i]->getCertificatedID() << endl;
		cout << "Certificate name: " << ListCertificate[i]->getCertificateName() << endl;
		cout << "Certificate rank: " << ListCertificate[i]->getCertificateRank() << endl;
		cout << "Certificate date: " << ListCertificate[i]->getCertificatedDate() << endl;
		cout << endl;
	}
}

void IO::add_Experience()
{
	cout << "Add new Experience employee:" << endl;
	string ID = IN_ID();
	string FullName = IN_Name();
	string BirthDay = IN_BirthDay();
	string Phone = IN_Phone();
	string Email = IN_Email();
	int Employee_type = 0; 
	vector<shared_ptr<Certificate>> ListCertificate = IN_ListCertificate();

	int ExpInYear;
	string ProSkill;
	cout << "Enter number of year in expeience: " << endl;
	cin >> ExpInYear;
	cout << "Enter pro skill of employee: " << endl;
	getline(cin >> ws, ProSkill);

	Controller.addExperience(ExpInYear, ProSkill, ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate);
}
void IO::add_Fresher()
{
	cout << "Add new Fresher employee:" << endl;
	string ID = IN_ID();
	string FullName = IN_Name();
	string BirthDay = IN_BirthDay();
	string Phone = IN_Phone();
	string Email = IN_Email();
	int Employee_type = 1;
	vector<shared_ptr<Certificate>> ListCertificate = IN_ListCertificate();

	string Graduation_date;
	string Graduation_rank;
	string Education;
	
	cout << "Enter date of graduation: " << endl;
	int year, month, date;
	cout << "Enter date of graduation: " << endl;
	cout << "Day: " << std::endl;
	cin >> date;
	cout << "Month: " << std::endl;
	cin >> month;
	cout << "Year: " << std::endl;
	cin >> year;
	
	Graduation_date = to_string(date) + '/' + to_string(month) + '/' + to_string(year);
	
	cout << "Enter rank of graduation: " << endl;
	getline(cin >> ws, Graduation_rank);
	cout << "Enter education: " << endl;
	getline(cin >> ws, Education);

	Controller.addFresher(Graduation_date, Graduation_rank, Education, ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate);
}
void IO::add_Intern()
{
	cout << "Add new Intern employee:" << endl;
	string ID = IN_ID();
	string FullName = IN_Name();
	string BirthDay = IN_BirthDay();
	string Phone = IN_Phone();
	string Email = IN_Email();
	int Employee_type = 1;
	vector<shared_ptr<Certificate>> ListCertificate = IN_ListCertificate();

	string Majors;
	string Semester;
	string University_name;

	cout << "Enter majors of intern employee: " << endl;
	getline(cin >> ws, Majors);
	cout << "Enter semester: " << endl;
	getline(cin >> ws, Semester);
	cout << "Enter name of unversity: " << endl;
	getline(cin >> ws, University_name);

	Controller.addFresher(Majors, Semester, University_name, ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate);
}

void IO::modify_Name()
{
	string ID_edit;
	cout << "Enter ID: " << endl;
	getline(cin >> ws, ID_edit);
	if (!checkID(ID_edit))
	{
		cout << "This ID has not existed." << endl;
	}
	else
	{
		cout << "Employee found." << endl;
		cout << "Enter new full name: " << endl;
		string Fullname = IN_Name();

		Controller.modifyName(ID_edit, Fullname);
	}
}
void IO::modify_BirthDay()
{
	string ID_edit;
	cout << "Enter ID: " << endl;
	getline(cin >> ws, ID_edit);
	if (!checkID(ID_edit))
	{
		cout << "This ID has not existed." << endl;
	}
	else
	{
		cout << "Employee found." << endl;
		cout << "Enter new birthday: " << endl;
		string BirthDay = IN_BirthDay();

		Controller.modifyBirthDay(ID_edit, BirthDay);
	}
}
void IO::modify_Phone()
{
	string ID_edit;
	cout << "Enter ID: " << endl;
	getline(cin >> ws, ID_edit);
	if (!checkID(ID_edit))
	{
		cout << "This ID has not existed." << endl;
	}
	else
	{
		cout << "Employee found." << endl;
		cout << "Enter new phone number: " << endl;
		string Phone = IN_Phone();

		Controller.modifyPhone(ID_edit, Phone);
	}
}
void IO::modify_Email()
{
	string ID_edit;
	cout << "Enter ID: " << endl;
	getline(cin >> ws, ID_edit);
	if (!checkID(ID_edit))
	{
		cout << "This ID has not existed." << endl;
	}
	else
	{
		cout << "Employee found." << endl;
		cout << "Enter new email: " << endl;
		string Email = IN_Email();

		Controller.modifyEmail(ID_edit, Email);
	}
}
void IO::modify_Add_Certificate()
{
	string ID_edit;
	cout << "Enter ID: " << endl;
	getline(cin >> ws, ID_edit);
	if (!checkID(ID_edit))
	{
		cout << "This ID has not existed." << endl;
	}
	else
	{
		cout << "Employee found." << endl;
		cout << "Add new Certificate: " << endl;
		string CertificatedID;
		string CertificateName;
		string CertificateRank;
		string CertificatedDate;
		cout << "Enter ID of Certificate: " << endl;
		getline(cin >> ws, CertificatedID);
		cout << "Enter Certificate name: " << endl;
		getline(cin >> ws, CertificateName);
		cout << "Enter rank of Certificate: " << endl;
		getline(cin >> ws, CertificateRank);
		cout << "Enter Certificated date: " << endl;
		int year, month, date;
		cout << "Day: " << std::endl;
		cin >> date;
		cout << "Month: " << std::endl;
		cin >> month;
		cout << "Year: " << std::endl;
		cin >> year;
		CertificatedDate = to_string(date) + '/' + to_string(month) + '/' + to_string(year);

		shared_ptr<Certificate> t_Certificate(new Certificate(CertificatedID, CertificateName, CertificateRank, CertificatedDate));

		Controller.modify_Add_Certificate(ID_edit, t_Certificate);
	}
}


void IO::delete_Empoyee()
{
	string ID_erase;
	cout << "Enter ID: " << endl;
	getline(cin >> ws, ID_erase);
	if (!checkID(ID_erase))
	{
		cout << "This ID has not existed." << endl;
	}
	else
	{
		Controller.deleteEmpoyee(ID_erase);
		cout << "Delete employee successfully." << endl;
	}
}

void IO::find_Employee()
{
	map<string, shared_ptr<Employee>> t_ListEmployee = Controller.getListEmployee();
	int t_count = 0;
	int t_type;
	cout << "What type of employee are you looking for?" << endl;
	cout << "Please enter from 0 to 2: " << endl;
	cout << "0: Experience" << endl;
	cout << "1: Fresher" << endl;
	cout << "2: Intern" << endl;
	cin >> t_type;
	for (auto i = t_ListEmployee.begin(); i != t_ListEmployee.end(); i++)
	{
		if(i->second->getEmployee_type() == t_type)
		{
			cout << "Information of employee " << t_count + 1 << endl;
			OUT_Employee(i->second->getID(), i->second->getFullName(), i->second->getBirthDay(), i->second->getPhone(), i->second->getEmail(), i->second->getEmployee_type(), i->second->getListCertificate());
			t_count++;

			if (i->second->getEmployee_type() == 0)
			{
				cout << "Number of year in expeience: " << dynamic_pointer_cast<Experience>(i->second)->getExpInYear() << endl;
				cout << "Pro skill: " << dynamic_pointer_cast<Experience>(i->second)->getProSkill() << endl;
				
			}

			if (i->second->getEmployee_type() == 1)
			{
				cout << "Date of graduation: " << dynamic_pointer_cast<Fresher>(i->second)->getGraduation_date() << endl;
				cout << "Rank of graduation: " << dynamic_pointer_cast<Fresher>(i->second)->getGraduation_rank() << endl;
				cout << "Education: " << dynamic_pointer_cast<Fresher>(i->second)->getEducation() << endl;
			}

			if (i->second->getEmployee_type() == 2)
			{
				cout << "Majors of intern employee: " << dynamic_pointer_cast<Intern>(i->second)->getMajors() << endl;
				cout << "Semester: " << dynamic_pointer_cast<Intern>(i->second)->getSemester() << endl;
				cout << "Name of unversity: " << dynamic_pointer_cast<Intern>(i->second)->getUniversity_name() << endl;
			}
		}
	}
}