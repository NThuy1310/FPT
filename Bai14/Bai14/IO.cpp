#include"IO.h"

void IO::addStudent()
{
    cout << "Enter student infomation: " << endl;
    string fullName;
    string doB;
    string sex;
    string phoneNumber;
    string universityName;
    string gradeLevel;
    //Name
    cout << "Enter full name: " << endl;
    getline(cin >> ws, fullName);
    while (isInvalidInput.checkFullName(fullName) && controll.checkFullName(fullName))
    {
        cout << "Enter full name: " << endl;
        getline(cin >> ws, fullName);
    }
    // BirthDay
    int year, month, day;
    cout << "Enter day of birth: " << endl;
    cin >> day;
    cout << "Enter month of birth: " << endl;
    cin >> month;
    cout << "Enter year of birth: " << endl;
    cin >> year;
    doB = to_string(day) + '/' + to_string(month) + '/' + to_string(year) + ' ';
    while (isInvalidInput.checkDoB(day, month, year))
    {
        cout << "Enter day of birth: " << endl;
        cin >> day;
        cout << "Enter month of birth: " << endl;
        cin >> month;
        cout << "Enter year of birth: " << endl;
        cin >> year;
        doB = to_string(day) + '/' + to_string(month) + '/' + to_string(year) + ' ';
    }

    // Sex
    cout << "Enter sex: " << endl;
    getline(cin >> ws, sex);
    while (isInvalidInput.checkSex(sex))
    {
        cout << "Enter sex: " << endl;
        getline(cin >> ws, sex);
    }

    // Phone
    cout << "Enter Phone Number: " << endl;
    getline(cin >> ws, phoneNumber);
    while (isInvalidInput.checkPhone(phoneNumber) && controll.checkPhone(phoneNumber))
    {
        cout << "Enter Phone Number: " << endl;
        getline(cin >> ws, phoneNumber);
    }

    // University Name
    cout << "Enter University Name: " << endl;
    getline(cin >> ws, universityName);

    // Grade Level
    cout << "Enter Grade Level: " << endl;
    getline(cin >> ws, gradeLevel);
    while (isInvalidInput.checkGradeLevel(gradeLevel))
    {
        cout << "Enter Grade Level: " << endl;
        getline(cin >> ws, gradeLevel);
    }

    if (controll.isGoodStudent(gradeLevel))
    {
        double GPA;
        string bestRewardName;
        cout << "Enter GPA: " << endl;
        cin >> GPA;
        cout << "Enter name of best reward." << endl;
        getline(cin >> ws, bestRewardName);

        shared_ptr<GoodStudent> GStudent (new GoodStudent(GPA, bestRewardName, fullName, doB, sex, phoneNumber, universityName, gradeLevel));
        controll.addStudent(GStudent);
    }

    if (controll.isNormalStudent(gradeLevel))
    {
        int englishScore;
        double entryTestScore;
        cout << "Enter Entry test score: " << endl;
        cin >> entryTestScore;
        cout << "Enter English score: " << endl;
        cin >> englishScore;
        shared_ptr<NormalStudent> NStudent(new NormalStudent(englishScore, entryTestScore, fullName, doB, sex, phoneNumber, universityName, gradeLevel));
    }
}


void IO::selectCandidate()
{
    int numberRecruitment;
    cout << "Enter the number of students you need to recruit: " << endl;
    cin >> numberRecruitment;

    while (numberRecruitment < 11 || numberRecruitment > 15)
    {
        cout << "Enter the number of students you need to recruit (11-15): " << endl;
        cin >> numberRecruitment;
    }

    controll.sortStudent(numberRecruitment);
    map<string, shared_ptr<Student>> tListRecruit = controll.getListRecruit();
    cout << "Successfully recruited " << tListRecruit.size() << " student." << endl;
    int sCount = 0;
    for (auto i = tListRecruit.begin(); i != tListRecruit.end(); i++)
    {
        cout << "Student information has been recruited - " << sCount++ << endl;
        cout << "Full Name: " << i->second->getFullName();
        cout << "Phone: " << i->second->getPhoneNumber();
    }
}

void IO::showStudentInfo()
{
    map<string, shared_ptr<Student>> tListStudent = controll.getListStudent();
    int sCount = 0;
    cout << "Information of all Student: " << endl;
    for (auto i = tListStudent.begin(); i != tListStudent.end(); i++)
    {
        cout << "Student information - " << sCount++ << endl;
        cout << "Full Name: " << i->second->getFullName();
        cout << "DOB: " << i->second->getDoB();
        cout << "Gender: " << i->second->getSex();
        cout << "Phone: " << i->second->getPhoneNumber();
        cout << "Name of University: " << i->second->getUniversityName();
        cout << "Grade Level: " << i->second->getGradeLevel();
        cout << endl;
    }
}
