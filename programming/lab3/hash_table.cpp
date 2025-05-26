#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    unordered_map<string, int> phoneBook;

    phoneBook["Аня"] = 12345;
    phoneBook["Борис"] = 67890;
    phoneBook["Катя"] = 11111;

    string name;
    cout << "Введите имя для поиска номера: ";
    cin >> name;

    if (phoneBook.count(name)) {
        cout << "Номер: " << phoneBook[name] << endl;
    }
    else {
        cout << "Контакт не найден." << endl;
    }
    string toDelete;
    cout << "Введите имя для удаления: ";
    cin >> toDelete;

    if (phonebook.erase(toDelete)) {
        cout << "Контакт удалён." << endl;
    }
    else {
        cout << "Контакт не найден для удаления." << endl;
    }
    return 0;
}
