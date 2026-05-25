//
// Created by Vasco Miguel Veenstra Soares on 25/05/2026.
//

#include "Vector.h"
#include <iostream>
#include <cmath>

double sqrt_sum(Vector& v){
    double sum = 0;
    for (int i = 0; i != v.size(); ++i)
        sum += std::sqrt(v[i]);

    return sum;
}

int main(){
    Vector v{3};
    std::cout << sqrt_sum(v);

    return 0;
}