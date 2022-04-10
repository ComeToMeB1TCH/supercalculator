#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED
#include <chrono>
#include <thread>
#include <iostream>
#include <windows.h>

using namespace std;

void Menu();
void itc_cout(string enter);
int Len(string stroka);
string Pluse(string first, string second, int el);
string ComparePluse(string first,string second);
string zero(int len);
int OperationPos(string enter);
char OperationZnak(string enter);
string Second_Num(string enter);
string First_Num(string enter);
string Minuse(string first, string second);
string ProverkaPluse(string first, string second);
string ProverkaMinus(string first, string second);
string ProverkaMultiplication(string first, string second);
string Reverse(string enter);
string CompareMinuse(string first, string second);
string no_zero(string enter);
string no_minuse(string enter);
string no_pluse(string enter);
string Deduct(string first, string second);
string share(string enter, int start, int end);
void SorticMimus1(string first, string second);
void SorticMimus2(string first, string second);
void SorticMimus3(string first, string second);
void SorticMimus4(string first, string second);
void SorticPluse1(string first, string second);
void SorticMultiplication1(string first, string second);
void SorticMultiplication2(string first, string second);
int Kol_minuse(string enter);
int Kol_minuseDoNumbers(string enter);
string Multiplication(string a, string b);
string IntToString(int enter);
int CharToInt(char enter);
string CompareMultiplication(string first, string second);
void icon();
void indent();

#endif // CALC_H_INCLUDED
