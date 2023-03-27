#include <iostream>
using namespace std;

template <typename v>
void swapValues(v& a, v& b) {
    v temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 20;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapValues(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
