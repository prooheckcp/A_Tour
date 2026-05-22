#include <iostream>
#include <vector>
#include <memory>

using namespace std;

bool accept(){
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;

    cin >> answer;

    return answer == 'y';
}

bool accept2(){
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin >> answer;

    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}

void add_to_vector(vector<int>& v){
    if (auto n = v.size(); n == 0){
        v.push_back(3);
        v.push_back(5);
    }
}

class Dog{
public:
    int bark = 3;
};

int main(){
    Dog* dog = new Dog();
    cout << dog->bark << "\n";


    unique_ptr<vector<int>> example_vector = make_unique<vector<int>>();
    add_to_vector(*example_vector);
    cout << example_vector->at(0) << "\n";

    cout << "Accept: " << accept2();
    return 0;
}