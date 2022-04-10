#include "supercalculator.h"

int Len(string enter) {
    int kol = 0;
    for (int i = 0; enter[i] != '\0'; i++) {
        kol++;
    }
    return kol;
}

void itc_cout(string enter) {
    for (int i = 0; i < Len(enter); i++){
            if(enter[i] == '#'){
                cout << " ";
            }else{
                cout << enter[1];
            }
    }
    cout << endl;
    this_thread::sleep_for(20ms);
}

string zero(int len) {
    string resultat;
    for (len; len >= 0; len--) {
        resultat += "0";
    }
    return resultat;
}

string ComparePluse(string first,string second) {
    if(Len(first) > Len(second)){
        second = zero(Len(first) - Len(second)-1) + second;
        return Pluse(first, second, Len(first));
    }
    if(Len(first) < Len(second)){
        first = zero(Len(second) - Len(first)-1) + first;
        return Pluse(second, first, Len(second));
    }
    if (Len(first) == Len(second)) {
        return Pluse(first, second, Len(first));
    }
}

string Pluse(string first, string second, int el) {
    string el_10, resultat = "";
    int summ_el, el_first, el_second, one=0;
    for(char i = el - 1; i >= 0; i--){
        el_first = first[i] - 48, el_second = second[i] - 48;
        summ_el = el_first + el_second;
        if(summ_el + one >= 10){
            el_10 += (summ_el + one) % 10 + 48;
            one = 1;
        }else{
            el_10 += summ_el + one + 48;
            one = 0;
        }
    }
    for (int j = Len(el_10) + one; j > 0; j--) {
        if (one == 1){
            resultat = '1';
            one = 0;
        }else
            resultat += el_10[j-1];
    }
    return resultat;
}
