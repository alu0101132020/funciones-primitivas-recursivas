#pragma once

#include "fpr.hpp"
#include "multiplicationFPR.hpp"

class PowerFPR : public FPR {
  private:
    MultiplicationFPR _multiplicationFPR;
  public:
    // Función que inicializa la recursión.
    int solve(const int &x, const int &y);
    // Función límite. La función límite para este caso se cumple cuando
    // y = 0, que en este caso la potencia de X y 0 siempre será 1. (Sucesor(función z))
    int limitEquation(const int &x, const int &y);
    // Función recursión. La potencia la definiremos como la multiplicación de X
    // y la potencia de (X, y-1).
    int recursiveEquation(const int &x, const int &y);
};