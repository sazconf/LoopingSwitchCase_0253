#include <iostream>
using namespace std;

float rectangleArea(float length, float width) {
    return length * width;
}

float circleArea(float radius) {
    return 3.14 * radius * radius;
}

int main(){
    int choice;
    float length, width;
    float radius;

    do {
        cout << "Menu" << endl;
        cout << "1. Rectangle Area" << endl;
        cout << "2. Circle Area" << endl;
        cout << "3. Exit" << endl;

        cout << "Choice (1/2/3) = ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Calculate rectangle area" << endl;
                cout << "Enter length = ";
                cin >> length;
                cout << "Enter width = ";
                cin >> width;
                cout << "Rectangle area = " << rectangleArea(length, width) << endl;
                break;
            case 2:
                cout << "Calculate circle area" << endl;
                cout << "Enter radius = ";
                cin >> radius;
                cout << "Circle area = " << circleArea(radius) << endl;
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice, please select a number between 1 and 3." << endl;
                break;
        }
    } while(choice != 3);
}
