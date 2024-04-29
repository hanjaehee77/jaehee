#include "Circle.h" 
#include <iostream>
using namespace std;

//생성자
circle12::circle12() {
    cout << "\n***평면 원 계산기 접속***" << endl;
}
//소멸자
circle12::~circle12() {
    cout << "\n평면 원 계산기 종료...\n\n\n";
}
//원 넓이 계산
double circle12::calculateArea(double radius) {
    return PI * radius * radius;
}
//원 둘레 계산
double circle12::calculateCircumference(double radius) {
    return 2 * PI * radius;
}




