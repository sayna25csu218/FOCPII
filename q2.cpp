#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of the circular fountain: " << area << endl;

    return 0;
}
