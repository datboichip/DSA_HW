#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << n << "! = " << fact << endl;

    return 0;
}

// Time Complexity: O(N)
// Memory Complexity: O(1), O(N) nếu tính cả mảng đầu vào.