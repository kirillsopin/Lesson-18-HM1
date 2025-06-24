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
}

int main() {
    setlocale(LC_ALL, "");
    

    Pracivnyk pracivnyk1 = {
        "Іваненко",
        1985,
        "Менеджер",
        15000.50,
        "Вища"
    };

    pokazatyInfo(pracivnyk1);

    return 0;
}
