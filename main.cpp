#include <iostream>

using namespace std;

int main() {
    while (true) {
        cout << "Выберите задачу:" << endl;
        cout << "1. Является ли строка палиндромом" << endl;
        cout << "2. Удалить спецсимволы из строки" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "keker" << endl;
                break;
            case 2:
                cout << "loler" << endl;
                break;
            default:
                cout << "Неизвестная команда" << endl;
        }
    }

    return 0;
}

