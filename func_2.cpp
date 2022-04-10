#include "supercalculator.h"

string ProverkaPluse(string first, string second) {
    int Pravda = 0;
    for (int el = Len(first) - 1; el >= 0; el--) {
        if (first[el] == '0' || first[el] == '1' || first[el] == '2' || first[el] == '3' || first[el] == '4' || first[el] == '5' || first[el] == '6' || first[el] == '7' || first[el] == '8' || first[el] == '9')
            Pravda += 0;
        else
            Pravda++;
    }
    for (int el = Len(second) - 1; el >= 0; el--) {
        if (second[el] == '0' || second[el] == '1' || second[el] == '2' || second[el] == '3' || second[el] == '4' || second[el] == '5' || second[el] == '6' || second[el] == '7' || second[el] == '8' || second[el] == '9')
            Pravda += 0;
        else
            Pravda++;
    }
    if (Pravda == 0)
        return ComparePluse(first, second);
    else
        return "Error";
}

string ProverkaMinus(string first, string second){
    int Pravda = 0;
    for (int el = Len(first) - 1; el >= 0; el--) {
        if (first[el] == '0' || first[el]  == '1' || first[el] == '2' || first[el] == '3' || first[el] == '4' || first[el] == '5' || first[el] == '6' || first[el] == '7' || first[el] == '8' || first[el] == '9')
            Pravda += 0;
        else
            Pravda++;
    }
    for (int el = Len(second) - 1; el >= 0; el--) {
        if (second[el] == '0' || second[el] == '1' || second[el] == '2' || second[el] == '3' || second[el] == '4' || second[el] == '5' || second[el] == '6' || second[el] == '7' || second[el] == '8' || second[el] == '9')
            Pravda += 0;
        else
            Pravda++;
    }
    if (Pravda == 0)
        return Deduct(first, second);
    else
        return "Error";
}

int OperationPos(string enter) {
    for (int i = Len(enter); i >= 0; i--) {
        if(enter[i] == '-' || enter[i] == '+' || enter[i] == '*') {
            return i;
        }
    }
}

char OperationZnak(string enter) {
    for (int i = Len(enter); i >= 0; i--) {
        if (enter[i] == '-' || enter[i] == '+' || enter[i] == '*') {
            return enter[i];
        }
    }
}

string First_Num(string enter) {
    string resultat = "";
    int i = OperationPos(enter);
    for (int j = 0; j < i; j++) {
        resultat += enter[j];
    }
    return resultat;
}
