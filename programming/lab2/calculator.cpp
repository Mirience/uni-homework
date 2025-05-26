#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double a, b;
    char op;

    cout << "Введите выражение (например, 2 + 2): ";
    cin >> a >> op >> b;

    switch (op) {
    case '+': cout << a + b << endl; break;
    case '-': cout << a - b << endl; break;
    case '*': cout << a * b << endl; break;
    case '/':
        while (b == 0) {
            cout << "Ошибка: деление на ноль! Введите другое значение: ";
            cin >> b;
        }
        cout << a / b << endl;
        break;

    default: cout << "Неизвестная операция" << endl;
    }

    return 0;
}
