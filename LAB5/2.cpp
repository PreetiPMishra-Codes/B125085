#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int side, length, breadth;
    double radius;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square = " << area(side) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle = " << area(length, breadth) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle = " << area(radius) << endl;

    return 0;
}
