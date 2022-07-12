#pragma once
#include <iostream>
using namespace std;

void Menu(float result = 0);
void Add(float result);
void Subtract(float result);
void Multiplication(float result);
void Division(float result);
void Exponentiation(float result);
void RootExtraction(float result);
void Logarith(float result);
void Sin(float result);
void Cos(float result);
void ClearResult(float result);
int Save(string text);
int Load();
int ShowHistory(float result);
float InputValidator();