//
// Created by Артем Скороходов on 26.02.2025.
//

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
}

int main(){
    string s = "";
    cout<<"Enter a string: ";
    getline(cin, s);
    string result = delSpecials(s);
    cout<<result;
}