#include "supercalculator.h"

string no_zero(string enter) {
    int i = 0;
    if (enter[i] == '-')
        i++;
    while (enter[i] == '0' && i < Len(enter))
        i++;
    if (i == Len(enter))
        return "0";
    return share(enter, i, Len(enter));
}

string no_minuse(string enter) {
    int i = 0;
    while (enter[i] == '-' && i < Len(enter))
        i++;
    return share(enter, i, Len(enter));
}

string no_pluse(string enter) {
    int i = 0;
    while (enter[i] == '+' && i < Len(enter))
        i++;
    return share(enter, i, Len(enter));
}

int Kol_minuse(string enter) {
    int i = 0;
    int kol = 1;
    while (enter[i] == '-' && i < Len(enter)) {
        i++;
        kol++;
    }
    return kol;
}

int Kol_minuseDoNumbers(string enter) {
    int i = 0;
    int kol = 0;
    while (enter[i] == '-') {
        i++;
        kol++;
    }
    return kol;
}