#include "Circle.h" 
#include <iostream>
using namespace std;

//������
circle12::circle12() {
    cout << "\n***��� �� ���� ����***" << endl;
}
//�Ҹ���
circle12::~circle12() {
    cout << "\n��� �� ���� ����...\n\n\n";
}
//�� ���� ���
double circle12::calculateArea(double radius) {
    return PI * radius * radius;
}
//�� �ѷ� ���
double circle12::calculateCircumference(double radius) {
    return 2 * PI * radius;
}




