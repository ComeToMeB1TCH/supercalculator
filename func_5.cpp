#include "supercalculator.h"

string share(string enter, int start, int end){
    string resultat = "";
    if (end > Len(enter))
        end = Len(enter) - 1;
    for (int i = start; i <= end; i++)
        resultat += enter[i];
    return resultat;
}

void SorticMimus2(string first, string second) {
    if (Kol_minuse(Reverse(first)) % 2 == 0)
        cout << ProverkaPluse(Reverse(no_minuse(Reverse(first))), no_zero(second));
    else if (Len(Reverse(no_zero(no_minuse(Reverse(first))))) == Len(Reverse(no_zero(no_minuse(Reverse(second))))) && second > first)
        cout << "-" << ProverkaMinus(Reverse(no_minuse(Reverse(first))), no_zero(second));
    else if (Len(Reverse(no_zero(no_minuse(Reverse(first))))) == Len(Reverse(no_zero(no_minuse(Reverse(second))))) && second > first)
        cout << "-" << ProverkaMinus(Reverse(no_minuse(Reverse(first))), no_zero(second));
    else if (Len(Reverse(no_zero(no_minuse(Reverse(first))))) == Len(Reverse(no_zero(no_minuse(Reverse(second))))) && second == first)
        cout << ProverkaMinus(Reverse(no_minuse(Reverse(first))), no_zero(second));
    else
        cout << ProverkaMinus(Reverse(no_minuse(Reverse(first))), no_zero(second));
}

void SorticMimus3(string first, string second) {
    if (Kol_minuseDoNumbers(first) % 2 == 0 && Kol_minuse(Reverse(first)) % 2 != 0)
        if (no_zero(Reverse(no_minuse(Reverse(no_minuse(first))))) == no_zero(Reverse(no_minuse(Reverse(no_minuse(second))))))
            cout << "0";
        else
            cout << ProverkaPluse(no_zero(Reverse(no_minuse(Reverse(no_minuse(first))))), no_zero(Reverse(no_minuse(Reverse(no_minuse(second))))));
    if (Kol_minuseDoNumbers(first) % 2 != 0 && Kol_minuse(Reverse(first)) % 2 == 0)
        if (no_zero(Reverse(no_minuse(Reverse(no_minuse(first))))) == no_zero(Reverse(no_minuse(Reverse(no_minuse(second))))) && ((Kol_minuseDoNumbers(first) % 2 == 0 && Kol_minuse(Reverse(first)) % 2 != 0) || (Kol_minuseDoNumbers(first) % 2 != 0 && Kol_minuse(Reverse(first)) % 2 == 0)))
            cout << "0";
        else if(Reverse(no_pluse(no_minuse(Reverse(no_minuse(first))))) > second)
            cout << "-" << ProverkaMinus(no_zero(Reverse(no_minuse(Reverse(no_minuse(first))))), no_zero(Reverse(no_minuse(Reverse(no_minuse(second))))));
        else
            cout << ProverkaMinus(no_zero(Reverse(no_minuse(Reverse(no_minuse(second))))), no_zero(Reverse(no_minuse(Reverse(no_minuse(first))))));

    if (Kol_minuseDoNumbers(first) % 2 == 0 && Kol_minuse(Reverse(first)) % 2 == 0)
        cout << ProverkaPluse(no_zero(Reverse(no_minuse(Reverse(no_minuse(first))))), no_zero(Reverse(no_minuse(Reverse(no_minuse(second))))));
    if (Kol_minuseDoNumbers(first) % 2 != 0 && Kol_minuse(Reverse(first)) % 2 != 0)
        cout << "-" << ProverkaPluse(no_zero(Reverse(no_minuse(Reverse(no_minuse(first))))), no_zero(Reverse(no_minuse(Reverse(no_minuse(second))))));

}

void SorticMimus4(string first, string second) {
    if (first[0] == '-' && ProverkaMinus(no_minuse(no_zero(first)), no_minuse(no_zero(second))) == "Error" && Reverse(first)[0] != '-' && Kol_minuseDoNumbers(first) % 2 != 0)
    cout << ProverkaMinus(no_zero(first), no_zero(second));
    else if (ProverkaMinus(no_zero(first), no_zero(second)) == "Error" && first[0] != '-' && Reverse(first)[0] != '-')
    cout << ProverkaMinus(no_zero(first), no_zero(second));
    else if (first == second && first[0] != '-' && Reverse(first)[1] != '-')
    cout << ProverkaMinus(no_zero(first), no_zero(second));
    else if (Len(no_zero(first)) == Len(no_zero(second)) && second[0] > first[0] && first[0] != '0' && second[0] != '0' && first[0] != '-' && Reverse(first)[0] != '-')
    cout << "-" << ProverkaMinus(no_zero(first), no_zero(second));
    else if (Len(first) == Len(no_zero(second)) && first[0] == '0' || second[0] == '0' && first[0] != '-' && Reverse(first)[0] != '-')
    cout << "-" << ProverkaMinus(no_zero(first), no_zero(second));
    else if (Len(no_zero(first)) == Len(no_zero(second)) && first[0] == '0' || second[0] == '0' && first[0] != '-' && Reverse(first)[0] != '-')
    cout << ProverkaMinus(no_zero(first), no_zero(second));
    else if (first > second && first[0] != '-' && Reverse(first)[0] != '-')
    cout << ProverkaMinus(no_zero(first), no_zero(second));
    else if (Reverse(first)[0] == '-' && first[0] != '-')
    SorticMimus2(first, second);
    else if (first[0] == '-' && ProverkaMinus(no_zero(first), no_zero(second)) == "Error")
    SorticMimus3(first, second);
    else if (Kol_minuseDoNumbers(first) % 2 != 0)
        cout << "-" << ProverkaPluse(no_zero(first), no_zero(second));
    else
        cout << ProverkaMinus(no_zero(second), no_zero(first));
}

void SorticMimus1(string first, string second) {
    if (Len(no_zero(first)) > Len(no_zero(second)) && first[0] != '-' && Reverse(first)[0] != '-')
        cout << ProverkaMinus(no_zero(first), no_zero(second));
    else 
        SorticMimus4(first, second);
}
