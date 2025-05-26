#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string weather;
    int temperature;

    cout << "������� ������� ������ (sunny, rainy, snowy): ";
    cin >> weather;

    cout << "������� ������� ����������� � �������� �������: ";
    cin >> temperature;

    if (weather == "sunny") {
        if (temperature > 25) {
            cout << "�����: �������� �������� � �����." << endl;
        }
        else if (temperature > 15) {
            cout << "�����: ������� ����� ������." << endl;
        }
        else {
            cout << "�����: ����� ����� ��������." << endl;
        }
    }
    else if (weather == "rainy") {
        if (temperature > 10) {
            cout << "�����: �������� ���� � �������� ����������������� ������." << endl;
        }
        else {
            cout << "�����: ����� ������ � ���� �����������!" << endl;
        }
    }
    else if (weather == "snowy") {
        if (temperature < 0) {
            cout << "�����: �������� ������ ������, ����� � ��������." << endl;
        }
        else {
            cout << "�����: �������� ����, ����������." << endl;
        }
    }
    else {
        cout << "����������� �������� �������. ��������� ����." << endl;
    }

    return 0;
}
