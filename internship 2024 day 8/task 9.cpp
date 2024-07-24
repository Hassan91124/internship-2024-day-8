#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Choose a shape to calculate area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    displayMenu();
    cin >> choice;
    
    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            cout << "Area of circle: " << 3.14159 * radius * radius << endl;
            break;
        }
        case 2: {
            double side;
            cout << "Enter side length of the square: ";
            cin >> side;
            cout << "Area of square: " << side * side << endl;
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of triangle: " << 0.5 * base * height << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}
