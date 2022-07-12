#include "deklaracje.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <cmath>
#include <fstream>

void Menu(float result) {
	cout << "========MENU========" << endl;
	cout << " 1.  DODAWANIE" << endl;
	cout << " 2.  ODEJMOWANIE" << endl;
	cout << " 3.  MNOZENIE" << endl;
	cout << " 4.  DZIELENIE" << endl;
	cout << " 5.  POTEGOWANIE" << endl;
	cout << " 6.  PIERWIASTKOWANIE" << endl;
	cout << " 7.  LOGARYTM 10" << endl;
	cout << " 8.  SIN(x)" << endl;
	cout << " 9.  COS(x)" << endl;
	cout << " 0.  ZEROWANIE WYNIKU" << endl;
	cout << " h.  HISTORIA" << endl;
	cout << "====================" << endl;
	cout << " WYNIK = " << result << endl;
	cout << "====================" << endl;
	cout << "Wybierz operacje ktora chcesz wykonac" << endl;
	switch (_getch())
	{
	case 49:
		Add(result);
		break;
	case 50:
		Subtract(result);
		break;
	case 51:
		Multiplication(result);
		break;
	case 52:
		Division(result);
		break;
	case 53:
		Exponentiation(result);
		break;
	case 54:
		RootExtraction(result);
		break;
	case 55:
		Logarith(result);
		break;
	case 56:
		Sin(result);
		break;
	case 57:
		Cos(result);
		break;
	case 48:
		ClearResult(result);
		break;
	case 104:
		ShowHistory(result);
		break;
	default:
		system("cls");
		Menu();
		break;
	}

}

void Add(float result) {
	cout << "Wykonujesz DODAWANIE" << endl;
	float num = InputValidator();
	if (num > 0) {
		cout << result << " + " << num << " = " << result + num << endl;
		Save(to_string(result) + " + " + to_string(num) + " = " + to_string(result + num));
		
	}
	else {
		cout << result << " + " << "(" << num << ")" << " = " << result + num << endl;
		Save(to_string(result) + " + " + "(" + to_string(num)+")" + " = " + to_string(result + num));
	}
	result += num;
	Sleep(2500);
	system("cls");
	Menu(result);
}

void Subtract(float result) {
	cout << "Wykonujesz ODEJMOWANIE" << endl;
	float num = InputValidator();
	if (num > 0) {
		cout << result << " - " << num << " = " << result - num << endl;
		Save(to_string(result) + " - " + to_string(num) + " = " + to_string(result - num));
	}
	else {
		cout << result << " - " << "(" << num << ")" << " = " << result - num << endl;
		Save(to_string(result) + " - " + "(" + to_string(num) + ")" + " = " + to_string(result - num));
	}
	result -= num;
	Sleep(2500);
	system("cls");
	Menu(result);
}

void Multiplication(float result) {
	cout << "Wykonujesz MNOZENIE" << endl;
	float num = InputValidator();
	if (num > 0) {
		cout << result << " * " << num << " = " << result * num << endl;
		Save(to_string(result) + " * " + to_string(num) + " = " + to_string(result * num));
	}
	else {
		cout << result << " * " << "(" << num << ")" << " = " << result * num << endl;
		Save(to_string(result) + " * " + "(" + to_string(num) + ")" + " = " + to_string(result * num));
	}
	result *= num;
	Sleep(2500);
	system("cls");
	Menu(result);
}

void Division(float result) {
	cout << "Wykonujesz DZIELENIE" << endl;
	float num = InputValidator();
	if (num > 0) {
		cout << result << " / " << num << " = " << result / num << endl;
		Save(to_string(result) + " / " + to_string(num) + " = " + to_string(result / num));
	}
	else {
		cout << result << " / " << "(" << num << ")" << " = " << result / num << endl;
		Save(to_string(result) + " / " + "(" + to_string(num) + ")" + " = " + to_string(result / num)); 
	}
	result /= num;
	Sleep(2500);
	system("cls");
	Menu(result);
}

