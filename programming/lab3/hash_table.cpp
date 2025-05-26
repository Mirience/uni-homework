#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
void printAllContacts(const unordered_map<string, int>& pb) {
    for (auto& p : pb) {
        cout << p.first << ": " << p.second << endl;
    }
}

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
    printAllContacts(phonebook);
    string newName;
    int newNumber;
    cout << "�������� ������� (���): ";
    getline(cin >> ws, newName);
    cout << "�����: ";
    cin >> newNumber;
    phonebook[newName] = newNumber;
    cout << "������� ��������." << endl;


    return 0;
}
