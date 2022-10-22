#include"UI.h"

UI::UI()
{
	int Func_Choice;
	while (run)
	{
		system("cls");
		cout << "1. Add Employee." << endl;
		cout << "2. Edit Employee." << endl;
		cout << "3. Delete Employee." << endl;
		cout << "4. Search Employee Type." << endl;
		cout << "0. Exit." << endl;
		do
		{
			cin >> Func_Choice;
			if (Func_Choice < 0 || Func_Choice > 4)
			{
				cout << "Retype";
			}
		} while (Func_Choice < 0 || Func_Choice > 4);

		switch (Func_Choice)
		{
		case ADD:
		{
			system("cls");
			UI_addEmployee();
			system("pause");
			break;
		}
		case EDIT:
		{
			system("cls");
			UI_editEmployee();
			system("pause");
			break;
		}

		case DELETE:
		{
			system("cls");
			view.delete_Empoyee();
			system("pause");
			break;
		}

		case SEARCH:
		{
			system("cls");
			view.find_Employee();
			system("pause");
			break;
		}
			
		case 0:
		{
			run = 0;
			break;
		}
		}
	}
}

UI::~UI()
{
	//
}


void UI::UI_addEmployee()
{
	int Add_Choice;
	do
	{
		cout << "0. Add Experience." << endl;
		cout << "1. Add Fresher." << endl;
		cout << "2. Add Intern." << endl;
		cout << "3. Exit." << endl;
		do
		{
			cin >> Add_Choice;
			if (Add_Choice < 0 || Add_Choice > 3)
			{
				cout << "Retype." << endl;
			}
		} while (Add_Choice < 0 || Add_Choice > 3);

		switch (Add_Choice)
		{
		case ADD_EXPERIENCE:
		{
			system("cls");
			view.add_Experience();
			system("pause");
			break;
		}

		case ADD_FRESHER:
		{
			system("cls");
			view.add_Fresher();
			system("pause");
			break;
		}

		case ADD_INTERN:
		{
			system("cls");
			view.add_Intern();
			system("pause");
			break;
		}
		case ADD_EXIT:
		{
			Add_Choice = 0;
			break;
		}
		}

	} while (Add_Choice != 0);
}
void UI::UI_editEmployee()
{
	int Edit_Choice;
	do
	{
		cout << "1. Edit Full Name." << endl;
		cout << "2. Edit Birthday." << endl;
		cout << "3. Edit Email." << endl;
		cout << "4. Edit Phone." << endl;
		cout << "5. Edit Certificate." << endl;
		cout << "0. Exit." << endl;
		do
		{
			cin >> Edit_Choice;
			if (Edit_Choice < 0 || Edit_Choice > 5)
			{
				cout << "Retype." << endl;
			}
		} while (Edit_Choice < 0 || Edit_Choice > 5);

		switch (Edit_Choice)
		{
		case EDIT_NAME:
		{
			system("cls");
			view.modify_Name();
			system("pause");
			break;
		}

		case EDIT_BIRTHDAY:
		{
			system("cls");
			view.modify_BirthDay();
			system("pause");
			break;
		}

		case EDIT_EMAIL:
		{
			system("cls");
			view.modify_Email();
			system("pause");
			break;
		}

		case EDIT_PHONE:
		{
			system("cls");
			view.modify_Phone();
			system("pause");
			break;
		}

		case EDIT_CERTIFICATE:
		{
			system("cls");
			view.modify_Add_Certificate();
			system("pause");
			break;
		}
		case EDIT_EXIT:
		{
			Edit_Choice = 0;
			break;
		}
		}

	} while (Edit_Choice != 0);
}