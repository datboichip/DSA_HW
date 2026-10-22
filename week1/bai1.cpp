#include <iostream>
using namespace std;

int main() {
    int n;
    int a[1000];
    int sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}

// Time Complexity: O(N)
// Memory Complexity: O(N)
