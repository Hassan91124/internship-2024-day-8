#include <iostream>
using namespace std;

void triangleType(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid" << endl;
    } else if (a == b && b == c) {
        cout << "Equilateral" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles" << endl;
    } else {
        cout << "Scalene" << endl;
    }
}

int main() {
    int a, b, c;
    cout << "Enter three side lengths: ";
    cin >> a >> b >> c;
    triangleType(a, b, c);
    return 0;
}
