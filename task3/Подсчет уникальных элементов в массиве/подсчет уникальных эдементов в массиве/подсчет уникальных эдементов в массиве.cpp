#include <iostream>
#include <unordered_map> 
using namespace std;

int main() {
    setlocale(LC_ALL,"rus");
    
    int arr[] = { 1, 2, 3, 4, 2, 3, 5, 1, 6 };
    int n = sizeof(arr) / sizeof(arr[0]); 

    
    unordered_map<int, int> frequency;

    
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }


    int uniqueCount = 0;
    for (auto& pair : frequency) {
        if (pair.second == 1) {
            uniqueCount++;
        }
    }

    cout << "Количество уникальных элементов: " << uniqueCount << endl;

    return 0;
}