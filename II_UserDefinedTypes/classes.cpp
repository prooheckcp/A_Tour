//
// Created by Vasco Miguel Veenstra Soares on 24/05/2026.
//
#include <iostream>

using namespace std;

class Vector {
public:
    Vector(int s):
    elem{new double[s]},
    sz{s}
    {}

    double& operator[](int i){
        return elem[i];
    }

    const int size(){
        return sz;
    }

    ~Vector(){
        delete[] elem;
    }

private:
    double* elem;
    int sz;
};

double read_and_sum(int s){
    Vector v(s);

    for (int i = 0; i != v.size(); ++i)
        cin >> v[i];

    double sum = 0;
    for (int i = 0;  i != v.size(); ++i)
        sum += v[i];

    return sum;
}

int main(){
    Vector v(6);

    read_and_sum(6);

    return 0;
}