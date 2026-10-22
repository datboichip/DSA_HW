#include <iostream>
using namespace std;

static void deleteAt(int a[], int &n, const int k) {
    if (k < 0 || k >= n)
        return;

    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;
}

static void insertAt(int a[], int &n, const int m, const int y) {
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }

    a[m] = y;
    n++;
}

int main() {
    int n, k, y;
    int a[1000];

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the position to delete: ";
    cin >> k;
    deleteAt(a, n, k);

    cout << "The array after deletion: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    cout << "Enter the position to insert: ";
    cin >> k;

    cout << "Enter the value to insert: ";
    cin >> y;

    if (k >= 0 && k <= n && n < 1000) {
        insertAt(a, n, k, y);
    }

    cout << "The array after insertion: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    return 0;
}

// deleteAt:
// Time complexity: O(n)
// Memory complexity: O(1)
// insertAt:
// Time complexity: O(n)
// Memory complexity: O(1)