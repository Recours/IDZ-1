// IDZ 1_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Ден пидорас

#include "pch.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include "class.h"
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main()
{
	int a, b;
	string name1 = "C:\\Users\\asbox\\source\\repos\\File_generator\\File_generator";
	string name2;
	cin >> name2;
	if (file_check(name2) == 2) {
		cout << "Ошибка работы с файлом";
		system("pause");
		return 0;
	}
	ifstream file;
	file.open(name1 + name2);
	getline(file, name1);
	file.close();
	system("pause");
}
