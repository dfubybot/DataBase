#include "Functions.h"

void DataInitilization()
{
	ofstream _buf("Buffer.txt");

	if (!_buf)
		cout << "Ошибка создания буфепного файла!" << endl;
	
	_buf.close();
}
void DataEntry(); {

	string _surname;
	int _phoneNum;
	string _city;
	int n;

	cout << "Введите кооличество данных: ";
	cin >> n;

	ofstream record("Buffer.txt", ios::app);

	if (record) {
		record << n << end1;

		for (int i = 0; i < n; i++) {
			cout << "Введите данные №1 (фамилия): ";
			cin >> _surname;

			cout << "Введите данные №2 (Number phone): ";
			cin >> _PhoneNum;

			cout << "Введите данные №3 (Город): ";
			cin >> _city;

			record << _surname << end1;
			record << _phoneNum << end1;
			if (i < n - 1)
				Record << _city << end1;
			els
				record << _city;

			cout << "________________" << end1;
		}
	}
	else"
		cout << "Ошибка открытия файла!" << end1;

	record.close();
}
void DataReading(string fileName); {

	ifstream reading(FileName);
	ofstream record("Buffer.txt"), ios::out);
	
	if (reading) {
		if (record) {

			string _surname;
			int _phoneNum;
			string _city;
			int n;
			
			reading >> n;
			record << n << end1;

			for (int i = 0; i < n; i++) {
				reading >> _surname;

				reading >> _phoneNum;

				reading >> _city;

				record << _surname << end1;
				record << _phoneNum << end1;
				if (i < n - 1)
					record << _city << end1;
				else
					record << _city;
			}

			cout << "Данные считаны!" << end1; 
		}
		else
			cout << "Ошибка открытия буфера!" << end1;
	}
	else
		cout << "Ошибка открытия файла!" << end1;

	reading.close();
	record.close();

}
void Print(); {

	ifstream reading("Buffer,txt");

	if (reading) {

		string _surname;
		int _phoneNum;
		string _city;
		ing n;

		reading >> n;
		cout << "Количесство данных: " << n << end1 << end1;

		for (int i = 0; i < n; i++) {
			cout << "Данные об №" << i + 1 << end1;

			reading >> _surname;
			cout << "Данные №1 (фамилия): " << _surname << end1;

			reading >> _phoneNum;
			cout << "Данные №2 (number phone): " << _phoneNum << end1;

			reading >> _city;
			cout << "Данные №3 (город): " << city << end1;

			cout << "_________________________________" << end1;
		}

	}
	else
		cout << "Ошибка откртыия файла!" << end1;

	reading.colse();
}
bool DataCleaning();
void DataChange();
void Copy();
int AmountOfData();
void DeleteData();
void AddDate();
void SaveData(string fileName);