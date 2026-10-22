#include <iostream>
using namespace std;

static int sumArray(int a[][100], const int n, const int m) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }

    return sum;
}

static void deleteRow(int a[][100], int &n, const int m, const int i) {
    if (i < 0 || i >= n)
        return;

    for (int row = i; row < n - 1; row++) {
        for (int col = 0; col < m; col++) {
            a[row][col] = a[row + 1][col];
        }
    }

    n--;
}

int main() {
    int n, m;
    int a[100][100];

    cout << "Enter array size: ";
    cin >> n >> m;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Sum of array elements = "
         << sumArray(a, n, m) << endl;

    int i;
    cout << "Enter row index to delete: ";
    cin >> i;

    deleteRow(a, n, m, i);

    cout << "Array after deleting row " << i << ":\n";

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}

//sumArray
//Time complexity: O(n*m)
//Memory complexity: O(1)
//deleteRow
//Time complexity: O(n*m)
//Memory complexity: O(1)