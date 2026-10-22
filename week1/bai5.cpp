#include <iostream>
using namespace std;

int main() {
    int n;
    double a[1000];
    double sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    const double average = sum / n;

    cout << "Average = " << average << endl;

    cout << "Numbers >= average: ";

    for (int i = 0; i < n; i++) {
        if (a[i] >= average)
            cout << a[i] << " ";
    }

    return 0;
}
// Time complexity: O(N)
// Memory complexity: O(1)