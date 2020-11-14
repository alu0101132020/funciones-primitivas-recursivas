/**
 * Autor: Manuel Andrés Carrera.
 * Universidad: Universidad de La Laguna.
 * Curso: 4
 * Grado: Ingeniería informática.
 * Descripción: Clase funciones básicas para las funciones primitivas recursivas.
 */

#pragma once

#include <vector>

class BasicFunctions {
  public:
    int zeroFunction(const int &x);
    int successorFunction(const int &x);
    int projectionFunction(const std::vector<int> &P, const int &x);
};