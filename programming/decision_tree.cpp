#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string weather;
    int temperature;

    cout << "Введите текущую погоду (sunny, rainy, snowy): ";
    cin >> weather;

    cout << "Введите текущую температуру в градусах Цельсия: ";
    if (!(cin >> temperature)) {
        cout << "Ошибка ввода: введите числовое значение температуры." << endl;
        return 1;
    }
    cout << endl;
    cout << "Совет: ..." << endl;
    if (weather == "sunny") {
        if (temperature > 25) {
            cout << "Совет: наденьте футболку и шорты." << endl;
        }
        else if (temperature > 15) {
            cout << "Совет: подойдёт лёгкая куртка." << endl;
        }
        else {
            cout << "Совет: лучше взять ветровку." << endl;
        }
    }
    else if (weather == "rainy") {
        if (temperature > 10) {
            cout << "Совет: возьмите зонт и наденьте водонепроницаемую куртку." << endl;
        }
        else {
            cout << "Совет: тёплая куртка и зонт обязательны!" << endl;
        }
    }
    else if (weather == "snowy") {
        if (temperature < 0) {
            cout << "Совет: наденьте зимнюю одежду, шапку и перчатки." << endl;
        }
        else {
            cout << "Совет: возможен снег, утеплитесь." << endl;
        }
    else if (weather == "cloudy") {
        if (temperature > 20) {
            cout << "Совет: можно надеть лёгкую кофту." << endl;
        }
        else {
            cout << "Совет: возьмите с собой куртку, на случай похолодания." << endl;
        }
    }
    }
    else {
        cout << "Неизвестные погодные условия. Проверьте ввод." << endl;
    }

    return 0;
}
