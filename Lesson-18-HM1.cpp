#include <iostream>
#include <string>

using namespace std;

struct Pracivnyk {
    string prizvyshche;
    int rik_narodzhennia;
    string posada;
    double zarplata;
    string osvita;
};

void pokazatyInfo(const Pracivnyk& p) {
    cout << "Прізвище: " << p.prizvyshche << endl;
    cout << "Рік народження: " << p.rik_narodzhennia << endl;
    cout << "Посада: " << p.posada << endl;
    cout << "Зарплата: " << p.zarplata << endl;
    cout << "Освіта: " << p.osvita << endl;
    cout << "--------------------------" << endl;
}

int main() {
    setlocale(LC_ALL, "");

    Pracivnyk pracivnyky[5] = {
        {"Іваненко", 1985, "Менеджер", 15000.50, "Вища"},
        {"Петренко", 1990, "Програміст", 25000.00, "Вища"},
        {"Сидоренко", 1982, "Бухгалтер", 14000.75, "Середня спеціальна"},
        {"Мельник", 1995, "Консультант", 10000.00, "Вища"},
        {"Коваль", 1988, "Системний адміністратор", 18000.25, "Вища"}
    };

    for (int i = 0; i < 5; ++i) {
        pokazatyInfo(pracivnyky[i]);
    }

    return 0;
}

