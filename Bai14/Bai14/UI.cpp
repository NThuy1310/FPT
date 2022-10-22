#include"UI.h"

UI::UI()
{
	int chose =0;
	while (run)
	{
		system("cls");
		cout << "1. Add Student" << endl;
		cout << "2. Recruiting Student" << endl;
		cout << "3. Show all Student information" << endl;
		cout << "0. Exit." << endl;

		cout << "Enter your choice: " << endl;
		cin >> setw(1) >> chose;

		while (!cin.good())
		{
			cout << "Faulty input! Try again.." << endl;
			
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << "Enter your choice: " << endl;
			cin >> setw(1) >> chose;

		}
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		switch (chose)
		{
		case ADD_STUDENT:
		{
			int numStudent;
			cout << "Enter number of student you want to put in:" << endl;
			cin >> numStudent;
			while (numStudent < 11)
			{
				cout << "Please input at least 11 student." << endl;
				cout << "Enter number of student you want to put in:" << endl;
				cin >> numStudent;
			}

			for (int i = 0; i < numStudent; i++)
			{
				view.addStudent();
			}
			break;
		}
		case RECRUIT_STUDENT:
		{
			view.selectCandidate();
			break;
		}
		case SHOW_ALL_STUDENT:
		{
			view.showStudentInfo();
		}
		case EXIT:
		{
			run = 0;
			break;
		}
		default:
		{
			cout << "Incorrect function selection. Please choose again..." << endl;
			break;
		}
		}
	}
}


UI::~UI()
{
	//
}