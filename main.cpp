#include <iostream>

using namespace std;

bool isPalindrome(string &s) {
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    cout << "Введите строку" << endl;
    string input;
    cin >> input;
    string output = isPalindrome(input) ? "Строка - палиндром" : "Строка - не палиндром";
    cout << output << endl;
    return 0;
}

