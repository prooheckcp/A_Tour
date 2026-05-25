//
// Created by Vasco Miguel Veenstra Soares on 25/05/2026.
//

#ifndef A_TOUR_VECTOR_H
#define A_TOUR_VECTOR_H


class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size();

private:
    double* elem;
    int sz;
};


#endif //A_TOUR_VECTOR_H
