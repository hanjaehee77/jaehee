#include "Circle.h"
#include <iostream>
using namespace std;

circle34::circle34() {
    cout << "\n***����� ���� ����***" << endl;
}

circle34::~circle34() {
    cout << "\n����� ���� ����...\n\n" << endl;
}

double circle34::calculateVolume(double radius, double height) {
    return PI * radius * radius * height; 
}

double circle34::calculateSurfaceArea(double radius, double height) {
    return 2 * PI * radius * (radius + height);
}