void Exponentiation(float result) {
	cout << "Wykonujesz POTEGOWANIE" << endl;
	float num = InputValidator();
	if (num > 0) {
		cout << result << "^" << num << " = " << pow(result, num) << endl;
		Save(to_string(result) + "^" + to_string(num) + " = " + to_string(pow(result,num)));
	}
	else {
		cout << result << "^" << "(" << num << ")" << " = " << pow(result, num) << endl;
		Save(to_string(result) + "^" + "(" + to_string(num) + ")" + " = " + to_string(pow(result,num)));
	}
	result = pow(result, num);
	Sleep(2500);
	system("cls");
	Menu(result);
}

void RootExtraction(float result) {
	cout << "Wykonujesz PIERWIASTKOWANIE" << endl;
	if (result >= 0) {
		cout << " Pierwiastek z " << result << " = " << sqrt(result) << endl;
		Save("Pierwiastek z " + to_string(result) + " = " + to_string(sqrt(result)));
		result = sqrt(result);
	}
	else cout << "Nie istnieje pierwiastek z liczby ujemnej"<<endl;
	Sleep(2500);
	system("cls");
	Menu(result);
}

void Logarith(float result) {
	cout << "Wykonujesz LOGARYTMOWANIE" << endl;
	cout << " Log10 z " << result << " = " << log10(result) << endl;
	Save("Log10 z " + to_string(result) + " = " + to_string(log10(result)));
	result = log10(result);
	Sleep(2500);
	system("cls");
	Menu(result);
}

void Sin(float result) {
	cout << "Obliczasz Sinus" << endl;
	cout << " Sin(" << result << ") = " << sin(result) << endl;
	Save("Sin(" + to_string(result) + ") = " + to_string(sin(result)));
	result = sin(result);
	Sleep(2500);
	system("cls");
	Menu(result);
}

void Cos(float result) {
	cout << "Obliczasz Cosinus" << endl;
	cout << " Cos(" << result << ") = " << cos(result) << endl;
	Save("Cos(" + to_string(result) + ") = " + to_string(cos(result)));
	result = cos(result);
	Sleep(2500);
	system("cls");
	Menu(result);
}

void ClearResult(float result) {
	result = 0;
	system("cls");
	cout << "Wynik zostal wyzerowany" << endl;
	Sleep(1500);
	Menu(result);
}

int Save(string text) {
	fstream file;
	file.open("historia.txt", ios::app);
	if (!file.good()) {
		cout << "Blad otwarcia pliku" << endl;
		return 0;
	}
	file << text << endl;
	file.close();
	return 1;
}

int Load() {
	fstream file;
	file.open("historia.txt", ios::in);
	if (!file.good()) {
		cout << "Blad otwarcia pliku" << endl;
		return 0;
	}
	string line;
	while (!file.eof()) {
		getline(file, line);
		cout <<" " << line << endl;
	}
	file.close();
	return 1;
}

int ShowHistory(float result) {
	system("cls");
	Load();
	cout << " 1. Wyczysc historie" << endl;
	cout << " 2. Powrot" << endl;
	fstream file;
	switch (_getch())
	{
	case 49:
		file.open("historia.txt", ios::out);
		if (!file.good()) {
			cout << "Blad czyszczenia histori" << endl;
			return 0;
		}
		file.close();
		system("cls");
		cout << "Historia zostala wyczyszczona" << endl;
		Sleep(2500);
		system("cls");
		Menu(result);
		break;
	case 50:
		system("cls");
		Menu(result);
		break;
	default:
		ShowHistory(result);
		break;
	}
	return 1;
}

float InputValidator() {
	string inp;
	bool isNumber = true;
	while (1) {
		cout << "Wprowadz liczbe: ";
		cin >> inp;
		for (auto c : inp) {
			if (!(c >= 48 and c<=57 ) and c != 45 and c != 46)
				isNumber = false;
		}
		if (isNumber) break; 
		isNumber = true;
	}
	return stof(inp);
	
}