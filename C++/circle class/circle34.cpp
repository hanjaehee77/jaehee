#include "Circle.h"
#include <iostream>
using namespace std;

circle34::circle34() {
    cout << "\n***원기둥 계산기 접속***" << endl;
}

circle34::~circle34() {
    cout << "\n원기둥 계산기 종료...\n\n" << endl;
}

double circle34::calculateVolume(double radius, double height) {
    return PI * radius * radius * height; 
}

double circle34::calculateSurfaceArea(double radius, double height) {
    return 2 * PI * radius * (radius + height);
}
