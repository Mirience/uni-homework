#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    unordered_map<string, int> phoneBook;

    phoneBook["���"] = 12345;
    phoneBook["�����"] = 67890;
    phoneBook["����"] = 11111;

    string name;
    cout << "������� ��� ��� ������ ������: ";
    cin >> name;

    if (phoneBook.count(name)) {
        cout << "�����: " << phoneBook[name] << endl;
    }
    else {
        cout << "������� �� ������." << endl;
    }
    string toDelete;
    cout << "������� ��� ��� ��������: ";
    cin >> toDelete;

    if (phonebook.erase(toDelete)) {
        cout << "������� �����." << endl;
    }
    else {
        cout << "������� �� ������ ��� ��������." << endl;
    }
    cout << "\n������� ��������:\n";
    for (auto& pair : phonebook) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
