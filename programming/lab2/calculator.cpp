#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double a, b;
    char op;

    cout << "������� ��������� (��������, 2 + 2): ";
    cin >> a >> op >> b;

    switch (op) {
    case '+': cout << a + b << endl; break;
    case '-': cout << a - b << endl; break;
    case '*': cout << a * b << endl; break;
    case '/':
        while (b == 0) {
            cout << "������: ������� �� ����! ������� ������ ��������: ";
            cin >> b;
        }
        cout << a / b << endl;
        break;

    default: cout << "����������� ��������" << endl;
    }

    return 0;
}
