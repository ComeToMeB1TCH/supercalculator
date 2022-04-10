#include "supercalculator.h"

void SorticPluse1(string first, string second) {
    if (first[0] != '-')
        cout << ProverkaPluse(no_zero(no_minuse(first)), no_zero(second)); 
    else if (first[0] == '-' && ProverkaMinus(no_minuse(no_zero(first)), no_minuse(no_zero(second))) == "Error")
        cout << ProverkaMinus(no_zero(first), no_zero(second));
    else if (Kol_minuseDoNumbers(first) % 2 == 0)
        cout << ProverkaPluse(no_zero(no_minuse(first)), no_zero(second));
    else if (Kol_minuseDoNumbers(first) % 2 != 0) {
        if (no_zero(no_minuse(first)) > no_zero(second))
            cout << "-" << ProverkaMinus(no_zero(no_minuse(first)), no_zero(second));
        else
            cout << ProverkaMinus(no_zero(no_minuse(second)), no_zero(no_minuse(first)));
    }
    else
        cout << ProverkaMinus(no_zero(no_minuse(first)), no_zero(second));

}

void indent() {
    system("Color 3");
    itc_cout("ðððððððððððððððððððððððððððððððððððððððððððððððððððððððððððð");
}

void icon() {
    system("Color 3");
    itc_cout("ðððððððððððððððððððððððððððððððððððððððððððððððððððððððððððð");
    itc_cout("ðð ########   ########  ###         ########  ###     ### ####        ########  ############  ########  ######### ðð");
    itc_cout("ðð########## ########## ###        ########## ###     ### ####       ########## ############ ########## ##########ðð");
    itc_cout("ðð###    ### ###    ### ###        ###    ### ###     ### ####       ###    ###     ####     ###    ### ###   ####ðð");
    itc_cout("ðð###        ########## ###        ###        ###     ### ####       ##########     ####     ###    ### ######### ðð");
    itc_cout("ðð###    ### ###    ### ###        ###    ### ###     ### ####       ###    ###     ####     ###    ### ###   ####ðð");
    itc_cout("ðð########## ###    ### ########## ########## ########### ########## ###    ###     ####     ########## ###    ###ðð");
    itc_cout("ðð ########  ###    ### ##########  ########   #########  ########## ###    ###     ####      ########  ###    ###ðð");
    itc_cout("ðððððððððððððððððððððððððððððððððððððððððððððððððððððððððððð");
}

string ProverkaMultiplication(string first, string second) {
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
        return CompareMultiplication(first, second);
    else
        return "Error";
}

string CompareMultiplication(string first, string second) {
    if (Len(first) > Len(second)) {
        return Multiplication(first, second);
    }
    if (Len(first) < Len(second)) {
        return Multiplication(second, first);
    }
    if (Len(first) == Len(second)) {
        return Multiplication(first, second);
    }
}
