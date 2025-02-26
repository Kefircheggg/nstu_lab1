#include <iostream>

using namespace std;

int main() {
    cout << "Выберите задачу:" << endl;
    cout << "1. Является ли строка палиндромом" << endl;
    cout << "2. Удалить спецсимволы из строки" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "keker";
            break;
        case 2:
            cout << "loler";
            break;
        default:
            cout << "Неизвестная команда";
    }
    return 0;
}

