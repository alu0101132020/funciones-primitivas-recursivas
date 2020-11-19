/**
 * Autor: Manuel Andrés Carrera.
 * Universidad: Universidad de La Laguna.
 * Curso: 4
 * Grado: Ingeniería informática.
 * Descripción: Fichero principal del programa. Se encarga de recoger los flags, controlar la ejecución por terminal, e iniciar el programa.
 */

#include <iostream>
#include <string.h>

#include "../include/addFPR.hpp"
#include "../include/multiplicationFPR.hpp"
#include "../include/powerFPR.hpp"

int main(int argc, char *argv[]) {
    int x, y;
    if (argc == 3) {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
    } else {
        std::cout << "Introduzca la X con la que se resolverán las FPR: ";
        std::cin >> x;
        std::cout << "Introduzca la Y con la que se resolverán las FPR: ";
        std::cin >> y;
    }
    AddFPR A;
    std::cout << "Suma (" << x << ", " << y << "): ";
    std::cout << A.solve(x, y) << "\n";
    MultiplicationFPR B;
    std::cout << "Multiplicación (" << x << ", " << y << "): ";
    std::cout << B.solve(x, y) << "\n";
    PowerFPR C;
    std::cout << "Potencia (" << x << ", " << y << "): ";
    std::cout << C.solve(x, y) << "\n";
}
