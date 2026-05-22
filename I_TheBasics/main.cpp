#include <iostream>
#include <complex>
#include <vector>
#include <typeinfo>

using namespace std;

double d1 = 2.3;
double d2 {2.3};
double d3 = {2.3};

complex<double> z = 1;
complex<double> z2 = {d1, d2};
complex<double> z3 = {d1, d2};

vector<int> v {1, 2, 3, 4, 5, 6};

constexpr int dmv = 17;
int var = 17;
const double sqv = sqrt(var);

int main() {
    auto a = true;
    cout << typeid(a).name();


    return 0;
}