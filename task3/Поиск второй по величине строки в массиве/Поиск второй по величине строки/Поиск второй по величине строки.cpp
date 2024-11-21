#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
   
    vector<string> words = { "apple", "banana", "charry", "date", "elderberry","5" };

  
    if (words.size() < 2) {
        cout << "Недостаточно строк для нахождения второй по величине." << endl;
        return 0;
    }

    
    string maxStr = "";
    string secondMaxStr = ""; 

    
    for (int i = 0; i < words.size(); i++) {
        if (words[i] > maxStr) {
            maxStr = words[i];
        }
    }

   
    for (int i = 0; i < words.size(); i++) {
        
        if (words[i] != maxStr && words[i] > secondMaxStr) {
            secondMaxStr = words[i];
        }
    }

   
    if (secondMaxStr != "") {
        cout << "Вторая по величине строка: " << secondMaxStr << endl;
    }
    else {
        cout << "Вторая по величине строка не найдена." << endl;
    }

    return 0;
}