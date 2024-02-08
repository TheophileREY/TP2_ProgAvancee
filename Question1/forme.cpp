#include "forme.h"

Forme::Forme() : f0(0), f1(0), f2(0) {}
Forme::Forme(int f0, int f1, int f2) : f0(f0), f1(f1), f2(f2) {}
void Forme::setF0(int f0) { this->f0 = f0; }
void Forme::setF1(int f1) { this->f1 = f1; }
void Forme::setF2(int f2) { this->f2 = f2; }
int Forme::compute() const {
    return 0.1 * (f0 + f1 + f2 - 200);
}

string Forme::ObtenirResult() const {
    int result = compute();
    if (result <= 0) {
        return "Condition excellente.";
    } else if (result > 0 && result < 5) {
        return "Condition très bonne.";
    } else if (result >= 5 && result < 10) {
        return "Condition bonne.";
    } else if (result >= 10 && result < 15) {
        return "Condition moyenne.";
    } else {
        return "Condition faible.";
    }
}

ostream& operator<<(ostream& os, const Forme& forme) {
    os << forme.ObtenirResult();
    return os;
}
