#include "supercalculator.h"

void SorticMultiplication2(string first, string second) {
    if (Kol_minuse(Reverse(first)) % 2 != 0)
        if (Kol_minuseDoNumbers(first) % 2 != 0)
            cout << ProverkaMultiplication(Reverse(no_Multiplication(no_minuse(Reverse(no_minuse(first))))), second);
        else
            cout << "-" << ProverkaMultiplication(Reverse(no_Multiplication(no_minuse(Reverse(no_minuse(first))))), second);
    else
        if (Kol_minuseDoNumbers(first) % 2 == 0)
            cout << ProverkaMultiplication(Reverse(no_Multiplication(no_minuse(Reverse(no_minuse(first))))), second);
        else
            cout << "-" << ProverkaMultiplication(Reverse(no_Multiplication(no_minuse(Reverse(no_minuse(first))))), second);

}

void SorticPluse2(string first, string second) {
    if (Reverse(no_pluse(no_minuse(Reverse(no_minuse(first))))) > second) {
        if (Kol_minuseDoNumbers(first) % 2 == 0 && Kol_minuse(Reverse(first)) % 2 != 0)
            cout << ProverkaMinus(second, Reverse(no_pluse(no_minuse(Reverse(no_pluse(no_minuse(first)))))));
        if (Kol_minuseDoNumbers(first) % 2 != 0 && Kol_minuse(Reverse(first)) % 2 == 0)
            cout << "-" << ProverkaMinus(Reverse(no_pluse(no_minuse(Reverse(no_pluse(no_minuse(first)))))), second);
        if (Kol_minuseDoNumbers(first) % 2 != 0 && Kol_minuse(Reverse(first)) % 2 != 0)
            cout << "-" << ProverkaPluse(Reverse(no_pluse(no_minuse(Reverse(no_minuse(first))))), second);
        if (Kol_minuseDoNumbers(first) % 2 == 0 && Kol_minuse(Reverse(first)) % 2 == 0)
            cout << ProverkaPluse(Reverse(no_pluse(no_minuse(Reverse(no_minuse(first))))), second);
    }
    else {
        if (Kol_minuseDoNumbers(first) % 2 == 0 && Kol_minuse(Reverse(first)) % 2 != 0)
            cout << "-" << ProverkaMinus(second, Reverse(no_pluse(no_minuse(Reverse(no_pluse(no_minuse(first)))))));
        if (Kol_minuseDoNumbers(first) % 2 != 0 && Kol_minuse(Reverse(first)) % 2 == 0)
            cout << ProverkaMinus(second, Reverse(no_pluse(no_minuse(Reverse(no_pluse(no_minuse(first)))))));
        if (Kol_minuseDoNumbers(first) % 2 != 0 && Kol_minuse(Reverse(first)) % 2 != 0)
            cout << "-" << ProverkaPluse(Reverse(no_pluse(no_minuse(Reverse(no_minuse(first))))), second);
        if (Kol_minuseDoNumbers(first) % 2 == 0 && Kol_minuse(Reverse(first)) % 2 == 0)
            cout << ProverkaPluse(Reverse(no_pluse(no_minuse(Reverse(no_minuse(first))))), second);
    }
}

bool Proverka(string enter) {
    int Pravda = 0;
    int kolZnak = 0;
    for (int el = Len(enter) - 1; el >= 0; el--) {
        if (enter[el] == '+' || enter[el] == '-' || enter[el] == '*')
            kolZnak++;
        else if (enter[el] == '0' || enter[el] == '1' || enter[el] == '2' || enter[el] == '3' || enter[el] == '4' || enter[el] == '5' || enter[el] == '6' || enter[el] == '7' || enter[el] == '8' || enter[el] == '9' || enter[el] == '+' || enter[el] == '-' || enter[el] == '*')
            Pravda += 0;
        else
            Pravda++;
    }
    if (Pravda > 0 || kolZnak == 0)
        return false;
    else
        return true;
}

void Menu() {
    cout << "Enter:Firts number + or - or * and second number !everything is merged" << endl;
    string enter, operation, first, second;
    cin >> enter;
    if (Proverka(enter) == true) {
        operation = OperationZnak(enter);
        first = no_pluse(First_Num(enter));
        second = no_pluse(Second_Num(enter));
        string len = second + first;
        string lenNoMinuse = second + no_minuse(first);
        if (Reverse(no_minuse(Reverse(first)))[Len(first) - 1 - (Kol_minuse(Reverse(first)) - 1)] == '+')
            SorticPluse2(first, second);
        if (Reverse(no_minuse(Reverse(first)))[Len(first) - 1 - (Kol_minuse(Reverse(first)) - 1)] == '*')
            SorticMultiplication2(first, second);
        if (OperationZnak(enter) == '+')
            SorticPluse1(first, second);
        if (OperationZnak(enter) == '-' && first[Len(first) - 1 - (Kol_minuse(Reverse(first)) - 1)] != '*' && first[Len(first) - 1 - (Kol_minuse(Reverse(first)) - 1)] != '+')
            SorticMimus1(first, second);
        if (OperationZnak(enter) == '*')
            SorticMultiplication1(first, second);
    }
    else
        cout << "Error";
}
