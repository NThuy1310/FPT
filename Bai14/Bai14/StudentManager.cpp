#include"StudentManager.h"

bool StudentManager::checkFullName(string name)
{
	if (ListStudent.count(name) == 1)
	{
		return 1;
	}
	return 0;
}
bool StudentManager::checkPhone(string phone)
{
	for (auto i = ListStudent.begin(); i != ListStudent.end(); i++)
	{
		if (i->second->getPhoneNumber() == phone)
		{
			return 1;
		}
	}
	return 0;
}

void StudentManager::addStudent(shared_ptr<Student> student)
{
	ListStudent.insert({ student->getFullName(), student });
}

bool StudentManager::isGoodStudent(string gradeLevel)
{
	if (gradeLevel == "gioi" || "Gioi" || "good" || "Good")
	{
		return 1;
	}
	return 0;
}
bool StudentManager::isNormalStudent(string gradeLevel)
{
	if (gradeLevel == "trung binh" || "Trung Binh" || "Trung binh" || "normal" || "Normal")
	{
		return 1;
	}
	return 0;
}
void StudentManager::sortStudent(int numberRecruitment)
{
	
	if (numberRecruitment <= ListStudent.size())
	{
		int numGoodStudent = getNumGoodStudent();
		int numNormalStudent = getNumNormalStudent();
		
		
		// So SV Tot > SL tuyen dung
		if (numGoodStudent > numberRecruitment)
		{
			map<string, shared_ptr<Student>> tListStudent = ListStudent;
			int tCount = 0;
			for (int i = 0; i < numberRecruitment; i++)
			{
				double HighestGPA = getHighestGPA(tListStudent);
				for (auto i = tListStudent.begin(); i != tListStudent.end(); i++)
				{
					double tGPA = dynamic_pointer_cast<GoodStudent>(i->second)->getGPA();
					if (HighestGPA == tGPA)
					{
						ListRecruit.insert({ i->first, i->second });
						tListStudent.erase(i->first);
						tCount++;
					}
					if (tCount == numberRecruitment)
					{
						break;
					}
				}
				if (tCount == numberRecruitment)
				{
					break;
				}
			}
		}

		// So SV Tot = SL tuyen dung
		if (numGoodStudent == numberRecruitment)
		{
			for (auto i = ListStudent.begin(); i != ListStudent.end(); i++)
			{
				if (i->second->getGradeLevel() == "gioi" || "Gioi" || "good" || "Good")
				{
					ListRecruit.insert({ i->first, i->second });
				}
			}
		}

		// So SV Tot < SL tuyen dung
		if (numGoodStudent < numberRecruitment)
		{
			map<string, shared_ptr<Student>> tListStudent = ListStudent;
			
			int tCount = 0;
			for (auto i = ListStudent.begin(); i != ListStudent.end(); i++)
			{
				if (i->second->getGradeLevel() == "gioi" || "Gioi" || "good" || "Good")
				{
					ListRecruit.insert({ i->first, i->second });
				}
			}
			int remainingRecruitment = numberRecruitment - numGoodStudent;

			for (int i = 0; i < remainingRecruitment; i++)
			{
				double HighestEnterTestScore = getHighestEntryTestScore(tListStudent);
				vector<shared_ptr<Student>> tListHighestTestScore;
				for (auto i = tListStudent.begin(); i != tListStudent.end(); i++)
				{
					double tEnterTestScore = dynamic_pointer_cast<NormalStudent>(i->second)->getEntryTestScore();
					if (tEnterTestScore == HighestEnterTestScore)
					{
						tListHighestTestScore.push_back(i->second);
					}
				}

				// Sap xep tListHighestTestScore theo EnglishScore
				
				for (int i = 0; i < tListHighestTestScore.size(); i++)
				{
					for (int j = tListHighestTestScore.size() - 1; j > i; j--)
					{
						if (dynamic_pointer_cast<NormalStudent>(tListHighestTestScore[j])->getEnglishScore() 
								> dynamic_pointer_cast<NormalStudent>(tListHighestTestScore[j-1])->getEnglishScore())
						{
							iter_swap((tListHighestTestScore.begin() + j), (tListHighestTestScore.begin() + j - 1));
						}
					}
				}

				for (int i = 0; i < tListHighestTestScore.size(); i++)
				{
					ListRecruit.insert({ tListHighestTestScore[i]->getFullName(), tListHighestTestScore[i] });
					tListStudent.erase(tListHighestTestScore[i]->getFullName());
					tCount++;
					if (tCount > remainingRecruitment)
					{
						break;
					}
				}
				if (tCount > remainingRecruitment)
				{
					break;
				}
			}
		}
	}
}

int StudentManager::getNumGoodStudent()
{
	int goodStudentCount = 0;
	for (auto i = ListStudent.begin(); i != ListStudent.end(); i++)
	{
		if (i->second->getGradeLevel() == "gioi" || "Gioi" || "good" || "Good")
		{
			goodStudentCount++;
		}
	}
	return goodStudentCount;
}

int StudentManager::getNumNormalStudent()
{
	int normalStudentCount = 0;
	for (auto i = ListStudent.begin(); i != ListStudent.end(); i++)
	{
		if (i->second->getGradeLevel() == "trung binh" || "Trung Binh" || "Trung binh" || "normal" || "Normal")
		{
			normalStudentCount++;
		}
	}
	return normalStudentCount;
}

double StudentManager::getHighestGPA(map<string, shared_ptr<Student>> tListStudent)
{
	double maxGPA = dynamic_pointer_cast<GoodStudent>(tListStudent.begin()->second)->getGPA();
	for (auto i = tListStudent.begin(); i != tListStudent.end(); i++)
	{
		double tGPA = dynamic_pointer_cast<GoodStudent>(i->second)->getGPA();
		if (tGPA > maxGPA)
		{
			maxGPA = tGPA;
		}
	}
	return maxGPA;
}

double StudentManager::getHighestEntryTestScore(map<string, shared_ptr<Student>> tListStudent)
{
	
	double maxEnterTestScore = dynamic_pointer_cast<NormalStudent>(tListStudent.begin()->second)->getEntryTestScore();
	for (auto i = tListStudent.begin(); i != tListStudent.end(); i++)
	{
		double tScore = dynamic_pointer_cast<NormalStudent>(i->second)->getEntryTestScore();
		if (tScore > maxEnterTestScore)
		{
			maxEnterTestScore = tScore;
		}
	}
	return maxEnterTestScore;
}

map<string, shared_ptr<Student>> StudentManager::getListStudent()
{
	return ListStudent;
}
map<string, shared_ptr<Student>> StudentManager::getListRecruit()
{
	return ListRecruit;
}