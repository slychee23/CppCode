#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14159;
    double radius, length;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the length of the cylinder: ";
    cin >> length;

    double area = radius*radius*pi;
    double volume = area*length;

    cout << "The area of the cylinder is: " << area << endl;
    cout << "The volume of the cylinder is: " << volume << endl;
    return 0;
}
