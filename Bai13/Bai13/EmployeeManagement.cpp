#include"EmployeeManagement.h"

void EmployeeManagement::addExperience(int ExpInYear, string ProSkill, string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
{
	shared_ptr<Experience> t_Employee(new Experience(ExpInYear, ProSkill, ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate));
	ListEmployee.insert({ t_Employee->getID(), t_Employee });

}
void EmployeeManagement::addFresher(string Graduation_date, string Graduation_rank, string Education, string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
{
	shared_ptr<Fresher> t_Employee(new Fresher(Graduation_date, Graduation_rank, Education, ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate));
	ListEmployee.insert({ t_Employee->getID(), t_Employee });
}
void EmployeeManagement::addIntern(string Majors, string Semester, string University_name, string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
{
	shared_ptr<Intern> t_Employee(new Intern(Majors, Semester, University_name, ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate));
	ListEmployee.insert({ t_Employee->getID(), t_Employee });
}


void EmployeeManagement::modifyName(string ID_Edit, string Name_Edit)
{
	ListEmployee.find(ID_Edit)->second->setFullName(Name_Edit);
}
void EmployeeManagement::modifyBirthDay(string ID_Edit, string BirthDay_Edit)
{
	ListEmployee.find(ID_Edit)->second->setBirthDay(BirthDay_Edit);
}
void EmployeeManagement::modifyPhone(string ID_Edit, string Phone_Edit)
{
	ListEmployee.find(ID_Edit)->second->setPhone(Phone_Edit);
}
void EmployeeManagement::modifyEmail(string ID_Edit, string Email_Edit)
{
	ListEmployee.find(ID_Edit)->second->setEmail(Email_Edit);
}
void EmployeeManagement::modify_Add_Certificate(string ID_Edit, shared_ptr<Certificate> Certificate_Add)
{
	ListEmployee.find(ID_Edit)->second->addCertificate(Certificate_Add);
}


void EmployeeManagement::deleteEmpoyee(string ID_Delete)
{
	ListEmployee.erase(ID_Delete);
}

map<string, shared_ptr<Employee>> EmployeeManagement::getListEmployee()
{
	return ListEmployee;
}