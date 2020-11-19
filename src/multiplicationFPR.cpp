#include "../include/multiplicationFPR.hpp"

int MultiplicationFPR::solve(const int &x, const int &y) {
    return recursiveEquation(x, y);
}

int MultiplicationFPR::limitEquation(const int &x, const int &y) {
    return _basicFunctions.zeroFunction(x);
}

int MultiplicationFPR::recursiveEquation(const int &x, const int &y) {
    if (y == 0) {
        return limitEquation(x, y);
    } else {
        return _addFPR.solve(x, recursiveEquation(x, y - 1));
    }
}