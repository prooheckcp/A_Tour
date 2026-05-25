//
// Created by Vasco Miguel Veenstra Soares on 25/05/2026.
//

#include "Vector.h"

Vector::Vector(int s):elem {new double[s]}, sz{s} {}

double& Vector::operator[](int i) {
    return elem[i];
}

int Vector::size() {
    return sz;
}