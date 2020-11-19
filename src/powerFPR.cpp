#include "../include/powerFPR.hpp"

int PowerFPR::solve(const int &x, const int &y) {
    return recursiveEquation(x, y);
}

int PowerFPR::limitEquation(const int &x, const int &y) {
    return _basicFunctions.successorFunction(_basicFunctions.zeroFunction(x));
}

int PowerFPR::recursiveEquation(const int &x, const int &y) {
    if (y == 0) {
        return limitEquation(x, y);
    } else {
        return _multiplicationFPR.solve(x, recursiveEquation(x, y - 1));
    }
}