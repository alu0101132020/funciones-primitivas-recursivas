/**
 * Autor: Manuel Andrés Carrera.
 * Universidad: Universidad de La Laguna.
 * Curso: 4
 * Grado: Ingeniería informática.
 * Descripción: Clase FPR suma.
 */

#pragma once

#include "fpr.hpp"

class AddFPR : public FPR {
  public:
    // Función que inicializa la recursión. 
    int solve(const int &x, const int &y);
    // Función límite. La función límite para este caso se cumple cuando
    // y = 0, que en este caso la suma de X y 0 siempre será X.
    int limitEquation(const int &x, const int &y);
    // Función recursión que siempre sustituirá la y anterior a ser el sucesor de la nueva
    // y, lo que hará que esta vaya decrementando hasta llegar a 0.
    int recursiveEquation(const int &x, const int &y);
};