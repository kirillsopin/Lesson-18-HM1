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
        {"Іваненко", 1950, "Менеджер", 15000.50, "Вища"},
        {"Петренко", 1990, "Програміст", 25000.00, "Вища"},
        {"Сидоренко", 1960, "Бухгалтер", 14000.75, "Середня спеціальна"},
        {"Мельник", 1995, "Консультант", 10000.00, "Вища"},
        {"Коваль", 1988, "Системний адміністратор", 18000.25, "Вища"}
    };

    const int potocnyRik = 2025;
    int count = 0;

    cout << "Усі працівники:\n";
    for (int i = 0; i < 5; ++i) {
        pokazatyInfo(pracivnyky[i]);
    }

    cout << "\nПрацівники, старші за 60 років:\n";
    for (int i = 0; i < 5; ++i) {
        int vik = potocnyRik - pracivnyky[i].rik_narodzhennia;
        if (vik > 60) {
            pokazatyInfo(pracivnyky[i]);
            ++count;
        }
    }

    cout << "\nПрізвища працівників, старших за 60 років:\n";
    for (int i = 0; i < 5; ++i) {
        int vik = potocnyRik - pracivnyky[i].rik_narodzhennia;
        if (vik > 60) {
            cout << "- " << pracivnyky[i].prizvyshche << endl;
        }
    }

    cout << "Загальна кількість працівників старших за 60 років: " << count << endl;

    return 0;
}




