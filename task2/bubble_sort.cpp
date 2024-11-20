#include <iostream>
using namespace std;

int  main(){
    setlocale(LC_ALL, "ru");

    
    int size; //размер массива
    cout << "введите количество элементов в масииве : " << endl;
    cin >> size;
    while (size<=0  ){
        cout << "Ошибка! введите размер массива должен быть больше нуля : " << endl;
        cin >> size;
    }

    int* sort=new int[size]; //made array

      // Заполнение массива
    for (int i = 0; i < size; ++i) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> sort[i];
    }

delete[] sort;


}