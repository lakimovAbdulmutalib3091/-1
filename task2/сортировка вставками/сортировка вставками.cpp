#include <iostream>

using namespace std;

int Sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  
        int j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

      
        arr[j + 1] = key;
    }
}

int printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl; 
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]); 
    setlocale(LC_ALL, ("rus"));

    cout << "Исходный массив: ";
    printArray(arr, n);  

    Sort(arr, n); 

    cout << "Отсортированный массив: ";
    printArray(arr, n); 

    return 0;
}