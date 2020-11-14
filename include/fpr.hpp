/**
 * Autor: Manuel Andrés Carrera.
 * Universidad: Universidad de La Laguna.
 * Curso: 4
 * Grado: Ingeniería informática.
 * Descripción: clase abstracta función primitiva recursiva.
 */

#pragma once

#include <string>

#include "basic-functions.hpp"
#include "function.hpp"

class FPR {
  private:
    BasicFunctions _basicFunctions;
    Function _limitCase;
    Function _recursiveCase;

  public:
    // Constructor por defecto.
    FPR(void);
    // Destructor por defecto.
    ~FPR(void);
    
  private:
    virtual int limitEquation(std::vector<int> parameters, int y, int z) = 0;
    virtual int recursiveEquation(const std::vector<int> &P, const int &x) = 0;
};