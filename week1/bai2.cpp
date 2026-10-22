#include <iostream>
using namespace std;

static void sortArray_ascending(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

int main() {
    int n;
    int a[1000];
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sortArray_ascending(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

// Time Complexity: O(N^2)
// Memory Complexity: O(1), O(N) nếu tính cả mảng đầu vào.