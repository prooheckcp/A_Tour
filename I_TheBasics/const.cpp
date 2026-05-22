#include <iostream>

using namespace std;

constexpr int sum(int x, int y){
    return x + y;
}

char v[6] {'n', 'i', 'g', 'g', 'e', 'r'}; // array of 6 characters
char* p = &v[2];

//check constexpr
int main() {
    *p = 'u';
    printf("%c", v[2]);

    return 0;
}