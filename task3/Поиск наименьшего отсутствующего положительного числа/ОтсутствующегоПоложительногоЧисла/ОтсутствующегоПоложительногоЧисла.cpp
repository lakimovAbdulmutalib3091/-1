#include <iostream>
using namespace std;

int findMissingPositive(int arr[], int n) {
    setlocale(LC_ALL,"rus");
    
    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
            
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

   
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

        
    return n + 1;
}

int main() {
    
    int arr[] = { 3, 4, -1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMissingPositive(arr, n);

    cout << "Наименьшее положительное число, которого нет в массиве: " << result << endl;

    return 0;
}