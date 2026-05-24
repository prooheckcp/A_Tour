//
// Created by Vasco Miguel Veenstra Soares on 24/05/2026.
//

#include <string>
#include <iostream>
#include <string>

using namespace std;

enum class Type {doub, integer};

union Value {
    double d;
    int i;
};

struct Example{
    Type t;
    Value v;
};

struct VariantExample {
    string name;
    variant<int, bool> v;
};

int main(){
    Example e {Type::doub, 2.0};

    VariantExample ve {"Example", true};

    if (holds_alternative<int>(ve.v))
        cout << get<int>(ve.v);
    else if (holds_alternative<bool>(ve.v))
        cout << to_string(get<bool>(ve.v));

    return 0;
}