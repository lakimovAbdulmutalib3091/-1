#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

bool contains(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "ru");

    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    if (size <= 0) {
        cout << "Размер массива должен быть положительным." << endl;
        return 1;
    }

    int* numbers = new int[size];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int maxElement = findMax(numbers, size);

    int findNumber;
    cout << "Введите число, которое хотите найти: ";
    cin >> findNumber;
    bool found = contains(numbers, size, findNumber);

    int sum = sumArray(numbers, size);

    if (found) {
        cout << "Ваше число есть в массиве." << endl;
    } else {
        cout << "Вашего числа нет в массиве." << endl;
    }
    cout << "Максимальный элемент: " << maxElement << endl;
    cout << "Сумма всех элементов массива: " << sum << endl;

    delete[] numbers;

    return 0;
}
