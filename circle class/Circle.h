#ifndef CIRCLE_H
#define CIRCLE_H

class circle12 {
public:
    circle12(); // 생성자
    ~circle12(); // 소멸자

    double calculateArea(double radius); // 원의 넓이
    double calculateCircumference(double radius); // 원의 둘레


private:
    const double PI = 3.14; 
};

class circle34 {
public:
    circle34(); 
    ~circle34(); 

    double calculateVolume(double radius, double height); // 원기둥의 부피
    double calculateSurfaceArea(double radius, double height); // 원기둥의 겉넓이

private:
    const double PI = 3.14; 
};

class circle5 {
public:
    circle5(); 
    ~circle5(); 

    double calculateVolume(double radius, double height); // 원뿔 부피

private:
    const double PI = 3.14; 
};

class circle67 {
public:
    circle67(); 
    ~circle67(); 

    double calculateVolume(double radius); //구 부피
    double calculateSurfaceArea(double radius); // 구 겉넓이

private:
    const double PI = 3.14; 
};
#endif 
