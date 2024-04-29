#ifndef CIRCLE_H
#define CIRCLE_H

class circle12 {
public:
    circle12(); // »ý¼ºÀÚ
    ~circle12(); // ¼Ò¸êÀÚ

    double calculateArea(double radius); // ¿øÀÇ ³ÐÀÌ
    double calculateCircumference(double radius); // ¿øÀÇ µÑ·¹


private:
    const double PI = 3.14; 
};

class circle34 {
public:
    circle34(); 
    ~circle34(); 

    double calculateVolume(double radius, double height); // ¿ø±âµÕÀÇ ºÎÇÇ
    double calculateSurfaceArea(double radius, double height); // ¿ø±âµÕÀÇ °Ñ³ÐÀÌ

private:
    const double PI = 3.14; 
};

class circle5 {
public:
    circle5(); 
    ~circle5(); 

    double calculateVolume(double radius, double height); // ¿ø»Ô ºÎÇÇ

private:
    const double PI = 3.14; 
};

class circle67 {
public:
    circle67(); 
    ~circle67(); 

    double calculateVolume(double radius); //±¸ ºÎÇÇ
    double calculateSurfaceArea(double radius); // ±¸ °Ñ³ÐÀÌ

private:
    const double PI = 3.14; 
};
#endif 
