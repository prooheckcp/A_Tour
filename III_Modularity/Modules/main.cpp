//
// Created by Vasco Miguel Veenstra Soares on 25/05/2026.
//
#include "cmath"
#include "iostream"

import Vector;

double sqrt_sum(Vector& v){
    double sum = 0;

    for (int i = 0; i < v.size(); ++i)
        sum += std::sqrt(v[i]);

    return sum;
}

int main(){
    Vector v{3};
    std::cout << v.size();

    return 0;
}