#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double a, b;
    char op;
    cout << "������� 'q' ��� ������ ��� ������ (��������: 2 + 2): ";
    string input;
    cin >> input;
    if (input == "q") return 0;
    a = stod(input);
    cin >> op >> b;


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
    case '%':
        cout << "������� �� �������: " << int(a) % int(b) << endl;
        break;


    default: cout << "����������� ��������" << endl;
    }

    return 0;
}
