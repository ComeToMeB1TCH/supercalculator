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
            cout << "-" << ProverkaMultiplication(Reverse(no_Multiplication(no_minuse(Reverse(first)))), second);

}

void Menu() {
    cout << "Enter:Firts number + or - or * and second number !everything is merged"<< endl;
    string enter, operation, first, second;
    cin >> enter;
    operation = OperationZnak(enter);
    first = no_pluse(First_Num(enter));
    second = no_pluse(Second_Num(enter));
    string len = second + first;
    string lenNoMinuse = second + no_minuse(first);
    if (Reverse(no_minuse(Reverse(first)))[Len(first) - 1 - (Kol_minuse(Reverse(first)) - 1)] == '*')
        SorticMultiplication2(first, second);
    if (OperationZnak(enter) == '+')
        SorticPluse1(first, second);
    if (OperationZnak(enter) == '-' && first[Len(first) - 1 - (Kol_minuse(Reverse(first)) - 1)] != '*')
        SorticMimus1(first, second);
    if (OperationZnak(enter) == '*')
        SorticMultiplication1(first, second);
}