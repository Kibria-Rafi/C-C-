#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers do you want to input in an array: ";
    cin >> n;
    int a[n];
    cout << "Enter your array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n - 1; j++) {
        int minIndex = j;
        for (int k = j + 1; k < n; k++) {
            if (a[minIndex] > a[k]) {
                minIndex = k;
            }
        }
        if (minIndex != j) {
            int temp = a[j];
            a[j] = a[minIndex];
            a[minIndex] = temp;
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
