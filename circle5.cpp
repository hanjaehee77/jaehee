#include "Circle.h"
#include <iostream>
using namespace std;

circle5::circle5() { 
    cout << "\n***원뿔 계산기 접속***" << endl;
}

circle5::~circle5() {
    cout << "\n원뿔 계산기 종료...\n\n" << endl;
}

double circle5::calculateVolume(double radius, double height) {
    return (1.0 / 3) * PI * radius * radius * height;
}