//
// Created by Vasco Miguel Veenstra Soares on 25/05/2026.
//
#include <iostream>

namespace My_code{
    namespace Amongus{
        int main(){
            int i = 2 + 2;

            std::cout << i;

            return 0;
        }
    }
    int main(){
        int i = 1 + 1;

        std::cout << i;

        return 0;
    }
}

int main(){
    My_code::Amongus::main();
    return 0;
}