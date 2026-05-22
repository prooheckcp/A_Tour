//
// Created by Vasco Miguel Veenstra Soares on 21/05/2026.
//

#include <iostream>

using namespace std;

char v[6] {'a', 'b', 'c', 'd', 'e', 'f'};

void print(){
    int v1[10] {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    for (int i = 0; i < 10; i++)
        cout << v1[i] << "\n";

    for (const auto& x : v1)
        cout << x;
}

void print2(){
    int v[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x : v)
        cout << x << "\n";

    for (auto x : {10, 21, 32, 43, 54, 65})
        cout << x << "\n";
}

void foo(int* x){
    int& y = *x;
    y = 5;
}

char* word = "abc";

int main(){
    while (*word != 0){
        cout << *word;
        cout << word[0] << "\n";
        word++;
    }

    cout << (*word == 0) << "\n";
    cout << word[0] << "\n";

    char* p = &v[3];
    char& x = *p;
    x = 'G';

    int example = 3;
    foo(&example);
    cout << example;

    char* null1 = nullptr;
    int* null2 = nullptr;

    if (null1 == nullptr){
        cout << "sup";
    }

    //cout << x << "\n";
    //print();
    //print2();

    return 0;
}