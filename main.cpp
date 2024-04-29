#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    double radius;
    double height; 
    int choice;

    while (true) {
        // ����ڰ� ���ϴ� ��� ����
        cout << "���ϴ� ����� �����ϼ���" << endl;
        cout << "1. ���� ���� ���" << endl;
        cout << "2. ���� �ѷ� ���" << endl;
        cout << "3. ������� ���� ���" << endl;
        cout << "4. ������� �ѳ��� ���" << endl;
        cout << "5. ������ ���� ���" << endl;
        cout << "6. ���� ���� ���" << endl;
        cout << "7. ���� �ѳ��� ���" << endl;
        cout << "8. ����" << endl;
        cout << "����: ";
        cin >> choice;
        
  
        if (choice == 8) {
            cout << "\n���α׷��� �����մϴ�." << endl;
            break;
        }


        switch (choice) {
        case 1: {
            cout << "\n������ �Է�: ";
            cin >> radius; 
            circle12 calc; 
            // ���� ��� �� ���
            double area = calc.calculateArea(radius);
            cout << "\n��� ���� ����: " << area << endl;
            break;
        }
        case 2: {
            cout << "\n������ �Է�: ";
            cin >> radius;
            circle12 calc; 
            // �ѷ� ��� �� ���
            double circumference = calc.calculateCircumference(radius);
            cout << "\n���� �ѷ�: " << circumference << endl;
            break;
        }
        case 3: {
            cout << "\n������ �Է�: ";
            cin >> radius;
            cout << "\n���� �Է�: ";
            cin >> height; 
            circle34 calc; 
            // ����� ���� ��� �� ���
            double volume = calc.calculateVolume(radius, height);   
            cout << "\n������� ����: " << volume << endl;  
            break;
        }
        case 4: {
            cout << "\n������ �Է�: ";
            cin >> radius;
            cout << "\n���� �Է�: ";
            cin >> height; 
            circle34 calc; 
            // ����� �ѳ��� ��� �� ���
            double surfaceArea = calc.calculateSurfaceArea(radius, height);
            cout << "\n������� �ѳ���: " << surfaceArea << endl; 
            break; 
        }
        case 5: {
            cout << "\n������ �Է�: ";
            cin >> radius;
            cout << "\n���� �Է�: ";
            cin >> height; 
            circle5 calc; 
            // ���� ���� ��� �� ���
            double volume = calc.calculateVolume(radius, height); 
            cout << "\n������ ����: " << volume << endl; 
            break;
        }
        case 6: {
            cout << "\n������ �Է�: ";
            cin >> radius;
            circle67 calc;  
            // �� ���� ��� �� ���
            double volume = calc.calculateVolume(radius); 
            cout << "\n���� ����: " << volume << endl; 
            break;
        }
        case 7: {
            cout << "\n������ �Է�: ";
            cin >> radius;
            circle67 calc; 
            // �� �ѳ��� ��� �� ���
            double surfaceArea = calc.calculateSurfaceArea(radius);
            cout << "\n���� �ѳ���: " << surfaceArea << endl; 
            break;
        }
        default:
            cout << "\n�߸��� �����Դϴ�.\n\n" << endl;
        }
    }
    return 0;
}
