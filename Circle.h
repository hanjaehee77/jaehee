#ifndef CIRCLE_H
#define CIRCLE_H

class circle12 {
public:
    circle12(); // ������
    ~circle12(); // �Ҹ���

    double calculateArea(double radius); // ���� ����
    double calculateCircumference(double radius); // ���� �ѷ�


private:
    const double PI = 3.14; 
};

class circle34 {
public:
    circle34(); 
    ~circle34(); 

    double calculateVolume(double radius, double height); // ������� ����
    double calculateSurfaceArea(double radius, double height); // ������� �ѳ���

private:
    const double PI = 3.14; 
};

class circle5 {
public:
    circle5(); 
    ~circle5(); 

    double calculateVolume(double radius, double height); // ���� ����

private:
    const double PI = 3.14; 
};

class circle67 {
public:
    circle67(); 
    ~circle67(); 

    double calculateVolume(double radius); //�� ����
    double calculateSurfaceArea(double radius); // �� �ѳ���

private:
    const double PI = 3.14; 
};
#endif 
