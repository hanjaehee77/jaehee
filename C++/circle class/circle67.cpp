#include "Circle.h"
#include <iostream>
using namespace std;

circle67::circle67() {
    cout << "\n***备 拌魂扁 立加***" << endl;
}

circle67::~circle67() {
    cout << "\n备 拌魂扁 辆丰...\n\n" << endl;
}

double circle67::calculateVolume(double radius) {
    return (4.0 / 3) * PI * radius * radius * radius;
}

double circle67::calculateSurfaceArea(double radius) { 
    return 4 * PI * radius * radius; 
}
