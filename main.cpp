#include "supercalculator.h"

int main() {
    string i = "Yes";
    icon();
    while (i == "Yes" || i == "YES" || i == "yeS" || i == "yEs" || i == "Yes" || i == "YeS" || i == "YEs" || i == "yes") {
        Menu();
        cout << endl << "Next expressions? Yes or No:";
        cin >> i;
        indent();
    }
}
