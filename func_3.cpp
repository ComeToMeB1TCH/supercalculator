#include "supercalculator.h"

string Second_Num(string enter) {
    string resultat = "";
    int len = Len(enter);
    int i = OperationPos(enter);
    for (i; i < len - 1; i ++) {
        resultat += enter[i + 1];
    }    
    return resultat;
}

string Minuse(string first, string second) {
    string resultat = "";
    int el_10 = 0;
    int len = Len(first);
    for (int i = len - 1; i >= 0; i--) {
        if (first[i] - el_10 < second[i]) {
            resultat += first[i] + 10 - second[i] + '0' - el_10;
            el_10 = 1;
        }
        else {
            resultat += first[i] - second[i] + '0' - el_10;
            el_10 = 0;
        }
    }
    return resultat;
}

string Deduct(string first, string second) {
    string resultat = "", save = "";
    if (second == CompareMinuse(first, second)) {
        save = first;
        first = second;
        second = save;
    }
    while (Len(second) < Len(first))
        second = "0" + second;
    resultat = Minuse(first, second);
    return no_zero(Reverse(resultat));
}

string CompareMinuse(string first, string second) {
    if (Len(first) > Len(second))
        return first;
    else if (Len(second) > Len(first))
        return second;
    for (int i = 0; i < Len(first); i++) {
        if (first[i] > second[i])
            return first;
        else if (second[i] > first[i])
            return second;
    }
    return first;
}

string Reverse(string enter) {
    string resultat = "";
    for (int i = Len(enter) - 1; i >= 0; i--) {
        resultat += enter[i];
    }
    return resultat;
}
