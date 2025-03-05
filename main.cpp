#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    string woSpaces;

    transform(s.begin(), s.end(), s.begin(),
              ::tolower);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            woSpaces += s[i];
        }
    }

    for (int i = 0; i < woSpaces.length() / 2; i++) { //прогоняем все индексы до середины строки
        if (woSpaces[i] != woSpaces[woSpaces.length() - i - 1]) { //если i-й символ с левого и правого концов не совпадают
            return false; //то строка не является палиндромом:(
        }
    }
    return true;
}

// это функция чтобы проверять является ли символ буквой
bool isSymb(char ch) {
    string symbols = "јџќ®†њѓѕў‘“ъƒыћ÷©₽°љ∆…ђ≈≠µи™~≤≥“!№%:,.;()_+-]{}!@#$%^&*";
    // это огромная строка со всеми буквами
    for (int i = 0; i < symbols.size(); i++) {
        if (symbols[i] == ch) {
            return false;    //если символ - special, то возвращаем false
        }
    }
    return true;           //если все прошли, но ничего не нашли, значит false
}

string delSpecials(string s) {
    string result = "";     //возвращаемая строка, которая будет без спец. символов
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || isSymb(s[i])) {      //проверка на букву (функция выше) и пробел
            result += s[i];
        }
    }
    return result;
}

int main(){
    while (true) { //можно гонять задачки сколько хочется без перезапуска
        cout << "Выберите задачу:" << endl;
        cout << "1. Является ли строка палиндромом" << endl;
        cout << "2. Удалить спецсимволы из строки" << endl;
        cout << "3. Выход" << endl;
        int choice;
        cin >> choice; //программа-меню (так в первом семестре говорили)
        cin.clear(); //защита от поломки в случае ввода текста вместо числа
        cin.ignore(128,'\n');
        switch (choice) {
            case 1: {
                string input;
                cout << "Введите строку: ";
                getline(cin, input);
                bool checkResult = isPalindrome(input);
                string output = checkResult ? "Строка - палиндром" : "Строка - не палиндром"; //ответ через тернарный оператор
                cout << output << endl;
                }
                break;
            case 2: {
                string input;
                cout << "Введите строку: ";
                cin.ignore();  // Добавляем игнорирование символа новой строки чтобы getline нормально работал
                getline(cin, input); //getline вместо cin потому что cin работает до пробела
                string output = delSpecials(input);
                cout << output << endl;
                }
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