#pragma once

#include "fpr.hpp"
#include "addFPR.hpp"

class MultiplicationFPR : public FPR {
  private:
    AddFPR _addFPR;
  public:
    // Función que inicializa la recursión.
    int solve(const int &x, const int &y);
    // Función límite. La función límite para este caso se cumple cuando
    // y = 0, que en este caso la multiplicación de X y 0 siempre será 0 (Función z).
    int limitEquation(const int &x, const int &y);
    // Función recursión. La multiplicación la definiremos como la suma de
    // (x actual) y la multiplicación de (x, y-1).
    int recursiveEquation(const int &x, const int &y);
};