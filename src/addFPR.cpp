#include "../include/addFPR.hpp"

int AddFPR::solve(const int &x, const int &y) {
    return recursiveEquation(x, y);
}

int AddFPR::limitEquation(const int &x, const int &y) {
    return x;
}

int AddFPR::recursiveEquation(const int &x, const int &y) {
    if (y == 0) {
        return limitEquation(x, y);
    } else {
        return _basicFunctions.successorFunction(recursiveEquation(x, y - 1));
    }
}