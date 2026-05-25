//
// Created by Vasco Miguel Veenstra Soares on 25/05/2026.
//

#include <iostream>
#include <string>

using namespace std;

struct Entry {
    string name;
    int value;
};

Entry read_entry(istream& is){
    string s;
    int i;
    is >> s >> i;
    return {s, i};
}

int main(){
    auto e = read_entry(cin);

    cout << "{" << e.name << "," << e.value << "}\n";

    // structured binding
    auto [name, value] = read_entry(cin);

    cout << name << value << "\n";

    return 0;
}