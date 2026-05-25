//
// Created by Vasco Miguel Veenstra Soares on 25/05/2026.
//

#include <iostream>

namespace example {
    int x = 3;

    void print(){
        std::cout << x << "\n";
    }

    int& get_x(){
        return x;
    }
}

auto mult(double x, double y) -> double {
    return x * y;
}

int main(){
    example::print();
    example::get_x() = 5;
    example::print();

    mult(2, 3);

    return 0;
}