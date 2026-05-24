//
// Created by Vasco Miguel Veenstra Soares on 24/05/2026.
//

#include <iostream>
#include <string>

using namespace std;

enum class Color {red, blue, green};
enum class Traffic_light {green, yellow, red};

Traffic_light& operator++(Traffic_light& t){
    using enum Traffic_light;

    switch(t){
        case green: return t=yellow;
        case yellow: return t=red;
        case red: return t=green;
    }
}

string to_string(Traffic_light c) {
    using enum Traffic_light;

    switch(c){
        case green: return "Green";
        case yellow: return "Yellow";
        case red: return "Red";
    }
}

int main(){
    Color col = Color{0};
    Traffic_light light = Traffic_light::red;
    ++light;

    cout << to_string(light) << "\n";

    return 0;
}