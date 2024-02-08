#include "forme.h"

int main() {
    Forme forme(70, 150, 100); // Exemple 
    int result = forme.compute();
    Forme::displayResult(result);
    return 0;
}
