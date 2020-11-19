/**
 * Autor: Manuel Andrés Carrera.
 * Universidad: Universidad de La Laguna.
 * Curso: 4
 * Grado: Ingeniería informática.
 * Descripción: clase abstracta función primitiva recursiva.
 */

/**
 * Autor: Manuel Andrés Carrera.
 * Universidad: Universidad de La Laguna.
 * Curso: 4
 * Grado: Ingeniería informática.
 * Descripción: Clase FPR. Es una clase abstracta que servirá para definir el resto de FPRs
 * que se quieran generar. Tiene como componentes el método para obtener la solución,
 * una función límite, una función recursión y acceso a todas las funciones básicas
 * que definen un FPR.
 */

#pragma once

#include <vector>

#include "basic-functions.hpp"

class FPR {
  private:

  public:
    // Constructor por defecto.
    FPR(void);
    // Destructor por defecto.
    ~FPR(void);
    
  protected:
    BasicFunctions _basicFunctions;
  // ------------------------------- Funciones nulas --------------------
    virtual int solve(const int &x, const int &y) = 0;
    virtual int limitEquation(const int &x, const int &y) = 0;
    virtual int recursiveEquation(const int &x, const int &y) = 0;
};