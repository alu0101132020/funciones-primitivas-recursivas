/**
 * Autor: Manuel Andrés Carrera.
 * Universidad: Universidad de La Laguna.
 * Curso: 4
 * Grado: Ingeniería informática.
 * Descripción: Fichero principal del programa. Se encarga de recoger los flags, controlar la ejecución por terminal, e iniciar el programa.
 */

#include <iostream>
#include <string.h>

#include "../include/maquina-de-turing.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Se han introducido menos parámetros de los esperados. Introduzca primero el nombre del fichero de definición de la máquina.\n";
        std::cout << "Opcionalmente, se puede introducir el nombre del fichero que contenga una entrada para la máquina";
    } else if (argc > 3) {
        std::cout << "Se han introducido más parámetros de los esperados. Introduzca primero el nombre del fichero de definición de la máquina.\n";
        std::cout << "Opcionalmente, se puede introducir el nombre del fichero que contenga una entrada para la máquina";
    } else {
        try {
            std::string ficheroEntrada = "";
            if (argc == 3) {
                ficheroEntrada = argv[2];
            }
            if (ficheroEntrada != "") {
                std::ifstream inFile;
                inFile.open(ficheroEntrada);
                if (!inFile) {
                    std::cout << "No se pudo abrir el fichero\n";
                } else {
                    MaquinaDeTuring MT(argv[1]);
                    std::string linea;
                    getline(inFile, linea);
                    MT.computarInicial(linea);
                }
                inFile.close();
            } else {
                std::string continuar = "1";
                std::string entrada = "";
                while (continuar != "0") {
                    MaquinaDeTuring MT(argv[1]);
                    std::cout << "Introduzca la cadena de entrada: ";
                    std::cin >> entrada;
                    MT.computarInicial(entrada);
                    std::cout << "¿Quiere probar con otra cadena? (0 si no, cualquier otro valor si sí): ";
                    std::cin >> continuar;
                }
            }
        } catch (const char* msg) {
            std::cerr << msg << std::endl;
        }
    }
}
