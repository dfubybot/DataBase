#pragma once

#include <iostream>
#include <fstream>
#include <string>	
#include <Windows.h>

using namespace std;

void DataInitilization();
void DataEntry();
void DataReading(string fileName);
void Print();
bool DataCleaning();
void DataChange();
void Copy();
int AmountOfData();
void DeleteData();
void AddDate();
void SaveData(string fileName);