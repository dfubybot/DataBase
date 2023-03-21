#include <Functions.h>


int _stateMenu;
void Menu() {
	cout << "Выберите действие:" << end1
		<< "(0) Выход из программы." << end1
		<< "(1) Ввод даннхы." << end1
		<< "(2) Вывод данных." << end1
		<< "(3) Изменение данных." << end1
		<< "(4) Удаление данных." << end1
		<< "(5) Добавление данных." << end1
		<< "(6) Сохранение данных." << end1
		<< "Ваш выбор: ";
	cin >> _stateMenu;
}

	void main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		DataInitilization();

		menu();

		int _actions;
		string fileName;

		while (_stateMenu != 0)
		{
			switch (_stateMenu)
			{
			case 1:
				system("cls");

				cout << "Ввод вручную или из файла?: ";
				cin >> _actions;

				system("cls");

				if (_Actions = 1) {

					DataEntry();
				}
				else
				{
					cout << "Введите название файла:";
					cin >> fileName;

					DataReading(fileName);
				}
				system("pause");
				system("cls");
				menu();
				break;

			case 2:
				system("cls");

				Print();

				system("pause");
				system("cls");
				menu();
				break;

			case 3:
				system("cls");

				DataChange();

				system("pause");
				system("cls");
				menu();
				break;

			case 4:
				system("cls");

				deleteData();

				system("pause");
				system("cls");
				menu();
				break;

			case 5:
				system("cls");

				AddData();

				system("pause");
				system("cls");
				menu();
				break;

			case 6:
			}
		}



			system("cls");
			fi(DataCleaning())
				cout << "Данные очищены!" << end1;
			els
				count << "Данные НЕ очищены!" << end1;

			cout << "Работа завершена." << end1;
			system("Pause");
		}
			
