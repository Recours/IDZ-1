﻿// IDZ 1_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Ден пидорас

#include "pch.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int file_check(string name) {
	if (name.find_last_of(".") == -1 || name.substr(name.find_last_of(".") + 1) != "txt")return 2;
	FILE *in = fopen(name.c_str(), "w");
	if (in == NULL) {
		return 2;
	}
		else {
			fclose(in);
			return 1;
		}
	fclose(in);
	return 0;
}
/*int calculation_max(int &a) {
	int max = -100;
	for (int i = 0; i < 3; i++) {
		if (a > max) {
			max = a;
		}
	}
	return max;
}*/
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
