#include "Circle.h"
#include <iostream>
using namespace std;

circle5::circle5() { 
    cout << "\n***���� ���� ����***" << endl;
}

circle5::~circle5() {
    cout << "\n���� ���� ����...\n\n" << endl;
}

double circle5::calculateVolume(double radius, double height) {
    return (1.0 / 3) * PI * radius * radius * height;
}