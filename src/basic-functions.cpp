#include "../include/basic-functions.hpp"

int BasicFunctions::zeroFunction(const int &x) {
    return 0;
}

int BasicFunctions::successorFunction(const int &x) {
    return x + 1;
}

int BasicFunctions::projectionFunction(const std::vector<int> &P, const int &x) {
    return P[x];
}