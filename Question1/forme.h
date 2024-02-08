#pragma once
#include <iostream>
using namespace std;

class Forme {
protected:
    int f0;
    int f1;
    int f2;
public:
    Forme();
    Forme(int f0, int f1, int f2);
    void setF0(int f0);
    void setF1(int f1);
    void setF2(int f2);
    int compute() const;
    string ObtenirResult() const;
};

ostream& operator<<(ostream& os, const Forme& forme);
