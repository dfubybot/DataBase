#include "Functions.h"

void DataInitilization()
{
	ofstream _buf("Buffer.txt");

	if (!_buf)
		cout << "������ �������� ��������� �����!" << endl;
	
	_buf.close();
}
void DataEntry(); {

	string _surname;
	int _phoneNum;
	string _city;
	int n;

	cout << "������� ����������� ������: ";
	cin >> n;

	ofstream record("Buffer.txt", ios::app);

	if (record) {
		record << n << end1;

		for (int i = 0; i < n; i++) {
			cout << "������� ������ �1 (�������): ";
			cin >> _surname;

			cout << "������� ������ �2 (Number phone): ";
			cin >> _PhoneNum;

			cout << "������� ������ �3 (�����): ";
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
		cout << "������ �������� �����!" << end1;

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

			cout << "������ �������!" << end1; 
		}
		else
			cout << "������ �������� ������!" << end1;
	}
	else
		cout << "������ �������� �����!" << end1;

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
		cout << "����������� ������: " << n << end1 << end1;

		for (int i = 0; i < n; i++) {
			cout << "������ �� �" << i + 1 << end1;

			reading >> _surname;
			cout << "������ �1 (�������): " << _surname << end1;

			reading >> _phoneNum;
			cout << "������ �2 (number phone): " << _phoneNum << end1;

			reading >> _city;
			cout << "������ �3 (�����): " << city << end1;

			cout << "_________________________________" << end1;
		}

	}
	else
		cout << "������ �������� �����!" << end1;

	reading.colse();
}
bool DataCleaning();
void DataChange();
void Copy();
int AmountOfData();
void DeleteData();
void AddDate();
void SaveData(string fileName);