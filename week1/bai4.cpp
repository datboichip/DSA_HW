#include <iostream>
using namespace std;

static int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

static void simplify(int &a, int &b) {
    int g = gcd(a, b);

    a /= g;
    b /= g;
}

int main() {
    int a, b;

    cin >> a >> b;

    if (b == 0) {
        cout << "Mau so khong hop le.";
        return 0;
    }

    simplify(a, b);

    cout << "Phan so toi gian: " << a << "/" << b << endl;

    return 0;
}

// Time Complexity: O(N)
// Memory Complexity: O(1)