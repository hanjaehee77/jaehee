#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    double radius;
    double height; 
    int choice;

    while (true) {
        // 사용자가 원하는 기능 선택
        cout << "원하는 계산을 선택하세요" << endl;
        cout << "1. 원의 넓이 계산" << endl;
        cout << "2. 원의 둘레 계산" << endl;
        cout << "3. 원기둥의 부피 계산" << endl;
        cout << "4. 원기둥의 겉넓이 계산" << endl;
        cout << "5. 원뿔의 부피 계산" << endl;
        cout << "6. 구의 부피 계산" << endl;
        cout << "7. 구의 겉넓이 계산" << endl;
        cout << "8. 종료" << endl;
        cout << "선택: ";
        cin >> choice;
        
  
        if (choice == 8) {
            cout << "\n프로그램을 종료합니다." << endl;
            break;
        }


        switch (choice) {
        case 1: {
            cout << "\n반지름 입력: ";
            cin >> radius; 
            circle12 calc; 
            // 넓이 계산 및 출력
            double area = calc.calculateArea(radius);
            cout << "\n평면 원의 넓이: " << area << endl;
            break;
        }
        case 2: {
            cout << "\n반지름 입력: ";
            cin >> radius;
            circle12 calc; 
            // 둘레 계산 및 출력
            double circumference = calc.calculateCircumference(radius);
            cout << "\n원의 둘레: " << circumference << endl;
            break;
        }
        case 3: {
            cout << "\n반지름 입력: ";
            cin >> radius;
            cout << "\n높이 입력: ";
            cin >> height; 
            circle34 calc; 
            // 원기둥 넓이 계산 및 출력
            double volume = calc.calculateVolume(radius, height);   
            cout << "\n원기둥의 부피: " << volume << endl;  
            break;
        }
        case 4: {
            cout << "\n반지름 입력: ";
            cin >> radius;
            cout << "\n높이 입력: ";
            cin >> height; 
            circle34 calc; 
            // 원기둥 겉넓이 계산 및 출력
            double surfaceArea = calc.calculateSurfaceArea(radius, height);
            cout << "\n원기둥의 겉넓이: " << surfaceArea << endl; 
            break; 
        }
        case 5: {
            cout << "\n반지름 입력: ";
            cin >> radius;
            cout << "\n높이 입력: ";
            cin >> height; 
            circle5 calc; 
            // 원뿔 부피 계산 및 출력
            double volume = calc.calculateVolume(radius, height); 
            cout << "\n원뿔의 부피: " << volume << endl; 
            break;
        }
        case 6: {
            cout << "\n반지름 입력: ";
            cin >> radius;
            circle67 calc;  
            // 구 부피 계산 및 출력
            double volume = calc.calculateVolume(radius); 
            cout << "\n구의 부피: " << volume << endl; 
            break;
        }
        case 7: {
            cout << "\n반지름 입력: ";
            cin >> radius;
            circle67 calc; 
            // 구 겉넓이 계산 및 출력
            double surfaceArea = calc.calculateSurfaceArea(radius);
            cout << "\n구의 겉넓이: " << surfaceArea << endl; 
            break;
        }
        default:
            cout << "\n잘못된 숫자입니다.\n\n" << endl;
        }
    }
    return 0;
}
