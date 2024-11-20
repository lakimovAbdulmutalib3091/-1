#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int size; //размер массива
    cout << "Введите количество элементов в массиве: ";
    cin >> size;

    while (size <= 0) {
        cout << "Ошибка! Размер массива должен быть больше нуля: ";
        cin >> size;
    }

    int* digitals = new int[size]; // создание динамического массива

    // Заполнение массива
    for (int i = 0; i < size; ++i) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> digitals[i];
    }

    // Пузырьковая сортировка с флагом
    for (int i = 0; i < size; i++) {
        bool swapped = false; // флаг, показывающий был ли обмен
        for (int j = 0; j < size - 1 - i; j++) { // size - 1 - i для оптимизации
            if (digitals[j] > digitals[j + 1]) {
                // Обмен элементов
                int b = digitals[j];
                digitals[j] = digitals[j + 1];
                digitals[j + 1] = b;

                swapped = true; // если обмен был, ставим флаг в true
            }
        }
        // Если не было обменов, массив отсортирован
        if (!swapped) {
            break;
        }
    }

    // Вывод отсортированного массива
    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << digitals[i] << " ";
    }
    cout << endl;

    delete[] digitals; // удаление динамического массива
    return 0;
}
