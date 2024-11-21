#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

bool Palindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    setlocale(LC_ALL, "rus");
    string input = "a man, a plan, a canal, panama";

    if (Palindrome(input)) {
        cout << "Строка является палиндромом." << endl;
    }
    else {
        cout << "Строка не является палиндромом." << endl;
    }

    return 0;
}