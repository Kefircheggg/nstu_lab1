#include <iostream>
#include <string>
using namespace std;

bool isSymb(char ch){
    string symbols = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
    for (int i = 0; i < symbols.size(); i++) {
        if (symbols[i] == ch) {
            return true;
        }
    }
    return false;
}

string delSpecials(string s){
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || isSymb(s[i])) {
            result += s[i];
        }
    }
    return result;

int main() {
    while (true) {
        cout << "Выберите задачу:" << endl;
        cout << "1. Является ли строка палиндромом" << endl;
        cout << "2. Удалить спецсимволы из строки" << endl;
        cout << "3. Выход" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "keker" << endl;
                break;
            case 2:
                cout << "loler" << endl;
                break;
            case 3:
                cout << "Пока!" << endl;
                exit(0);
            default:
                cout << "Неизвестная команда" << endl;
        }
    }

    return 0;
}