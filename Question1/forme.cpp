#include "forme.h"

Forme::Forme(int f0, int f1, int f2) : f0(f0), f1(f1), f2(f2) {}

int Forme::compute() {
    return 0.1 * (f0 + f1 + f2 - 200);
}

void Forme::displayResult(int result) {
    if (result <= 0) {
        cout << "Condition excellente." << endl;
    } else if (result > 0 && result < 5) {
        cout << "Condition très bonne." << endl;
    } else if (result >= 5 && result < 10) {
        cout << "Condition bonne." << endl;
    } else if (result >= 10 && result < 15) {
        cout << "Condition moyenne." << endl;
    } else {
        cout << "Condition faible." << endl;
    }
}
