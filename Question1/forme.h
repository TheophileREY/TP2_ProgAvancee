#pragma once
#include <iostream>
using namespace std;

class Forme {
protected:
    int f0;
    int f1;
    int f2;
public:
    Forme(int f0, int f1, int f2);

    int compute();

    static void displayResult(int result);
};
