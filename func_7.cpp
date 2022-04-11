#include "supercalculator.h"

string Multiplication(string first, string second) {
    string c = "0", reverse = "", summ_el = "";
    for (int i = 0; i < Len(second); i++) {
        for (int j = 0; j < Len(first); j++) {
            summ_el = IntToString(CharToInt(second[Len(second) - i - 1]) * CharToInt(first[Len(first) - j - 1])) + zero(i + j - 1);
            if (summ_el[0] != "0"[0])
                c = ProverkaPluse(summ_el, c);
        }
    }
    while ((c[0] == "0"[0]) && (c != "0")) {
        for (int i = 1; i <= Len(c) - 1; i++)
            reverse += c[i];
        c = reverse;
    }
    return c;
}

int CharToInt(char enter) {
    string numbers = "0123456789";
    int resultat = 0;
    while (numbers[resultat] != enter) {
        resultat += 1;
    }
    return resultat;
}

string IntToString(int enter) {
    string resultat = "";
    while (enter > 0) {
        resultat = "0123456789"[enter % 10] + resultat;
        enter /= 10;
    }
    if (resultat == "") 
        return "0";
    return resultat;
}

string no_Multiplication(string enter) {
    int i = 0;
    while (enter[i] == '*' && i < Len(enter))
        i++;
    return share(enter, i, Len(enter));
}

void SorticMultiplication1(string first, string second) {
    if (Kol_minuseDoNumbers(first) % 2 != 0)
        cout << "-" << ProverkaMultiplication(no_minuse(first), second);
    else
        cout << ProverkaMultiplication(no_minuse(first), second);
}
