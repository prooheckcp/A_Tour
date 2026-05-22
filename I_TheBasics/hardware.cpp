//
// Created by Vasco Miguel Veenstra Soares on 22/05/2026.
//

#include <iostream>

using namespace std;

int main(){
    int x = 2;
    int y = 3;
    int& r = x;
    int& r2 = y;

    r = r2;

    cout << x << "\n";
    cout << y << "\n";

    return 0;
}