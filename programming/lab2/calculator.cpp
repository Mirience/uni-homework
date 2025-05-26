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
        if (b != 0)
            cout << a / b << endl;
        else
            cout << "Ошибка: деление на ноль!" << endl;
        break;
    default: cout << "Неизвестная операция" << endl;
    }

    return 0;
}
